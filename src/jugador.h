/* IMBHeader:  1.0.0
 * Programa:   jugador.h 
 * Directorio: xescoba-1.2.1/src 
 * Fecha:      Sun Apr 15 16:42:49 CEST 2001 
 * Autor:      Ignacio Mart�n Bragado.
 * e-mail:     ignacio.martin@tel.uva.es 
 * M�quina:    Linux 
 */

/*************************************************************************
 * Este programa es de libre distribuci�n; puedes distribuirlo y/o modificarlo
 * bajo los t�rminos de la GNU General Public License como se public� por la
 * Free Software Foundation; bien la versi�n 2 de la licencia o,  bajo tu
 * criterio, cualquier versi�n posterior.
 * 
 * Este programa se distribuye con la esperanza de que sea �til, pero 
 * SIN NINGUNA GARANT�A; sin, incluso, ninguna garant�a implicada por
 * MERCANCIBILIDAD o POR ALG�N PROP�SITO PARTICULAR. Lee la
 * GNU General Public License para m�s informaci�n.
 * 
 * Deber�as haber recibido una copia de la GNU General Public License
 * junto con este programa. Si no es as� escribe a Free Software
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
   void turno_humano(char *hay,char carta_coge, const char * cartas_tirab);
   void turno_computador(char *hay);
 public:
   jugador(const char *name,char tipo);
   jugador();
   void da_nombre(const char * name);
   void da_naturaleza(int tipo);
   void turno(char *hay, char carta_tira, const char * cartas_coge);
   void baza(char carta);
   const char * me_llamo();
   int mi_naturaleza() { return naturaleza; }
   const char * mi_mano() { return mano; }
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
