/*******************************************************************

	comun.cc

	Fichero con el codigo de funciones de uso general que son
	utilizadas en estos programas.

	Autor: Ignacio Martin Bragado
	email: ignacio.martin@tel.uva.es
*******************************************************************/

/******************************************************************

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
********************************************************************/

#include "comun.h"

/********************************************************************

	Clase CONF

	Lee parametros diversos de un fichero de configuración.

*********************************************************************/


CONF::CONF(char *fichero)
{
//	printf("Leyendo el fichero de configuración %s.\n",fichero);
	fich=fopen(fichero,"r");
	if (!fich)
		fatal(NO_FICHERO,fichero);	//No se puede abrir
}

CONF::~CONF()
{
	if (fich)		//Cierra el fichero;
		fclose(fich);
}	

long double CONF::tomaf(char *que)
{
	rewind(fich);		//Ponte al principio

	fgets(cad,254,fich);	//Lee una cadena
	while(!feof(fich))	//Mientras no se acabe el fichero
	{	if( !strcasecmp(TomaToken("; =\t",cad),que) )	//Si coincide
			return(atof(TomaToken(" ;\n")));

		fgets(cad,254,fich);
	}
	fatal(NO_CONF,que);
	return 0;
}

int CONF::tomai(char *que)
{
	rewind(fich);		//Ponte al principio

	fgets(cad,254,fich);	//Lee una cadena
	while(!feof(fich))	//Mientras no se acabe el fichero
	{	if( !strcasecmp(TomaToken("; =\t",cad),que) )	//Si coincide
			return(atoi(TomaToken(" ;\n\t")));

		fgets(cad,254,fich);
	}
	fatal(NO_CONF,que);
	return 0;
}

char * CONF::tomas(char *que)
{
	rewind(fich);		//Ponte al principio

	fgets(cad,254,fich);	//Lee una cadena
	while(!feof(fich))	//Mientras no se acabe el fichero
	{	if( !strcasecmp(TomaToken("; =\t",cad),que) )	//Si coincide
			return(TomaToken(" ;\n\t"));

		fgets(cad,254,fich);
	}
	fatal(NO_CONF,que);
	return 0;
}

char CONF::tomab(char *que)
{
	rewind(fich);		//Ponte al principio
	char c;

	fgets(cad,254,fich);	//Lee una cadena
	while(!feof(fich))	//Mientras no se acabe el fichero
	{	if( !strcasecmp(TomaToken("; =\t",cad),que) )	//Si coincide
		{	c = *TomaToken(" ;\n\t");
			return (c=='S' || c=='s')? 1:0;
		}

		fgets(cad,254,fich);
	}
	fatal(NO_CONF,que);
	return 0;
}

/********************************************************************

	Clase LINEA_COM

	Lee parametros diversos de un fichero de configuración.

*********************************************************************/

LINEA_COM::LINEA_COM(int ac,char **av)
{
	printf( _("Procesing %d args of command line\n") ,ac-1);
	argc=ac;
	argv=av;
}

char LINEA_COM::toma(char *que)
{
	for (i=1;i<argc;i++)
	{	if (!strcmp(que,argv[i]))	//Si coinciden
			return 1;
	}
	return 0;	//Si no lo encuentra devuelve FALSO
}

long double LINEA_COM::tomaf(char *que, long double & param)
{
	for (i=1;i<argc;i++)
	{	if (!strcmp(que,argv[i]))	//Si coinciden
		{	if (i+1==argc)
				fatal(NO_COM,que);
			param=atof(argv[i+1]);
			return param;
		}
	}
	return param;	//SI no lo encuentra lo deja como esta
}

int LINEA_COM::tomai(char *que, int & param)
{
	for (i=1;i<argc;i++)
	{	if (!strcmp(que,argv[i]))	//Si coinciden
		{	if (i+1==argc)
				fatal(NO_COM,que);
			param=atoi(argv[i+1]);
			return param;
		}
	}
	return param;	//SI no lo encuentra lo deja como esta
}


char * LINEA_COM::tomas(char *que,  char * param)
{
	for (i=1;i<argc;i++)
	{	if (!strcmp(que,argv[i]))	//Si coinciden
		{	if (i+1==argc)
				fatal(NO_COM,que);
			strcpy(param,argv[i+1]);
			return param;
		}
	}
	return param;	//SI no lo encuentra lo deja como esta
}

char LINEA_COM::tomab(char *que, char & param)
{
	char c;

	for (i=1;i<argc;i++)
	{	if (!strcmp(que,argv[i]))	//Si coinciden
		{	if (i+1==argc)
				fatal(NO_COM,que);
			c=*argv[i+1];
			param=(c == 'S' || c == 's' )? 1:0;
			return param;
		}
	}
	return param;	//SI no lo encuentra lo deja como esta
}

/*********************************************************************
	Otras funciones de utilidad
**********************************************************************/

char * TomaToken(char *que, char * cad)
{
	static char * p;
	char * mando;
	static char text[255];

	if (cad)
	{	strcpy(text,cad);		//Se inicia.
		p=text;
	}

	while (strchr(" \t=",*p))
		p++;		//Quito espacios vacíos,tabulaciones,etc

	mando=p;		//Aquí comienza

	while (!strchr(que,*p))
		p++;		//Avanzo hasta encontrar ciertos caracteres

	*p=0;			//Aqui termino cadena
	p++;			//Apunto al siguiente
	return mando;
}

void inicia(char *programa, char *version, FILE *fich)
{
	fprintf(fich,"%s Version: %s ",programa, version);
	fprintf(fich,"(C) Ignacio Martín Bragado '97\n");
	fprintf(fich, _("GNU program. For further information type %s -info\n")
		,programa);
}
	

char *strcasestr(char *grande,char *peque)
{
	char cad1[81],cad2[81], *p;
	strcpy(cad1,grande);
	strcpy(cad2,peque);
	p=cad1;
	while( *p) 
	{   *p=(char)toupper(*p);
	    p++;
	}
	p=cad2;
	while( *p) 
	{   *p=(char)toupper(*p);
	    p++;
	}
	return strstr(cad1,cad2);
}

void fatal(int error,char * porque)
{
   switch(error)
     {	
     case NO_CONF:
	fprintf(stderr, _("ERROR: `%s' param is not config\n"),
		porque);
	break;
     case NO_COM:
	fprintf(stderr, _("ERROR: Missing argument in `%s'\n"),
		porque);
	break;
		case NO_FICHERO:
		fprintf(stderr, _("ERROR: File %s not exist or it isn't writeable\n"),
			porque);
	break;
     case NO_MEM:
	fprintf(stderr,_("ERROR: Not enough memory") );
	break;
     default:
	fprintf(stderr,"ERROR: %s",porque);
	break;
     }
   exit(1);
}

void casifatal(int error,char * porque)
{
   switch(error)
     {
     case NO_CONF:
	fprintf(stderr, _("ERROR: %s' param is not config\n"),
		porque);
	break;
     case NO_COM:
	fprintf(stderr, _("ERROR: Missing argument in %s'\n"),
		porque);
	break;
     case NO_FICHERO:
	fprintf(stderr, _("ERROR: File %s not exist or it isn't writeable\n"),
		porque);
	break;
     case NO_MEM:
	fprintf(stderr,_("ERROR: Not enough memory") );
	break;
     default:
	fprintf(stderr,"ERROR: %s",porque);
	break;
     }
   fprintf(stderr,_("Ignoring error\n"));
}

void pon_licencia(void)
{
	puts("\n\n\
    This program is free software; you can redistribute it and/or modify\n\
    it under the terms of the GNU General Public License as published by\n\
    the Free Software Foundation; either version 2 of the License, or\n\
    (at your option) any later version.\n\
\n\
    This program is distributed in the hope that it will be useful,\n\
    but WITHOUT ANY WARRANTY; without even the implied warranty of\n\
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n\
    GNU General Public License for more details.\n\
\n\
    You should have received a copy of the GNU General Public License\n\
    along with this program; if not, write to the Free Software\n\
    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.\n\
\n\
    For further information read the file COPYING\n\n");

}

int frase_ayuda(char *topico, char *nombre_fich, void (*func)(char *))
{
	char cad[255];
	char que[255];
	char bandera=0,esta=0;

	FILE *fich = fopen(nombre_fich,"r");
	if (!fich)
	{	perror("frase_ayuda");
		return 1;
	}
	while(1)
	{	fgets(cad,255,fich);
		sprintf(que,"%s %s\n",(bandera) ? "Fin":"Inicio",topico);
		if (!strcmp(cad,que))
			bandera=!bandera;
		else
		{
			if (feof(fich))
				break;
			if (bandera)
			{	esta=1;
				(*func)(cad);
			}
		}

	}
	fclose(fich);
	return (esta)? 1:0;
}
	
