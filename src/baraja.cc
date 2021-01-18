/* IMBHeader:  1.0.0
 * Programa:   baraja.cc 
 * Directorio: xescoba-1.2.1/src 
 * Fecha:      Sun Apr 15 16:42:49 CEST 2001 
 * Autor:      Ignacio Martín Bragado.
 * e-mail:     ignacio.martin@tel.uva.es 
 * Máquina:    Linux 
 */

/*
 * Este programa es de libre distribución; puedes distribuirlo y/o modificarlo
 * bajo los términos de la GNU General Public License como se publicó por la
 * Free Software Foundation; bien la versión 2 de la licencia o,  bajo tu
 * criterio, cualquier versión posterior.
 * 
 * Este programa se distribuye con la esperanza de que sea útil, pero 
 * SIN NINGUNA GARANTÏA; sin, incluso, ninguna garantía implicada por
 * MERCANCIBILIDAD o POR ALGÜN PROPÓSITO PARTICULAR. Lee la
 * GNU General Public License para más información.
 * 
 * Deberías haber recibido una copia de la GNU General Public License
 * junto con este programa. Si no es así escribe a Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 * *****************************************************/

/*############################################################################
#    This program is free software; you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation; either version 2 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program; if not, write to the Free Software
#    Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
##############################################################################*/

#ifdef HAVE_CONFIG_H
   #include "../config.h"
#endif

#include "baraja.h"

baraja::baraja()
/* Barajea las cartas y se dispone para empezar */
{
   int i,j,k;
   int num;
   time_t la_hora;
   indice=0;
   for (i=0;i<40;i++)
     monton[i]=-1;
   /* Inicializo los números aleatorios */
   srandom((unsigned)time(&la_hora));
   /* Ahora tengo que "barajear" las cartas */
   for (i=0;i<40;i++) {
      num=(int)((float)random()/(float)RAND_MAX*(40-i));
      k=-1;
      for (j=0;j<40;j++) {
	 if(monton[j]==-1)
	   k++;
	 if (k==num) {
	    monton[j]=i;
	    break;
	 }
      }
   }
}

char baraja::da(void)
/* Da una carta. Si no hay devuelve -1 */
{
   if (indice >39)
     return -1;
   else
     return monton[indice++];
}

int baraja::quedan()
/* Devuelve cuantas cartas quedan en el mazo */
{
   return 40-indice;
}

