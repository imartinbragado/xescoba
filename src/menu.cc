/* IMBHeader:  1.0.0
 * Programa:   menu.cc 
 * Directorio: xescoba-1.2.1/src 
 * Fecha:      Sun Apr 15 16:42:49 CEST 2001 
 * Autor:      Ignacio Martín Bragado.
 * e-mail:     ignacio.martin@tel.uva.es 
 * Máquina:    Linux 
 */

#ifdef HAVE_CONFIG_H
   #include "../config.h"
#endif

#include "xescoba.h"
#include "config.h"

GtkWidget * Crea_menu()
{
  GtkWidget * handlebox1 = gtk_handle_box_new ();
  gtk_widget_ref (handlebox1);
  gtk_widget_show (handlebox1);

  GtkWidget * menubar1 = gtk_menu_bar_new ();
  gtk_widget_ref (menubar1);
  gtk_widget_show (menubar1);
  gtk_container_add (GTK_CONTAINER (handlebox1), menubar1);

  GtkWidget * item3 = gtk_menu_item_new_with_label (_("File"));
  gtk_widget_ref (item3);
  gtk_widget_show (item3);
  gtk_container_add (GTK_CONTAINER (menubar1), item3);

  GtkWidget * item3_menu = gtk_menu_new ();
  gtk_widget_ref (item3_menu);
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (item3), item3_menu);

  GtkWidget * about1 = gtk_menu_item_new_with_label (_("About"));
  gtk_widget_ref (about1);
  gtk_widget_show (about1);
  gtk_container_add (GTK_CONTAINER (item3_menu), about1);

  GtkWidget * license1 = gtk_menu_item_new_with_label (_("License"));
  gtk_widget_ref (license1);
  gtk_widget_show (license1);
  gtk_container_add (GTK_CONTAINER (item3_menu), license1);

  GtkWidget * separador1 = gtk_menu_item_new ();
  gtk_widget_ref (separador1);
  gtk_widget_show (separador1);
  gtk_container_add (GTK_CONTAINER (item3_menu), separador1);
  gtk_widget_set_sensitive (separador1, FALSE);

  GtkWidget * quit1 = gtk_menu_item_new_with_label (_("Quit"));
  gtk_widget_ref (quit1);
  gtk_widget_show (quit1);
  gtk_container_add (GTK_CONTAINER (item3_menu), quit1);

  GtkWidget * item4 = gtk_menu_item_new_with_label (_("Properties"));
  gtk_widget_ref (item4);
  gtk_widget_show (item4);
  gtk_container_add (GTK_CONTAINER (menubar1), item4);

  GtkWidget * item4_menu = gtk_menu_new ();
  gtk_widget_ref (item4_menu);
  gtk_menu_item_set_submenu (GTK_MENU_ITEM (item4), item4_menu);
  GtkWidget * sound1 = gtk_check_menu_item_new_with_label (_("Sound"));
  gtk_widget_ref (sound1);
  gtk_widget_show (sound1);
  gtk_container_add (GTK_CONTAINER (item4_menu), sound1);
  gtk_check_menu_item_set_active (GTK_CHECK_MENU_ITEM (sound1), TRUE);

  GtkWidget * game_window1 = gtk_check_menu_item_new_with_label (_("Game window"));
  gtk_widget_ref (game_window1);
  gtk_widget_show (game_window1);
  gtk_container_add (GTK_CONTAINER (item4_menu), game_window1);
  gtk_check_menu_item_set_active (GTK_CHECK_MENU_ITEM (game_window1), TRUE);

  GtkWidget * advice1 = gtk_check_menu_item_new_with_label (_("Advice"));
  gtk_widget_ref (advice1);
  gtk_widget_show (advice1);
  gtk_container_add (GTK_CONTAINER (item4_menu), advice1);

  GtkWidget * separador2 = gtk_menu_item_new ();
  gtk_widget_ref (separador2);
  gtk_widget_show (separador2);
  gtk_container_add (GTK_CONTAINER (item4_menu), separador2);
  gtk_widget_set_sensitive (separador2, FALSE);

  GtkWidget * configuration1 = gtk_menu_item_new_with_label (_("Configuration"));
  gtk_widget_ref (configuration1);
  gtk_widget_show (configuration1);
  gtk_container_add (GTK_CONTAINER (item4_menu), configuration1);

  gtk_signal_connect (GTK_OBJECT (about1), "activate",
                      GTK_SIGNAL_FUNC (acercade_callback),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (license1), "activate",
                      GTK_SIGNAL_FUNC (licencia_callback),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (quit1), "activate",
                      GTK_SIGNAL_FUNC (salir_callback),
                      NULL);
  gtk_signal_connect (GTK_OBJECT (sound1), "activate",
                      GTK_SIGNAL_FUNC (prop_asig_callback),
                      (gpointer)MENU_SONIDO);
  gtk_signal_connect (GTK_OBJECT (game_window1), "activate",
                      GTK_SIGNAL_FUNC (prop_asig_callback),
                      (gpointer)MENU_VERCARTAS);
  gtk_signal_connect (GTK_OBJECT (advice1), "activate",
                      GTK_SIGNAL_FUNC (prop_asig_callback),
                      (gpointer)MENU_SUGERENCIAS);
  gtk_signal_connect (GTK_OBJECT (configuration1), "activate",
                      GTK_SIGNAL_FUNC (configuracion),
                      NULL);

  return handlebox1;
}

