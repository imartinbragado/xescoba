/* IMBHeader:  1.0.0
 * Programa:   escoba.cc 
 * Directorio: xescoba-1.2.1/src 
 * Fecha:      Sun Apr 15 16:42:49 CEST 2001 
 * Autor:      Ignacio Mart�n Bragado.
 * e-mail:     ignacio.martin@tel.uva.es 
 * M�quina:    Linux 
 */

/*
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

#ifdef HAVE_CONFIG_H
#include "../config.h"
#endif

#include "xescoba.h"

char mejor[40];
float puntuacion;
char lleva;

const char *piensa(char tengo, char *hay)
/* Devuelve la mejor jugada si tiro la carta tengo */
{
   char actual[40];

   /* De momento una �nica carta */

   int cont;
   for (cont = 0; cont < 40; cont++)
   {
      mejor[cont] = -1;
      actual[cont] = -1; //No hay m�s cartas
   }
   actual[0] = tengo;
   puntuacion = -10; //Para que siempre coja una baza...
   lleva = 0;        //De momento no hay baza hecha.

   evalua(actual, hay);
   return mejor;
}

void evalua(const char *actual, char *hay)
{
   int i, suma = 0, j;
   char actual2[40];
   char hay2[40];

   for (i = 0; i < 40; i++)
   { //Inicializo las nuevas estructuras
      actual2[i] = -1;
      hay2[i] = -1;
   }

   if (!cuantas(hay))
   { //Si ya no se puede a�adir nada se va.
      puntua(actual, hay);
      return;
   }

   /* Si llega aqu� es porque se pueden a�adir cartas.*/
   // 1.- Si suma menos de quince toma una carta m�s.
   // 2.- Si suma quince o m�s eval�a la jugada y se sale.

   for (i = 0; i < 40; i++)
      if (actual[i] != -1)
         suma += CARTA(actual[i]); //�Cu�nto suma?

   if (suma >= 15)
   {                       /*Si es mayor o igual que quince a�adir no arregla nada */
      puntua(actual, hay); //Eval�o la jugada y me marcho.
      return;
   }

   /* Aqu� es que suma menos de quince */
   for (i = 0; i < 40; i++)
      if (hay[i] != -1)
      {
         memcpy(hay2, hay, 40);
         hay2[i] = -1;
         memcpy(actual2, actual, 40);
         for (j = 0; j < 40; j++)
            if (actual2[j] == -1)
            {
               actual2[j] = hay[i];
               break;
            }
         evalua(actual2, hay2);
      }
   return;
}

void puntua(const char *actual, char *hay)
{
   int suma = 0, i, j, hay_suma = 0;
   float points = 0;

   for (i = 0; i < 40; i++)
   {
      if (actual[i] != -1)
         suma += CARTA(actual[i]); //�Cu�nto suma?
      if (hay[i] != -1)
         hay_suma += CARTA(hay[i]);
   }

   if (suma == 15)
   {
      if (!lleva)
      {
         lleva = 1;
         puntuacion = -10; //As� me aseguro que esta sea mayor
                           //Hay obligaci�n de llevar cartas.
      }
      points += PUNT_CARTAS * cuantas(actual);        //Las cartas que me llevo
      points += PUNT_OROS * cuantos_oros(actual);     //Oros
      points += PUNT_SIETES * cuantos_sietes(actual); //Sietes
      points += PUNT_VELO * cuantos_velos(actual);    //Velo
      if (cuantas(hay) == 0)
         points += PROB_ESCOBA;
      if (quedan_ocho(hay))
      {
         points -= PUNT_SIETES * PROB_SIETES;
         points -= PUNT_VELO * PROB_VELO;
      }
      if (hay_suma > 4 && hay_suma < 15)
         points -= PUNT_ESCOBA * PROB_ESCOBA;
   }
   else
   { //Por tanto no se hace baza.
      char mesa[40];
      memcpy(mesa, hay, 40); //Las que quedan en el monton
      //Y ahora las que forma nuestra jugada... que no es jugada...
      for (i = 0; i < 40; i++)
         if (actual[i] != -1)
            for (j = 0; j < 40; j++)
               if (mesa[j] == -1)
               {
                  mesa[j] = actual[i];
                  break;
               }
      //Luego ahora en mesa tengo ya las cartas que van a quedar.
      if (quedan_ocho(mesa))
      {
         points -= PUNT_SIETES * PROB_SIETES;
         points -= PUNT_VELO * PROB_VELO;
      }
      for (i = 0, hay_suma = 0; i < 40; i++)
         if (mesa[i] != -1)
            hay_suma += CARTA(mesa[i]);
      if (hay_suma > 4 && hay_suma < 15)
         points -= PUNT_ESCOBA * PROB_ESCOBA;
   }

   if (points > puntuacion)
   {
      if (lleva)
      {
         if (suma == 15)
         {
            puntuacion = points;
            memcpy(mejor, actual, 40);
         }
      }
      else
      {
         puntuacion = points;
         //  memcpy(mejor,actual,40); Pues si no podr�amos tener una baza incorrecta
      }
   }
#ifdef _DEBUG_

   fprintf(stderr, "-----------------\n");
   for (i = 0; i < 40; i++)
      if (actual[i] != -1)
         fprintf(stderr, "Puntos: %f Carta: %d Palo: %d\n",
                 points, CARTA(actual[i]), PALO(actual[i]));
#endif
}

int cuantas(const char *hay)
/* Cuenta cuantas cartas hay en el "taco" hay */
{
   int suma = 0;
   for (int i = 0; i < 40; i++)
      if (hay[i] != -1)
         suma++;
   return suma;
}

int cuantos_velos(const char *hay)
/* �Cu�ntos velos hay?*/
{
   for (int i = 0; i < 40; i++)
      if (hay[i] != -1)
      {
         if (CARTA(hay[i]) == 7 && PALO(hay[i]) == 1)
            return 1;
      }
   return 0;
}

int cuantos_oros(const char *hay)
/* �Cu�ntos oros hay?*/
{
   int suma = 0;
   for (int i = 0; i < 40; i++)
      if (hay[i] != -1)
      {
         if (PALO(hay[i]) == 1)
            suma++;
      }
   return suma;
}

int cuantos_sietes(const char *hay)
/* �Cu�ntos sietes hay?*/
{
   int suma = 0;
   for (int i = 0; i < 40; i++)
      if (hay[i] != -1)
      {
         if (CARTA(hay[i]) == 7)
            suma++;
      }
   return suma;
}

int quedan_ocho(const char *hay)
{
   char hay2[40], monton2[40], band = 0;

   for (int i = 0; i < 40; i++)
      hay2[i] = -1;
   memcpy(monton2, hay, 40);

   for (int i = 0; i < 40; i++)
      if (monton2[i] != -1)
      {
         hay2[0] = monton2[i];
         monton2[i] = -1;
         busca_ocho(hay2, monton2, &band); //Llama al procedimiento recursivo.
      }
   return band;
}

void busca_ocho(const char *hay, const char *monton, char *band)
{
   int suma = 0, i;
   for (i = 0; i < 40; i++)
      if (hay[i] != -1)
         suma += CARTA(hay[i]);
   if (suma == 8)
   {
      *band = 1; //S� que suman ocho
      return;
   }
   if (suma > 8)
      return;

   char hay2[40];
   char monton2[40];

   for (i = 0; i < 40; i++)
      if (monton[i] != -1)
      {
         memcpy(hay2, hay, 40);
         memcpy(monton2, monton, 40);
         monton2[i] = -1;
         for (int j = 0; j < 40; j++)
            if (hay2[j] == -1)
            {
               hay2[j] = monton[i];
               break;
            }
         busca_ocho(hay2, monton2, band);
      }
   return;
}

const char *numtocarta(char carta)
/* Como su nombre indica devuelve una cadena con el nombre de la carta */
{
   int num = CARTA(carta) - 1;
   int palo = PALO(carta) - 1;
   static const char *nombre_num[10] = {
       N_("ace"), N_("two"), N_("three"), N_("four"), N_("five"),
       N_("six"), N_("seven"), N_("sota"), N_("knight"), N_("king")};
   static int sexo_carta[10] =
       {
           1, 1, 1, 1, 1, 1, 1, 0, 1, 1};
   static const char *sexos[2] =
       {
           N_("a"), N_("a/an")};
   static const char *nombre_palo[4] = {
       N_("golds"), N_("coups"), N_("swords"), N_("staffs")};
   static char cad[40];

   sprintf(cad, _("%s %s of %s"), _(sexos[sexo_carta[num]]),
           _(nombre_num[num]),
           _(nombre_palo[palo]));
   return cad;
}
