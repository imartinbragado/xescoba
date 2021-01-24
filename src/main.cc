/* IMBHeader:  1.0.0
 * Programa:   main.cc 
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
#include <stdint.h>
#include "iconos.h"

GtkWidget *hbox_centro; //Para las cartas centro.
GtkWidget *hbox_mano;   //Para mi mano.
GtkWidget *status;      //El status.. dentro de vbox
GtkWidget *ppal;        //La lista donde ir� el texto.
GtkWidget *label_boton_turno;
GtkWidget *boton_turno;
GtkWidget *cartas_jugada_comp;
struct GLOBAL global;

int main(int argc, gchar *argv[])
{
   GtkWidget *window;       //La ventana de aplicaci�n
   GtkWidget *vbox;         //Contenedor principal.
   GtkWidget *hbox_botones; //Una caja de botones.
   GtkWidget *boton_salir;
   GtkWidget *separador; //Los diversos separadores.
   GtkTooltips *comentario;
   GtkWidget *menubar;

   setlocale(LC_ALL, "");
   bindtextdomain(PACKAGE, LOCALEDIR);
   textdomain(PACKAGE);

   comprueba_configuracion(); /* Comprueba que exista el fichero de configuraci�n
			       * y si no existe lo crea */

   /* Asigno algunos valores globales */
   global.sonido = TRUE;
   global.sugerencias = FALSE;
   global.vercartas = TRUE;

   /* Leo el fichero de recursos */
   {
      char cadena[300];
      sprintf(cadena, "%s/%s/xescobarc", DATADIR, PACKAGE);
      gtk_rc_add_default_file(cadena);
   }

   /* Inicializo el gtk */
   gtk_init(&argc, &argv);
   window = gtk_window_new(GTK_WINDOW_TOPLEVEL); //Ventana aplicaci�n
   gtk_window_set_title(GTK_WINDOW(window), _("Spanish 'escoba' game"));
   gtk_signal_connect(GTK_OBJECT(window),
                      "destroy",
                      GTK_SIGNAL_FUNC(gtk_main_quit),
                      NULL);

   /* Creo un contenedor vertical para todo */
   vbox = gtk_vbox_new(FALSE, 5);
   gtk_container_border_width(GTK_CONTAINER(vbox), 5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(window), vbox);     //Meto vbox en ventana ap.
   gtk_widget_show(vbox);

   /* Creo el widget tooltips, para los comentarios peque�os */
   comentario = gtk_tooltips_new();

   //Ahora adoso el men�...desplegable

   GtkWidget *caja_asir = Crea_menu();
   gtk_container_add(GTK_CONTAINER(vbox), caja_asir);
   gtk_widget_show(caja_asir);

   /* Creo el contenedor para las cartas centro */
   GtkWidget *frame_centro = gtk_frame_new(_("Cards on center"));

   gtk_container_add(GTK_CONTAINER(vbox), frame_centro);
   gtk_container_border_width(GTK_CONTAINER(frame_centro), 5);
   gtk_frame_set_shadow_type(GTK_FRAME(frame_centro), GTK_SHADOW_OUT);
   gtk_widget_show(frame_centro);

   hbox_centro = gtk_hbox_new(FALSE, 5);

   gtk_container_add(GTK_CONTAINER(frame_centro), hbox_centro);
   gtk_widget_show(hbox_centro);

   /* Separo */
   separador = gtk_hseparator_new();
   gtk_container_add(GTK_CONTAINER(vbox), separador);
   gtk_widget_show(separador);

   /* Creo el contenedor para las cartas mano */
   GtkWidget *frame_mano = gtk_frame_new(_("Cards in player's hand"));
   gtk_container_add(GTK_CONTAINER(vbox), frame_mano);
   gtk_container_border_width(GTK_CONTAINER(frame_mano), 5);
   gtk_frame_set_shadow_type(GTK_FRAME(frame_mano), GTK_SHADOW_OUT);
   gtk_widget_show(frame_mano);

   hbox_mano = gtk_hbox_new(FALSE, 5);
   gtk_container_add(GTK_CONTAINER(frame_mano), hbox_mano);
   gtk_widget_show(hbox_mano);

   /* Separo */
   separador = gtk_hseparator_new();
   gtk_container_add(GTK_CONTAINER(vbox), separador);
   gtk_widget_show(separador);

   /* La caja de los botones */
   hbox_botones = gtk_hbox_new(FALSE, 5);
   gtk_container_border_width(GTK_CONTAINER(hbox_botones), 5);
   gtk_container_add(GTK_CONTAINER(vbox), hbox_botones);
   gtk_widget_show(hbox_botones);

   /* Ahora creamos los botones */
   boton_salir = gtk_button_new_with_label(_("Quit"));
   gtk_container_add(GTK_CONTAINER(hbox_botones), boton_salir);
   gtk_widget_show(boton_salir);
   gtk_signal_connect_object(GTK_OBJECT(boton_salir),
                             "clicked",
                             GTK_SIGNAL_FUNC(gtk_main_quit),
                             NULL);
   gtk_tooltips_set_tip(comentario,
                        boton_salir,
                        _("Click here to exit game"),
                        NULL);

   /* Un bot�n de ayuda */
   GtkWidget *help_button = gtk_button_new_with_label(_("Help"));
   gtk_container_add(GTK_CONTAINER(hbox_botones), help_button);
   gtk_widget_show(help_button);
   gtk_signal_connect_object(GTK_OBJECT(help_button),
                             "clicked",
                             GTK_SIGNAL_FUNC(help_callback),
                             NULL);
   gtk_tooltips_set_tip(comentario, help_button,
                        _("Click here to get help"), NULL);

   /* El bot�n de turno un poco distinto... necesito una etiqueta */
   boton_turno = gtk_button_new();
   gtk_container_add(GTK_CONTAINER(hbox_botones), boton_turno);
   gtk_widget_show(boton_turno);
   gtk_signal_connect(GTK_OBJECT(boton_turno),
                      "clicked",
                      GTK_SIGNAL_FUNC(func_turno),
                      (gpointer)TURNO_TURNO);
   gtk_tooltips_set_tip(comentario,
                        boton_turno,
                        _("Click here for turn"),
                        NULL);

   label_boton_turno = gtk_label_new(_("Turn"));
   gtk_container_add(GTK_CONTAINER(boton_turno), label_boton_turno);
   gtk_widget_show(label_boton_turno);

   //Ahora tengo que crear una ventanica donde salga la
   //�ltima jugada computerizada

   GtkWidget *jugada_comp;

   jugada_comp = gtk_window_new(GTK_WINDOW_TOPLEVEL); //Ventana aplicaci�n
   gtk_window_set_title(GTK_WINDOW(jugada_comp), _("Game's status"));

   GtkWidget *box_jugada_comp = gtk_vbox_new(FALSE, 5);
   gtk_container_add(GTK_CONTAINER(jugada_comp), box_jugada_comp);
   gtk_widget_show(box_jugada_comp);

   GtkWidget *frame = gtk_frame_new(_("Last cards won"));
   gtk_container_add(GTK_CONTAINER(box_jugada_comp), frame);
   gtk_container_border_width(GTK_CONTAINER(frame), 5);
   gtk_frame_set_shadow_type(GTK_FRAME(frame), GTK_SHADOW_OUT);
   gtk_widget_show(frame);

   cartas_jugada_comp = gtk_hbox_new(FALSE, 5);
   gtk_container_add(GTK_CONTAINER(frame), cartas_jugada_comp);
   gtk_widget_show(cartas_jugada_comp);

   /* Creo la ventana donde saldr� el texto del desarrollo del juego */
   ppal = gtk_text_new(NULL, NULL);
   gtk_text_set_editable(GTK_TEXT(ppal), FALSE);
   gtk_container_add(GTK_CONTAINER(box_jugada_comp), ppal);
   gtk_widget_show(ppal);

   /* Ahora el status */
   status = gtk_statusbar_new();
   gtk_statusbar_push(GTK_STATUSBAR(status), 1, _("Status bar"));
   gtk_container_add(GTK_CONTAINER(box_jugada_comp), status);
   gtk_widget_show(status);

   gtk_widget_show(jugada_comp);           //Para ver la ventana de �ltima jugada
   global.widget_ver_cartas = jugada_comp; //Guardo este widget para mostrarle
   //y ocultarle

   //Por fin muestro la ventana ppal.
   gtk_widget_show(window); //Para ver la ventana aplicaci�n

   gtk_idle_add(idle_func, (gpointer)window);

   //   valores_menu_defecto(ifactory); //Paso los valores por defecto al men�.

   gtk_main(); //Er bucle...

   return 0;
}

char centro[40];
char coge_mano[40], tira_carta;
char juego_fin = 0;
jugador *ultimo_en_ganar;
int num_jug = 0;

void func_turno(GtkWidget *widget, gpointer data)
/* Cada vez que se pulsa este bot�n debe pasar un turno... */
{
   static int quien_da = 0;             //Quien da en primer lugar.
   static int puntos[4] = {0, 0, 0, 0}; /* Los puntos de cada uno */
   static baraja *cartas;               //Aqu� meter� la baraja.
   static jugador *gente;               //Aqu� la gente.
   static CONF conf(global.FICH_CONF);  /* Lee la configuraci�n */
   static int a_quien_toca = 1;
   char temporal[80];
   int i;

   if (!num_jug)
      num_jug = conf.tomai("jugadores");

   if ((intptr_t)data == TURNO_EMPEZAR)
   { /* Esto supone que hay que repartir el juego... */
      cartas = new baraja;
      gente = new jugador[num_jug];
      for (i = quien_da + 1; i < num_jug; i++)
      {
         char cad[20];
         sprintf(cad, "%s%d", "jugador", i);
         gente[i - quien_da - 1].da_nombre(conf.tomas(cad));
         sprintf(cad, "%s%d", "naturaleza", i);
         gente[i - quien_da - 1].da_naturaleza(conf.tomai(cad));
      }
      for (i = 0; i < quien_da + 1; i++)
      {
         if (i == num_jug)
            break;
         char cad[20];
         sprintf(cad, "%s%d", "jugador", i);
         gente[num_jug - (quien_da + 1) + i].da_nombre(conf.tomas(cad));
         sprintf(cad, "%s%d", "naturaleza", i);
         gente[i + num_jug - (quien_da + 1)].da_naturaleza(conf.tomai(cad));
      }

      juego_fin = 0;
      for (i = 0; i < 40; i++)
      {
         coge_mano[i] = -1;
         centro[i] = -1; //De momento no hay cartas en el centro.
      }

      /* Ponemos las cartas del centro */
      for (i = 0; i < 4; i++)
      {
         centro[i] = cartas->da();
         sprintf(temporal, _("Puting %s on center"), numtocarta(centro[i]));
         pon_en_lista(temporal, NULL);
      }
      pon_en_lista("------------------------------", NULL);
      /* Compruebo si se ha hecho escoba */
      int suma_centro = 0;
      for (i = 0; i < 4; i++)
         suma_centro += CARTA(centro[i]);
      if (suma_centro == 15)
      {
         for (i = 0; i < 4; i++)
            coge(centro[i], gente[num_jug - 1]); /* Ser� una escoba
					       y se la lleva el que dio */
      }
      if (suma_centro == 30)
      {
         int menor8 = 0;
         for (i = 0; i < 4; i++)
            if (CARTA(centro[i]) < 8)
               menor8++;
         if (menor8 == 2)
         { /* S�lo si ha hecho dos escobas */
            for (i = 0; i < 4; i++)
               coge(centro[i], gente[num_jug - 1]);
            gente[num_jug - 1].hizo_escoba();
            sprintf(temporal, _("%s has won two sweeping"),
                    gente[num_jug - 1].me_llamo());
            pon_en_lista(_(" has won two sweeping"),
                         gente[num_jug - 1].me_llamo());
         }
      }
      a_quien_toca = quien_da + 1;
      if (a_quien_toca == num_jug)
         a_quien_toca = 0;
      sprintf(temporal, _("%s's turn"), gente[a_quien_toca].me_llamo());
      gtk_label_set(GTK_LABEL(label_boton_turno), temporal);
      /* Reparto cartas */
      /* Contador para cada jugador */
      for (int j = 0; j < num_jug; j++) /* Para cada jugador */
         for (i = 0; i < 3; i++)
            dar_carta(gente[j], cartas->da()); //Carta para el caballero.

      suena(SONIDO_REPARTIR);

      /* Hay que actualizar las cartas s�lo si es humano */
      if (gente[a_quien_toca].mi_naturaleza() == HUMANO)
         pon_mano(&gente[a_quien_toca]);
      pon_centro(&gente[a_quien_toca]);
      return;
   } /* Fin del if EMPEZAR */

   if ((intptr_t)data == TURNO_TURNO)
   { /* Esto supone que se ha oprimido el turno */

      /* Aqu� todos tienen cartas */
      /* En la variable a_quien_toca est� el turno de quien es */
      /* Ahora es su turno */

      /* Si es humano miro que su jugada est� bien hecha. */
      if (gente[a_quien_toca].mi_naturaleza() == HUMANO)
      {
         int suma = CARTA(tira_carta);
         for (i = 0; i < 40; i++)
            if (coge_mano[i] != -1)
               suma += CARTA(coge_mano[i]);
         if (suma != 15 && suma != CARTA(tira_carta))
         {
            jugada_no_vale(_("Trick not valid!\nThe cards don't add 15"));
            return;
         }
      }

      gente[a_quien_toca].turno(centro, tira_carta, coge_mano);

      estado(gente, cartas);
      a_quien_toca++; //Para el siguiente turno.
      if (a_quien_toca == num_jug)
         a_quien_toca = 0;
      sprintf(temporal, _("%s's turn"), gente[a_quien_toca].me_llamo());
      gtk_label_set(GTK_LABEL(label_boton_turno), temporal);
   }

   /* Ahora empiezan las comprobaciones */

   char ban = 0;
   for (i = 0; i < num_jug; i++)
      if (gente[i].quedan())
         ban = 1;

   /* Compruebo si tienen todos cartas o si hay que repartir */
   if (cartas->quedan() || ban)
   { //Mientras queden cartas

      /* Reparto tres cartas a cada jugador */
      int j; /* Contador para cada jugador */
      if (!ban)
      { // Si no quedan cartas a nadie
         suena(SONIDO_REPARTIR);
         for (j = 0; j < num_jug; j++) /* Para cada jugador */
            for (i = 0; i < 3; i++)
               dar_carta(gente[j], cartas->da()); //Carta para el caballero.
      }
   }
   else
   {
      /* Aqu� es que ya se han acabado todas las
       * cartas de la baraja y de las manos de los
       * jugadores */

      juego_fin = 1;             //Ya se acab� el juego.
      pon_ultima_jugada(centro); //Para que se vea quien se lleva las cartas.
      for (i = 0; i < 40; i++)
         if (centro[i] != -1)
            ultimo_en_ganar->baza(centro[i]);
      estado(gente, cartas);
      resultados(gente, puntos);
      delete[] gente;
      delete cartas;
      quien_da++;
      if (quien_da == num_jug)
         quien_da = 0;
      if (puntos[0] < 11 && puntos[1] < 11 && puntos[2] < 11 && puntos[3] < 11)
         /* Esto si no se ha acabado la partida
	 pero si las cartas. */

         func_turno(widget, (gpointer)TURNO_EMPEZAR);
   }

   /* �ltima comprobaci�n: veamos si ya tiene alguien 11 puntos o m�s */

   if (puntos[0] >= 11 || puntos[1] >= 11 || puntos[2] >= 11 || puntos[3] >= 11)
   {
      /* Esto si se ha acabado la partida */

      int j = 0, punto_mayor = puntos[0];
      for (i = 0; i < num_jug; i++)
         if (puntos[i] > punto_mayor)
         {
            punto_mayor = puntos[i];
            j = i; //En i estar� el jugador ganador....
         }
      /* Falta comprobar el caso de empate */
      for (i = 0; i < num_jug; i++)
         if (punto_mayor == puntos[i])
         {
            pon_en_lista(_(" has won!"), numtogente(j));
            gtk_widget_hide(boton_turno); //Para que no se pueda seguir.
            sprintf(temporal, _("%s has won!"), numtogente(j));
            jugada_no_vale(temporal);
         }
      return;
   }

   /* Elimino las posibles cartas de coge mano */
   for (i = 0; i < 40; i++)
      if (coge_mano[i] != -1)
         coge_mano[i] = -1;

   suena(SONIDO_CARTA);
   /* Hay que actualizar las cartas*/
   pon_mano(&gente[a_quien_toca]);
   pon_centro(&gente[a_quien_toca]);
}

void pon_en_lista(const gchar *texto, const gchar *personaje)
{
   static int lineas = 0;
   char temp[512];
   static GdkColor color;

   if (!lineas)
   {
      /* Get the system colour map and allocate the colour blue */
      GdkColormap *cmap = gdk_colormap_get_system();
      color.red = 0;
      color.green = 0;
      color.blue = 0xffff;
      if (!gdk_color_alloc(cmap, &color))
      {
         g_error(_("couldn't allocate a color"));
      }
      lineas = 1;
   }
   strcpy(temp, texto);
   if (temp[strlen(temp) - 1] == '\n') //Si termina en retorno de carro
      temp[strlen(temp) - 1] = 0;      //Lo elimino.

   //Quiz�s habr�a que dise�ar alg�n mecanismo para que quite texto por arriba.

   if (personaje)
      gtk_text_insert(GTK_TEXT(ppal), NULL, &color, NULL, personaje, -1);
   gtk_text_insert(GTK_TEXT(ppal), NULL, NULL, NULL, temp, -1);
   gtk_text_insert(GTK_TEXT(ppal), NULL, NULL, NULL, "\n", -1);
}

void jugada_no_vale(const char *texto)
{
   GtkWidget *window = gtk_dialog_new();
   GtkTooltips *coment = gtk_tooltips_new();
   GtkWidget *visto = gtk_button_new_with_label(_("Ok"));
   gtk_box_pack_start(GTK_BOX(GTK_DIALOG(window)->action_area), visto,
                      TRUE, TRUE, 0);
   gtk_signal_connect_object(GTK_OBJECT(visto),
                             "clicked",
                             GTK_SIGNAL_FUNC(gtk_widget_destroy),
                             GTK_OBJECT(window));
   gtk_widget_show(visto);
   gtk_tooltips_set_tip(coment, visto, _("Click here when reading"), NULL);

   GtkWidget *pixmap = crea_un_pixmap(window, ICONO_INFO);
   gtk_widget_show(pixmap);
   gtk_box_pack_start(GTK_BOX(GTK_DIALOG(window)->vbox), pixmap,
                      TRUE, TRUE, 0);

   GtkWidget *que = gtk_label_new(texto);
   gtk_box_pack_start(GTK_BOX(GTK_DIALOG(window)->vbox), que,
                      TRUE, TRUE, 0);
   suena(SONIDO_TRAMPA);

   gtk_widget_show(que);
   gtk_widget_show(window);
}

void valores_menu_defecto(GtkItemFactory *ifactory)
{
   GtkWidget *sonido =
       gtk_item_factory_get_widget_by_action(
           ifactory,
           MENU_SONIDO);
   GtkWidget *sugerencias =
       gtk_item_factory_get_widget_by_action(
           ifactory,
           MENU_SUGERENCIAS);
   GtkWidget *vercartas =
       gtk_item_factory_get_widget_by_action(
           ifactory,
           MENU_VERCARTAS);
   gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(vercartas),
                                  global.vercartas);
   gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(sonido),
                                  global.sonido);
   gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM(sugerencias),
                                  global.sugerencias);
}
void comprueba_configuracion(void)
{
   char *p = getenv("HOME");
   static const char *_FICH_CONF = ".xescoba";
   if (p == NULL)
      strcpy(global.FICH_CONF, _FICH_CONF);
   else
      sprintf(global.FICH_CONF, "%s/%s", p, _FICH_CONF);

   FILE *f = fopen(global.FICH_CONF, "r");
   if (f == NULL)
   {
      /* Creo la configuraci�n */
      FILE *f = fopen(global.FICH_CONF, "w");
      if (f == NULL)
      {
         perror(".xescoba:");
         exit(1);
      }
      fprintf(f, _("; 0 -> Human nature; 1 -> Computer nature.\n"));
      fprintf(f, "jugadores = 2\n");
      fprintf(f, "jugador0 = Nacho\nnaturaleza0 = 0\n");
      fprintf(f, "jugador1 = Daneel\nnaturaleza1 = 1\n");
      fprintf(f, "jugador2 = Giskard\nnaturaleza2 = 1\n");
      fprintf(f, "jugador3 = Bliss\nnaturaleza3 = 1\n");
      fclose(f); // Cierro el fichero.
   }
   else
      fclose(f);
}

extern GdkPixmap *dibs[];

void pon_fondo_verde(GtkWidget *widget)
{
   static GtkStyle *estilo = NULL;
   if (!estilo)
   {
      estilo = gtk_style_copy(GTK_WIDGET(widget)->style);
      estilo->bg_pixmap[GTK_STATE_NORMAL] = dibs[40];
      gtk_widget_set_style(widget, estilo);
   }
}
