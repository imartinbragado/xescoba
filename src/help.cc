/* IMBHeader:  1.0.0
 * Programa:   help.cc 
 * Directorio: xescoba-1.2.1/src 
 * Fecha:      Sun Apr 15 16:42:49 CEST 2001 
 * Autor:      Ignacio Martín Bragado.
 * e-mail:     ignacio.martin@tel.uva.es 
 * Máquina:    Linux 
 */

#include "help.h"
#include "xescoba.h"

void help_callback(GtkWidget * widget, gpointer data)
{
   
   GtkWidget * window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
   gtk_window_set_title(GTK_WINDOW(window), _("Help") );
   gtk_signal_connect_object(GTK_OBJECT(window),
			     "destroy",
			     GTK_SIGNAL_FUNC(gtk_widget_destroy),
			     GTK_OBJECT(window));
   
   //Un contenedor vertical principal.
   GtkWidget *vbox = gtk_vbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(vbox),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(window),vbox); //Meto vbox en ventana ap.
   gtk_widget_show(vbox);
   
   //Dentro de él dos horizontales, uno para el edit y otro para los botones
   
   //hbox1 -> Ventana de edición
   GtkWidget *hbox1 = gtk_hbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(hbox1),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(vbox),hbox1); //Meto hbox en ventana ap.
   gtk_widget_show(hbox1);
   
   GtkWidget * HelpText = gtk_text_new(NULL,NULL);
   gtk_text_set_editable(GTK_TEXT(HelpText),FALSE);
   gtk_container_add(GTK_CONTAINER(hbox1),HelpText);
   gtk_widget_set_usize(HelpText,800,500);
   gtk_widget_show(HelpText);

   if(strcmp(_("English"),"Español") == 0)
     gtk_text_insert(GTK_TEXT(HelpText),NULL,NULL,NULL,HelpStrEs,-1);
   else
     gtk_text_insert(GTK_TEXT(HelpText),NULL,NULL,NULL,HelpStrEn,-1);
    
   //hbox2 -> Botones OK
   GtkWidget *hbox2 = gtk_hbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(hbox2),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(vbox),hbox2); //Meto hbox en ventana ap.
   gtk_widget_show(hbox2);
    
   // Botones dentro del contenedor horizontal hbox2
   
   GtkWidget * but1 = gtk_button_new_with_label(_("Ok") );
   gtk_container_add(GTK_CONTAINER(hbox2),but1); //Meto vbox en ventana ap.
   gtk_widget_show(but1);
   gtk_signal_connect_object(GTK_OBJECT(but1),
			     "clicked",
			     GTK_SIGNAL_FUNC(gtk_widget_destroy),
			     GTK_OBJECT(window));
      
   gtk_widget_show(window);
}
