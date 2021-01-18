/* IMBHeader:  1.0.0
 * Programa:   funcmenu.cc 
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

#ifdef HAVE_CONFIG_H
   #include "../config.h"
#endif

#include "xescoba.h"
#include "iconos.h"
#include "licencia.h"

extern struct GLOBAL global;

void salir_callback(GtkWidget * widget, gpointer data)
{
   gtk_main_quit();
}

void acercade_callback(GtkWidget * widget, gpointer data)
{
   GtkWidget * window, *vbox, *prision, *cajilla, *pixmap, *eti, *hbox,
   	*but1, *but2;
  char cad[80];
   
   window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
   gtk_window_set_title(GTK_WINDOW(window), _("More info") );
   gtk_signal_connect_object(GTK_OBJECT(window),
			     "destroy",
			     GTK_SIGNAL_FUNC(gtk_widget_destroy),
			     GTK_OBJECT(window));
   
   vbox = gtk_vbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(vbox),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(window),vbox); //Meto vbox en ventana ap.
   gtk_widget_show(vbox);

  
   sprintf(cad,"%s V%s %s",PACKAGE,VERSION,__DATE__);
    prision = gtk_frame_new(cad);
   gtk_container_add(GTK_CONTAINER(vbox),prision);
   gtk_container_border_width(GTK_CONTAINER(prision), 5);
   gtk_frame_set_shadow_type(GTK_FRAME(prision), GTK_SHADOW_OUT);
   gtk_widget_show(prision);

    cajilla = gtk_hbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(cajilla),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(prision),cajilla); //Meto vbox en su sitio
   gtk_widget_show(cajilla);
   
    pixmap = crea_un_pixmap(window,ICONO_XESCOBA);
   gtk_container_add(GTK_CONTAINER(cajilla),pixmap);
   gtk_widget_show(pixmap);
   
    eti = gtk_label_new(_ ("Play 'sweeping' against computer.\n(C) Ignacio Martín Bragado'01\nignacio.martin@tel.uva.es\nhttp://www.ele.uva.es/~imartin") );
   gtk_container_add(GTK_CONTAINER(cajilla),eti);
   gtk_widget_show(eti);
   
    hbox = gtk_hbox_new(FALSE,5);
   gtk_container_add(GTK_CONTAINER(vbox),hbox); //Meto vbox en ventana ap.
   gtk_widget_show(hbox);
   
    but1 = gtk_button_new_with_label(_("Ok") );
   gtk_container_add(GTK_CONTAINER(hbox),but1); //Meto vbox en ventana ap.
   gtk_widget_show(but1);
   gtk_signal_connect_object(GTK_OBJECT(but1),
			     "clicked",
			     GTK_SIGNAL_FUNC(gtk_widget_destroy),
			     GTK_OBJECT(window));

    but2  = gtk_button_new_with_label( _("License ...") );
   gtk_container_add(GTK_CONTAINER(hbox),but2); //Meto vbox en ventana ap.
   gtk_widget_show(but2);
   gtk_signal_connect_object(GTK_OBJECT(but2),
			     "clicked",
			     GTK_SIGNAL_FUNC(licencia_callback),
			     NULL);
   gtk_widget_show(window);
}

void licencia_callback(GtkWidget * widget, gpointer data)
{
   GtkWidget * window, *vbox, *prision, *eti, *but1;
   
   window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
   gtk_window_set_title(GTK_WINDOW(window),_("License") );
   gtk_signal_connect_object(GTK_OBJECT(window),
			     "destroy",
			     GTK_SIGNAL_FUNC(gtk_widget_destroy),
			     GTK_OBJECT(window));
   
    vbox = gtk_vbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(vbox),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(window),vbox); //Meto vbox en ventana ap.
   gtk_widget_show(vbox);
  
    prision = gtk_frame_new( _("Copying license") );
   gtk_container_add(GTK_CONTAINER(vbox),prision);
   gtk_container_border_width(GTK_CONTAINER(prision), 5);
   gtk_frame_set_shadow_type(GTK_FRAME(prision), GTK_SHADOW_OUT);
   gtk_widget_show(prision);
   
    eti = gtk_label_new(LICENCIA);
   gtk_container_add(GTK_CONTAINER(prision),eti);
   gtk_widget_show(eti);
   
     but1 = gtk_button_new_with_label( _("Ok") );
   gtk_container_add(GTK_CONTAINER(vbox),but1); //Meto vbox en ventana ap.
   gtk_widget_show(but1);
   gtk_signal_connect_object(GTK_OBJECT(but1),
			     "clicked",
			     GTK_SIGNAL_FUNC(gtk_widget_destroy),
			     GTK_OBJECT(window));

   gtk_widget_show(window);
}

/* Propiedades */
void prop_asig_callback(GtkWidget *widget, gpointer data)
{
	int action = (int)data;
   switch(action)
     {
     case MENU_SONIDO: //Sonido
	global.sonido = (GTK_CHECK_MENU_ITEM (widget)->active ) ? TRUE: FALSE;
	break;
     case MENU_SUGERENCIAS: //Sugerencias
	global.sugerencias = (GTK_CHECK_MENU_ITEM (widget)->active ) ? TRUE: FALSE;
	break;
     case MENU_VERCARTAS: //Ver cartas
	global.vercartas=(GTK_CHECK_MENU_ITEM (widget)->active ) ? TRUE: FALSE;
	if (global.vercartas)
	    gtk_widget_show(global.widget_ver_cartas);
	else
	    gtk_widget_hide(global.widget_ver_cartas);
     }
}
