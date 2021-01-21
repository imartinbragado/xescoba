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

	Lee parametros diversos de un fichero de configuraci�n.

*********************************************************************/


CONF::CONF(const char *fichero)
{
//	printf("Leyendo el fichero de configuraci�n %s.\n",fichero);
	fich=fopen(fichero,"r");
	if (!fich)
		fatal(NO_FICHERO,fichero);	//No se puede abrir
}

CONF::~CONF()
{
	if (fich)		//Cierra el fichero;
		fclose(fich);
}	

long double CONF::tomaf(const char *que)
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

int CONF::tomai(const char *que)
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

const char * CONF::tomas(const char *que)
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

char CONF::tomab(const char *que)
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

/*********************************************************************
	Otras funciones de utilidad
**********************************************************************/

const char * TomaToken(const char *que, char * cad)
{
	static char * p;
	char * mando;
	static char text[255];

	if (cad)
	{	strcpy(text,cad);		//Se inicia.
		p=text;
	}

	while (strchr(" \t=",*p))
		p++;		//Quito espacios vac�os,tabulaciones,etc

	mando=p;		//Aqu� comienza

	while (!strchr(que,*p))
		p++;		//Avanzo hasta encontrar ciertos caracteres

	*p=0;			//Aqui termino cadena
	p++;			//Apunto al siguiente
	return mando;
}

void fatal(int error, const char * porque)
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
