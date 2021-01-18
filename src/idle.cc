/* IMBHeader:  1.0.0
 * Programa:   idle.cc 
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

#include "xescoba.h"
#include "../libcartas/cartas.h"
#include "../libiconos/iconos.h"

GdkPixmap * dibs[43];
GdkBitmap * mask;
extern GtkWidget * boton_turno;

GtkWidget * crea_un_pixmap(GtkWidget * wid, char num)
{
   GtkWidget * pixmapwid;
   pixmapwid = gtk_pixmap_new(dibs[num], mask);
   gtk_widget_show(pixmapwid);
   return pixmapwid;
}            

int idle_func(gpointer data)
{
   static GdkPixmap * pixmap;
   static GdkBitmap * mask;
   static GtkStyle * style;
   static int b = 0;
   static GtkWidget * window;
   static GtkWidget * progreso;
   GtkWidget *eti, *eti2, *prision;
   GtkWidget * wid;

   wid = (GtkWidget *)data;
   
   if (!b) {
      style = gtk_widget_get_style( (GtkWidget *) data);
      gtk_widget_hide(boton_turno);
      window = gtk_dialog_new();
      gtk_window_set_title(GTK_WINDOW(window), _("Wait, please...") );
      gtk_signal_connect_object(GTK_OBJECT(window),
				"destroy",
				GTK_SIGNAL_FUNC(gtk_widget_destroy),
				GTK_OBJECT(window));
      prision = gtk_frame_new(PACKAGE);
      gtk_box_pack_start( GTK_BOX(GTK_DIALOG (window)->vbox), prision,
			 TRUE, TRUE, 0);
      gtk_container_border_width(GTK_CONTAINER(prision), 5);
      gtk_frame_set_shadow_type(GTK_FRAME(prision), GTK_SHADOW_OUT);
      gtk_widget_show(prision);
      
      eti = gtk_label_new( _("Play 'sweeping' against computer.\n(C) Ignacio Martín Bragado'98\nignacio.martin@tel.uva.es\nhttp://www.ele.uva.es/~imartin") );
      gtk_container_add(GTK_CONTAINER(prision),eti);
      gtk_widget_show(eti);
      
      eti2 = gtk_label_new( _("Loading cards. Wait please...") );
      gtk_box_pack_start( GTK_BOX(GTK_DIALOG(window)->action_area),
			 eti2,TRUE, TRUE, 0);
      gtk_widget_show(eti2);
      
      progreso = gtk_progress_bar_new();
      gtk_box_pack_start( GTK_BOX(GTK_DIALOG(window)->action_area),
			 progreso,TRUE, TRUE, 0);
      gtk_widget_show(progreso);
      
      gtk_widget_show(window);
   }
   
   gtk_progress_bar_update(GTK_PROGRESS_BAR(progreso),
			   (float)b/(float)43);
   switch(b) {
   case 0:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) as_oros_xpm );
      break;
    case 1:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) dos_oros_xpm  );
      break;
   case 2:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) tres_oros_xpm  );
      break;
   case 3:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) cuatro_oros_xpm  );
      break;
   case 4:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) cinco_oros_xpm  );
      break;
   case 5:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) seis_oros_xpm  );
      break;
   case 6:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) siete_oros_xpm  );
      break;
   case 7:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) sota_oros_xpm  );
      break;
   case 8:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) caballo_oros_xpm  );
      break;
   case 9:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) rey_oros_xpm  );
      break;
   case 10:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) as_copas_xpm  );
      break;
   case 11:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) dos_copas_xpm );
      break;
   case 12:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) tres_copas_xpm );
      break;
   case 13:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) cuatro_copas_xpm );
      break;
   case 14:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) cinco_copas_xpm);
      break;
   case 15:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) seis_copas_xpm );
      break;
   case 16:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) siete_copas_xpm );
      break;
   case 17:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) sota_copas_xpm );
      break;
   case 18:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) caballo_copas_xpm );
      break;
   case 19:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) rey_copas_xpm );
      break;
   case 20:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) as_espadas_xpm );
      break;
   case 21:
	 pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					       &style->bg[GTK_STATE_NORMAL],
					       (gchar **) dos_espadas_xpm );
      break;
   case 22:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) tres_espadas_xpm );
      break;
   case 23:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) cuatro_espadas_xpm );
      break;
   case 24:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) cinco_espadas_xpm );
      break;
   case 25:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) seis_espadas_xpm );
      break;
   case 26:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) siete_espadas_xpm );
      break;
   case 27:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) sota_espadas_xpm );
      break;
   case 28:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) caballo_espadas_xpm );
      break;
   case 29:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) rey_espadas_xpm );
      break;  
   case 30:
	 pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					       &style->bg[GTK_STATE_NORMAL],
					       (gchar **) as_bastos_xpm );
      break;
   case 31:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) dos_bastos_xpm );
      break;
   case 32:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) tres_bastos_xpm );
      break;
   case 33:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) cuatro_bastos_xpm );
      break;
   case 34:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) cinco_bastos_xpm );
      break;
   case 35:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) seis_bastos_xpm );
      break;
   case 36:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) siete_bastos_xpm );
      break;
   case 37:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) sota_bastos_xpm );
      break;
   case 38:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) caballo_bastos_xpm );
      break;
   case 39:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) rey_bastos_xpm );
      break;
   case 40:
       pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) cubierta_xpm );
      break;
   case ICONO_INFO:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) info2_xpm );
      break;
   case ICONO_XESCOBA:
      pixmap = gdk_pixmap_create_from_xpm_d(wid->window, &mask,
					    &style->bg[GTK_STATE_NORMAL],
					    (gchar **) xescoba_xpm );
      break;
   }
   dibs[b] = pixmap;
   if (b==42) {
      gtk_widget_destroy(window);
      gtk_widget_show(boton_turno);
      func_turno(window,(gpointer)TURNO_EMPEZAR); //Comienza el juego...
      return 0; //No se vuelve a hacer.
   }
   b++;
   return 1;
   
}            
