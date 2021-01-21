/* IMBHeader:  1.0.0
 * Programa:   xescoba.h 
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

#ifndef _ESCOBA_H_
# define _ESCOBA_H_
# define GTK_ENABLE_BROKEN

# include <libintl.h>
# include <locale.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <gtk/gtk.h>
# include <gtk/gtktext.h>
# include "baraja.h"
# include "jugador.h"
# include "comun.h"

#define _(String) gettext (String)
#define N_(String) (String)

# define MAX_NUM_LINEAS 20
# define TURNO_TURNO 0
# define TURNO_EMPEZAR 1
template<class T>  T CARTA(T x) { return  ((x)%10+1); }
template<class T> T PALO(T x) { return ((x)/10+1); }
# define PUNT_ESCOBA 1
# define PUNT_VELO 1
# define PUNT_SIETES .5
# define PUNT_CARTAS .05
# define PUNT_OROS .2

# define PROB_ESCOBA .2773279
# define PROB_SIETES .2773279
# define PROB_VELO .075

const char * piensa(char tengo, char * hay);
void evalua(const char * actual, char * hay);
int cuantas(const char *hay);
void puntua(const char *actual, char *hay);
int cuantos_oros(const char *hay);
int cuantos_velos(const char *hay);
int cuantos_sietes(const char *hay);
int quedan_ocho(const char *hay);
void busca_ocho(const char *hay, const char *monton, char *band);
const char * numtocarta(char carta);


const char * numtogente(int num);
void func_turno(GtkWidget * widget, gpointer data);
void func_naipes_centro(GtkWidget * widget, gpointer data);
void func_naipes_mano(GtkWidget * widget, gpointer data);


void pon_en_lista(const gchar * texto,const gchar * personaje);
void jugada_no_vale(const char *);
GtkWidget * Crea_menu();
void valores_menu_defecto(GtkItemFactory *);
void comprueba_configuracion(void);
GtkWidget * crea_un_pixmap(GtkWidget * wid, char num);
int idle_func(gpointer data);
GtkItemFactory * get_main_menu(GtkWidget *window, GtkWidget ** menubar);
void salir_callback(GtkWidget * widget, gpointer data);
void acercade_callback(GtkWidget * widget, gpointer data);
void licencia_callback(GtkWidget * widget, gpointer data);
void prop_asig_callback(GtkWidget *widget, gpointer data);
void help_callback(GtkWidget *, gpointer);
void pon_fondo_verde(GtkWidget * widget);

#define SONIDO_ERROR 0
#define SONIDO_RISA 1
#define SONIDO_TRAMPA 2
#define SONIDO_CARTA 3
#define SONIDO_REPARTIR 4

#define MENU_SONIDO 1
#define MENU_SUGERENCIAS 2
#define MENU_VERCARTAS 3

struct GLOBAL
{
   int sonido;
   int vercartas;
   int sugerencias;
   GtkWidget * widget_ver_cartas;
   char FICH_CONF[255];
};

void suena(int tipo);

void tira(char carta, jugador &);
void coge(char carta, jugador &);
void pon_centro(jugador * quien);
void pon_mano(jugador * quien);
void pon_ultima_jugada(char *cartitas);
void estado(jugador *jug, baraja * naipes);
void resultados(jugador * gente, int * puntos);
int gentetonum(jugador & quien);

#endif

