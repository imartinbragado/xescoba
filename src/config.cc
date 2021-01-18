/* IMBHeader:  1.0.0
 * Programa:   config.cc 
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

extern struct GLOBAL global;
GtkWidget * entry_text[4];

void configuracion(GtkWidget * widget, gpointer data)
{
   CONF conf(global.FICH_CONF); //Abro configuración
   
   GtkWidget * window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
   gtk_window_set_title(GTK_WINDOW(window), _("Configuration") );
   gtk_signal_connect_object(GTK_OBJECT(window),
			     "destroy",
			     GTK_SIGNAL_FUNC(gtk_widget_destroy),
			     GTK_OBJECT(window));
   
   //Un contenedor vertical principal.
   GtkWidget *vbox = gtk_vbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(vbox),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(window),vbox); //Meto vbox en ventana ap.
   gtk_widget_show(vbox);
   
   //Dentro de él dos horizontales, uno para los frames y otro para los botones
   
   //hbox1 -> Dos frames prision1 y prision2
   GtkWidget *hbox1 = gtk_hbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(hbox1),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(vbox),hbox1); //Meto hbox en ventana ap.
   gtk_widget_show(hbox1);

   // Creo los dos "frames", uno para el número y otro para los nombres.
   
   GtkWidget * prision1 = gtk_frame_new(_("Players number"));
   gtk_container_add(GTK_CONTAINER(hbox1),prision1);
   gtk_container_border_width(GTK_CONTAINER(prision1), 5);
   gtk_frame_set_shadow_type(GTK_FRAME(prision1), GTK_SHADOW_OUT);
   gtk_widget_show(prision1);

   GtkWidget * prision2 = gtk_frame_new(_("Players properties"));
   gtk_container_add(GTK_CONTAINER(hbox1),prision2);
   gtk_container_border_width(GTK_CONTAINER(prision2), 5);
   gtk_frame_set_shadow_type(GTK_FRAME(prision2), GTK_SHADOW_OUT);
   gtk_widget_show(prision2);
   
   //Pongo número de jugadores del uno al cuatro dentro de un vbox
   //Prision1 -> vbox1 para tener dentro los switches de jugador
   
   GtkWidget * vbox1 = gtk_vbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(vbox1),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(prision1),vbox1); //Meto vbox en su sitio
   gtk_widget_show(vbox1);
   
   GSList *group = NULL; //Inicializo grupo
   GtkWidget *num_play;
   char *cuantos[4]= 
     {
	"",_("Two"),_("Three"),_("Four")
     };
   
   //Creo los tres botones radio para los jugadores.
   for (int i=1;i<4;i++)
     {
	num_play = gtk_radio_button_new_with_label(group,cuantos[i]);
	gtk_toggle_button_set_state(GTK_TOGGLE_BUTTON(num_play),
				    conf.tomai("jugadores") == (i+1) );
	gtk_signal_connect(GTK_OBJECT(num_play),
			   "clicked",
			   GTK_SIGNAL_FUNC(configuracion_callback),
			   (gpointer) extrae_data("numero",i,0) );
	gtk_container_add(GTK_CONTAINER(vbox1),num_play);
	gtk_widget_show(num_play);
	group = gtk_radio_button_group(GTK_RADIO_BUTTON(num_play));
     }
   
   //Pongo nombre jugadores y naturaleza
   //Prision2 -> vbox2 para tener dentro los datos
   
   GtkWidget * vbox2 = gtk_vbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(vbox2),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(prision2),vbox2); //Meto vbox en su sitio
   gtk_widget_show(vbox2);
   
   GtkWidget *hor_cont; //contenedores.
   char texto[30];
   for (int i=0;i<4;i++)
     {
	//Creo un contenedor.
	hor_cont = gtk_hbox_new(FALSE,3);
	gtk_container_border_width(GTK_CONTAINER(hor_cont),3);
	gtk_container_add(GTK_CONTAINER(vbox2),hor_cont);
	gtk_widget_show(hor_cont);
	//Entrada de texto.
	entry_text[i] = gtk_entry_new_with_max_length(CONFIG_MAX_LONG);
	sprintf(texto,"jugador%d",i);
	gtk_entry_set_text(GTK_ENTRY(entry_text[i]),conf.tomas(texto));
	gtk_container_add(GTK_CONTAINER(hor_cont),entry_text[i]);
	gtk_widget_show(entry_text[i]);
	
	group = NULL; //Nuevo grupo de radio buttons
	
	GtkWidget * radio  = gtk_radio_button_new_with_label(group,_("Human"));
        sprintf(texto,"naturaleza%d",i);
	gtk_toggle_button_set_state(GTK_TOGGLE_BUTTON(radio),
				    conf.tomai(texto) == HUMANO );
	gtk_signal_connect(GTK_OBJECT(radio),
			   "clicked",
			   GTK_SIGNAL_FUNC(configuracion_callback),
			   (gpointer) extrae_data("naturaleza",i,HUMANO) );
	gtk_container_add(GTK_CONTAINER(hor_cont),radio);
	gtk_widget_show(radio);
	//AHora computador
	group = gtk_radio_button_group(GTK_RADIO_BUTTON(radio));
	radio  = gtk_radio_button_new_with_label(group,_("Computer"));
	gtk_toggle_button_set_state(GTK_TOGGLE_BUTTON(radio),
				    conf.tomai(texto) == COMPUTADOR );
	gtk_signal_connect(GTK_OBJECT(radio),
			   "clicked",
			   GTK_SIGNAL_FUNC(configuracion_callback),
			   (gpointer) extrae_data("naturaleza",i,COMPUTADOR) );
	gtk_container_add(GTK_CONTAINER(hor_cont),radio);
	gtk_widget_show(radio);
     }
   
   //hbox2 -> Botones Ok y Cancel
   GtkWidget *hbox2 = gtk_hbox_new(FALSE,5);
   gtk_container_border_width(GTK_CONTAINER(hbox2),5); //Pongo un borde
   gtk_container_add(GTK_CONTAINER(vbox),hbox2); //Meto hbox en ventana ap.
   gtk_widget_show(hbox2);
    
   // Botones dentro del contenedor horizontal hbox2
   
   GtkWidget * but1 = gtk_button_new_with_label(_("Ok") );
   gtk_container_add(GTK_CONTAINER(hbox2),but1); //Meto vbox en ventana ap.
   gtk_widget_show(but1);
   gtk_signal_connect(GTK_OBJECT(but1),
			     "clicked",
			     GTK_SIGNAL_FUNC(configuracion_callback),
			     (gpointer) extrae_data("ok",0,0));

   gtk_signal_connect_object(GTK_OBJECT(but1),
			     "clicked",
			     GTK_SIGNAL_FUNC(gtk_widget_destroy),
			     GTK_OBJECT(window));
      
   GtkWidget * but2  = gtk_button_new_with_label( _("Cancel") );
   gtk_container_add(GTK_CONTAINER(hbox2),but2); //Meto vbox en ventana ap.
   gtk_widget_show(but2);
   gtk_signal_connect_object(GTK_OBJECT(but2),
			     "clicked",
			     GTK_SIGNAL_FUNC(gtk_widget_destroy),
			     GTK_OBJECT(window));
   gtk_widget_show(window);
}

int extrae_data(char * que, int uno, int dos)
{
   if (!strcmp(que,"naturaleza"))
     {
	if (uno == 0  && dos == HUMANO )
	    return CONFIG_N0H;
	if (uno == 0 && dos ==COMPUTADOR)
	    return CONFIG_N0C;
	if (uno == 1  && dos == HUMANO )
	    return CONFIG_N1H;
	if (uno == 1 && dos ==COMPUTADOR)
	    return CONFIG_N1C;
	if (uno == 2  && dos == HUMANO )
	    return CONFIG_N2H;
	if (uno == 2 && dos ==COMPUTADOR)
	    return CONFIG_N2C;
	if (uno == 3  && dos == HUMANO )
	    return CONFIG_N3H;
	if (uno == 3 && dos ==COMPUTADOR)
	    return CONFIG_N3C;
     }
   else if(!strcmp(que,"numero"))
     {
	switch(uno)
	  {
	  case 1:
	     return CONFIG_NUMJ2;
	  case 2:
	     return CONFIG_NUMJ3;
	  case 3:
	     return CONFIG_NUMJ4;
	  }
     }
   else if(!strcmp(que,"ok"))
       return CONFIG_OK;
   
}


void configuracion_callback(GtkWidget * widget, gpointer data)
{
   static int num_jug=0;
   static char nombres[4][255];
   static int naturalezas[4];
   
   if (num_jug==0)
     {
	CONF conf(global.FICH_CONF);
	num_jug=conf.tomai("jugadores");
	char cad[30];
	for (int i=0;i<4;i++)
	  {
	     sprintf(cad,"jugador%d",i);
	     strcpy(nombres[i],conf.tomas(cad));
	     sprintf(cad,"naturaleza%d",i);
	     naturalezas[i]=conf.tomai(cad);
	  }
     }
   /* Se asegura de que, si es un mensaje de un botón radio, 
    * sea por su activación
    * */
   
   if (GTK_IS_RADIO_BUTTON(widget))
       if (!GTK_TOGGLE_BUTTON (widget)->active)
	   return;
   
   switch((int)data)
     {
     case CONFIG_N0H:
	naturalezas[0]=HUMANO;
	break;
     case CONFIG_N0C:
	naturalezas[0]=COMPUTADOR;
	break;
     case CONFIG_N1H:
	naturalezas[1]=HUMANO;
	break;
     case CONFIG_N1C:
	naturalezas[1]=COMPUTADOR;
	break;
     case CONFIG_N2H:
	naturalezas[2]=HUMANO;
	break;
     case CONFIG_N2C:
	naturalezas[2]=COMPUTADOR;
	break;
     case CONFIG_N3H:
	naturalezas[3]=HUMANO;
	break;
     case CONFIG_N3C:
	naturalezas[3]=COMPUTADOR;
	break;
     case CONFIG_NUMJ2:
	num_jug=2;
	break;
     case CONFIG_NUMJ3:
	num_jug=3;
	break;
     case CONFIG_NUMJ4:
	num_jug=4;
	break;
     case CONFIG_OK:
	FILE * fich = fopen(global.FICH_CONF,"w");
	fprintf(fich,_("; Config file for xescoba\n"));
	fprintf(fich,_(";Players number\njugadores = %d\n"),num_jug);
	for (int i=0;i<4;i++)
	  {
	     fprintf(fich,_(";Player %d name and nature\n"),i);
	     fprintf(fich,"jugador%d = %s\nnaturaleza%d = %d\n",
		     i,
		     gtk_entry_get_text(GTK_ENTRY(entry_text[i])),
		     i,
		     naturalezas[i]);
	  }
	fclose(fich);
	break;
     }
}
