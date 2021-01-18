/******************************************************************
	comun.h
	
	Este fichero contiene definiciones de funciones de uso comun
	en estos programas.
	
	Autor: Ignacio Martín Bragado
	e-mail: imartin@jmlopez.fam.cie.uva.es
	
	Este programa se distribuye con licencia tipo GNU
	
*********************************************************************/

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
#ifndef _COMUN_H_
# define _COMUN_H_

# define NO_CONF 10
# define NO_COM 11
# define NO_FICHERO 12
# define NO_MEM 13

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

# ifndef _ESCOBA_H_
#  include <libintl.h>
#  define _(String) gettext(String)
# endif

class CONF
{
   FILE *fich;
   char cad[255];
public:
   CONF(char *fichero);
   ~CONF();
   long double tomaf(char *que);
   int tomai(char *que);
   char tomab(char *que);
   char *tomas(char *que);
};

class LINEA_COM
{
   int argc,i;
   char **argv;
   
public:
   LINEA_COM(int ac,char **av);
   char toma(char *que);
   long double tomaf(char *que, long double & param);
   int tomai(char *que, int & param);
   char tomab(char *que, char & param);
   char * tomas(char *que, char * param);
};

char * TomaToken(char *que, char * cad = 0);
void inicia(char *programa, char *version, FILE *fich = stdout);
char *strcasestr(char *grande,char *peque);
void fatal(int error,char * porque = 0);
void casifatal(int error,char * porque = 0);
void pon_licencia(void);
int frase_ayuda(char *topico, char *nombre_fich, void (*func)(char *));
#endif
