/* IMBHeader:  1.0.0
 * Programa:   jugador.h 
 * Directorio: xescoba-1.2.1/src 
 * Fecha:      Sun Apr 15 16:42:49 CEST 2001 
 * Autor:      Ignacio Martín Bragado.
 * e-mail:     ignacio.martin@tel.uva.es 
 * Máquina:    Linux 
 */

/*************************************************************************
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

#ifndef _JUGADOR_H_
#define _JUGADOR_H_

#define HUMANO 0
#define COMPUTADOR 1

class jugador {
   friend void dar_carta(jugador &a_quien, char carta);
   friend void tira(char carta, jugador &quien);
   friend void coge(char carta, jugador &quien);
 private:
   char bazas[40];
   int llevo,escobas; //Las bazas que llevo y las escobas que he hecho.
   char naturaleza;  //FALSE si es humano. TRUE si es computador.
   char mano[40];
   char nombre[40]; //El nombre del jugador.
   void turno_humano(char *hay,char carta_coge, char * cartas_tirab);
   void turno_computador(char *hay);
 public:
   jugador(char *name,char tipo);
   jugador();
   void da_nombre(char * name);
   void da_naturaleza(int tipo);
   void turno(char *hay, char carta_tira, char * cartas_coge);
   void baza(char carta);
   char * me_llamo();
   int mi_naturaleza() { return naturaleza; }
   char * mi_mano() { return mano; }
   int num_cartas();
   int num_oros();
   int num_sietes();
   int num_velo();
   int num_escobas();
   int hizo_escoba();
   int quedan();
};

void dar_carta(jugador &a_quien, char carta);

#endif
