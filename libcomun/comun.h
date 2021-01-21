/******************************************************************
	comun.h
	
	Este fichero contiene definiciones de funciones de uso comun
	en estos programas.
	
	Autor: Ignacio Mart�n Bragado
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
   CONF(const char *fichero);
   ~CONF();
   long double tomaf(const char *que);
   int tomai(const char *que);
   char tomab(const char *que);
   const char *tomas(const char *que);
};

const char * TomaToken(const char *que, char * cad = 0);
void fatal(int error,const char * porque = 0);
#endif
