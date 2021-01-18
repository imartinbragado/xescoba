/* IMBHeader:  1.0.0
 * Programa:   jugador.cc 
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

#include "xescoba.h"

extern float puntuacion;

jugador::jugador(char *name, char tipo)
{
   int i;
   for (i=0;i<40;i++) {
      mano[i]=-1;
      bazas[i]=-1;
   }
   strcpy(nombre,name); //Copio mi nombre.
   escobas=0;
   llevo=0;
   naturaleza=tipo;  //Si es o no un jugador humano.
}

jugador::jugador()
{
   int i;
   for (i=0;i<40;i++) {
      mano[i]=-1;
      bazas[i]=-1;
   }
   escobas=0;
   llevo=0;
}

void jugador::da_nombre(char * name)
{
   strcpy(nombre,name); //Copio mi nombre.
}

void jugador::da_naturaleza(int tipo)
{
    naturaleza=tipo;  //Si es o no un jugador humano.
}

void jugador::baza(char carta)
{
   if (carta != -1)
     bazas[llevo++]=carta;
   coge(carta,*this);
}
   
void jugador::turno(char *hay, char carta_tira, char * carta_coge)
{
   
   if (naturaleza == COMPUTADOR) 
     turno_computador(hay);
   else
     turno_humano(hay, carta_tira, carta_coge);
}

void jugador::turno_computador(char *hay)
{
   char guay[40],*p;
   int j; //Nota: Poniendo j=0 se previene el que se cuelgue cuando no hay cartas
   float punt_guay=-10; //Para que tome la primera.
   
   for (int i=0;i<40;i++) {
      if (mano[i] != -1)  { //Si tengo esta carta.
	 p=piensa(mano[i],hay);  //¿Cuál es la mejor jugada con esta?
#ifdef _DEBUG_
	 fprintf(stderr,"-\ntirando carta: %s, Puntuación: %f \n",
		 numtocarta(mano[i]),puntuacion);
#endif
	 if (puntuacion > punt_guay) {
	    memcpy(guay,p,40);
	    j=i;
	    punt_guay=puntuacion;
	 }
      }
   }
   // Pongo la jugada que voy a hacer
   char cartitas[40];
   int k=0;
   for (int i=0;i<40;i++)
       cartitas[i]=-1; //Inicializo;
       
   /* Por tanto aquí tengo la mejor jugada con las cartas de mi mano */
   tira(mano[j],*this); //He tirado esta carta.
   mano[j]=-1; //Por tanto ya no la tengo.
   if (cuantas(guay) !=0) //Si hay baza
     for (int i=0;i<40;i++)
       if (guay[i] != -1) {
	  cartitas[k++]=guay[i]; //La meto entre las cartas.
	  baza(guay[i]);//Tomo la baza y la meto en mi montón.
       }
   
   pon_ultima_jugada(cartitas); //Escribo la útlima jugada.
   
}

void jugador::turno_humano(char *hay, char carta_tira, char * carta_coge)
{
   int i;
   char cartitas[40];
   int k=0;
   for (int i=0;i<40;i++)
       cartitas[i]=-1; //Inicializo;
       
   /* Aquí ya tengo la carta tirada y la/s cogida/s */
   //1.-Me deshago de la tirada.
   for (i=0;i<40;i++)
     if (mano[i]==carta_tira) {
	mano[i]=-1;
	break;
     }
   //2.- Añado la carta al monton
   tira(carta_tira,*this); //Yo tiro la carta
   //Ahora a por las que se cogen...
   if (cuantas(carta_coge)) {
      baza(carta_tira);
      cartitas[k++]=carta_tira; //La que tiro
      for(i=0;i<40;i++)
	if(carta_coge[i] != -1) {
	   cartitas[k++]=carta_coge[i];
	   baza(carta_coge[i]);
	}
   }
   pon_ultima_jugada(cartitas);
}

int jugador::num_cartas()
{
   int n=0;
   for(int i=0;i<40;i++)
     if(bazas[i]!=-1)
       n++;
   return n;
}

int jugador::num_oros()
{
   int n=0;
   for(int i=0;i<40;i++)
     if(bazas[i]!=-1 && PALO(bazas[i])==1)
       n++;
   return n;
}

int jugador::num_sietes()
{
   int n=0;
   for(int i=0;i<40;i++)
     if(bazas[i]!=-1 && CARTA(bazas[i])==7)
       n++;
   return n;
}

int jugador::num_velo()
{
   int n=0;
   for(int i=0;i<40;i++)
     if(bazas[i]!=-1 && PALO(bazas[i])==1 && CARTA(bazas[i])==7)
       n++;
   return n;
}

int jugador::num_escobas()
{
   return escobas;
}

int jugador::hizo_escoba()
{
   return ++escobas;
}

int jugador::quedan()
{
   return cuantas(mano);
}

char * jugador::me_llamo()
{
   return nombre;
}

void dar_carta(jugador & a_quien, char carta)
/* Sirve para repartir. Coge la carta y se la da al jugador que sea. */
{
   for(int i=0;i<40;i++)
     if (a_quien.mano[i] == -1) {
       a_quien.mano[i]=carta;
	break;
     }
   
}
