/* IMBHeader:  1.0.0
 * Programa:   func.cc 
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

extern GtkWidget * ppal;
extern GtkWidget * hbox_centro;
extern GtkWidget * hbox_mano;
extern GtkWidget * status;
extern char centro[40];
extern char juego_fin;
extern jugador * ultimo_en_ganar;
extern int num_jug;
extern float puntuacion;
extern struct GLOBAL global;

void tira(char carta,jugador &quien)
{
   char cad[80];
   
   for(int i=0;i<40;i++)
	if (centro[i] == -1) {
	   centro[i]=carta;
	   break;
	}
   sprintf(cad, _(" has played %s"),numtocarta(carta));
   pon_en_lista(cad,quien.nombre);
}

void coge(char carta, jugador &quien)
{
   char cad[80];
   for(int i=0;i<40;i++)
     if (centro[i] == carta)
       centro[i]=-1; //Si es la carta... desaparece del montón.
   sprintf(cad, _(" has won %s"),numtocarta(carta));
   pon_en_lista(cad,quien.nombre);
   
   if(!juego_fin) //Mientras queden cartas
     if (!cuantas(centro)) {
	sprintf(cad, _(" has won a 'sweeping'!. With this has %d"),
		quien.hizo_escoba());
	pon_en_lista(cad,quien.nombre);
	suena(SONIDO_RISA);
     }
   if (CARTA(carta)==7 && PALO(carta)==1) {
      pon_en_lista(_(" has won the 'velo'"),quien.nombre);
      suena(SONIDO_RISA);
   }
   ultimo_en_ganar=&quien;
}

void pon_centro(jugador * quien)
{
   static GtkWidget * naipes_boton[40];
   static GtkWidget * dibujo[40];
   static int viejo=0;
   int i;
      
   if (!viejo) { /* Si es la primera vez que entra inicializa la estructura */
      for (i=0;i<40;i++) {
	 naipes_boton[i] = NULL;
	 dibujo[i] = NULL;
      }
      viejo=1;
   }
   
   /* 1.- Destruye todas las cartas que haya */
   for (i=0;i<40;i++)
     if ( naipes_boton[i] != NULL ) {
	gtk_widget_destroy(dibujo[i]);
	gtk_widget_destroy(naipes_boton[i]);
	naipes_boton[i] = NULL;
	dibujo[i]=NULL;
     }
   
   /* 2.- Crea las nuevas cartas */
   for (i=0;i<40;i++)
     if ( centro[i] != -1) {  //Si existe una carta
	dibujo[i] = crea_un_pixmap(hbox_centro,centro[i]);
	naipes_boton[i]=gtk_toggle_button_new(); 
	gtk_signal_connect(GTK_OBJECT(naipes_boton[i]),
			   "clicked",
			   GTK_SIGNAL_FUNC(func_naipes_centro),
			   (gpointer) centro[i]);
	gtk_container_add(GTK_CONTAINER(naipes_boton[i]),dibujo[i]);
	gtk_container_add(GTK_CONTAINER(hbox_centro),naipes_boton[i]);
	gtk_widget_show(naipes_boton[i]);
     }
   /* Código añadido el 26 del 12 del 98 para sugerir la jugada */
   if (global.sugerencias && quien->mi_naturaleza()==HUMANO)
     {
	char * lleva = quien->mi_mano();
	char guay[40],*p;
	int j; //Nota: Poniendo j=0 se previene el que se cuelgue cuando no hay$        float punt_guay=-10; //Para que tome la primera.
	float punt_guay=-10;
	
	for (i=0;i<40;i++)
	  {
	     if (lleva[i] != -1)
	       {
		  //Si tengo esta carta.
		  p=piensa(lleva[i],centro);  //¿Cuál es la mejor jugada
		  if (puntuacion > punt_guay)
		    {
		       memcpy(guay,p,40);
		       j=i;
		       punt_guay=puntuacion;
		    }
	       }
	  }
	for (i=0;i<40;i++)
	    for(j=0;j<40;j++)
	  {
	     if (centro[i]!=-1 && centro[i]==guay[j])  //La carta mano[i] está escogida
	       {
		  gtk_toggle_button_set_state(GTK_TOGGLE_BUTTON(naipes_boton[i]),
					      TRUE);
		//  func_naipes_centro(naipes_boton[i], (gpointer)centro[i]);
	       }
	  }
	/* Fin del código añadido */
     }
   return;
}

extern char coge_mano[40];

void func_naipes_centro(GtkWidget * widget, gpointer data)
{
   int i;
   
   if (GTK_TOGGLE_BUTTON (widget)->active ) {
      // Está escogido 
      for (i=0;i<40;i++)
	if (coge_mano[i] == -1) {
	   coge_mano[i] = (char)data;
	   break;
	}
   }
   else {
      for (i=0;i<40;i++)
	if (coge_mano[i] == (char)data )
	  coge_mano[i] = -1;
   }
    return;
}

void pon_mano(jugador * quien)
{
   static GtkWidget * naipes_boton[40];
   static GtkWidget * dibujos[40];
   static int viejo=0;
   int i;
   char ban;
   
   if (!viejo) { /* Si es la primera vez que entra inicializa la estructura */
      for (i=0;i<40;i++) {
	 dibujos[i]= NULL;
	 naipes_boton[i] = NULL;
      }
      viejo=1;
   }
   
   /* 1.- Destruye todas las cartas que haya */
   for (i=0;i<40;i++)
     if ( naipes_boton[i] != NULL ) {
	gtk_widget_destroy(dibujos[i]);
	dibujos[i] = NULL;
	gtk_widget_destroy(naipes_boton[i]);
	naipes_boton[i] = NULL;
     }
   
   char * lleva = quien->mi_mano();
   GSList * group = NULL; //Inicalizo el grupo
 
   ban=0;
   for (i=0;i<40;i++) 
     if ( lleva[i] != -1) {  //Si existe una carta
	if (quien->mi_naturaleza() == COMPUTADOR)
	    dibujos[i] = crea_un_pixmap(hbox_mano,40);
	else
	    dibujos[i] = crea_un_pixmap(hbox_mano,lleva[i]);
	naipes_boton[i]=gtk_radio_button_new(group); //Creo un boton suicheable.
	if (!global.sugerencias)
	    if (!ban) {
	       ban=1;
	       gtk_toggle_button_set_state(GTK_TOGGLE_BUTTON(naipes_boton[i]),
					   TRUE);
	       func_naipes_mano(naipes_boton[i], (gpointer)lleva[i]);
	    } //Con esto elijo un botón por defecto y actualizo la selección.
	gtk_signal_connect(GTK_OBJECT(naipes_boton[i]),
			   "clicked",
			   GTK_SIGNAL_FUNC(func_naipes_mano),
			   (gpointer) lleva[i]);
	gtk_container_add(GTK_CONTAINER(naipes_boton[i]),dibujos[i]);
	gtk_container_add(GTK_CONTAINER(hbox_mano),naipes_boton[i]);
	gtk_widget_show(naipes_boton[i]);
	group = gtk_radio_button_group(GTK_RADIO_BUTTON(naipes_boton[i]));
     }
   /* Código añadido el 26 del 12 del 98 para sugerir la jugada */
   if (global.sugerencias)
     {
	char guay[40],*p;
	int j; //Nota: Poniendo j=0 se previene el que se cuelgue cuando no hay cartas
	float punt_guay=-10; //Para que tome la primera.
	
	for (int i=0;i<40;i++) 
	  {
	     if (lleva[i] != -1)
	       {
		  //Si tengo esta carta.
		  p=piensa(lleva[i],centro);  //¿Cuál es la mejor jugada con esta?
		  if (puntuacion > punt_guay) 
		    {
		       memcpy(guay,p,40);
		       j=i;
		       punt_guay=puntuacion;
		    }
	       }
	  }
	
	gtk_toggle_button_set_state(GTK_TOGGLE_BUTTON(naipes_boton[j]),
				    TRUE);
	func_naipes_mano(naipes_boton[j], (gpointer)lleva[j]);
	/* FIn del código añadido */
     }
    return;
}

extern char tira_carta;

void func_naipes_mano(GtkWidget * widget, gpointer data)
{
   
   if (GTK_TOGGLE_BUTTON (widget)->active ) 
     // Está escogido 
     tira_carta = (char)data;
      return;
}

void estado(jugador *jug, baraja * naipes)
{
   char cad[320]="";
   char temp[80];
   for (int i=0;i<num_jug;i++)
     {
	sprintf(temp,
		_("%s Cards:%02d Golds:%d Sevens:%d Velo:%d Sweepings:%d\n"),
		jug[i].me_llamo(),jug[i].num_cartas(), jug[i].num_oros(),
		jug[i].num_sietes(),jug[i].num_velo(),jug[i].num_escobas() );
	strcat(cad,temp);
     }
   sprintf(temp, _("Hands: %d") ,naipes->quedan()/3/num_jug);
   strcat(cad,temp);
   gtk_statusbar_pop(GTK_STATUSBAR(status),1);
   gtk_statusbar_push(GTK_STATUSBAR(status),1,cad);
}

int gentetonum(jugador & quien)
{
   static int banderita=0;
   static char datos[4][80];
   
   if (!banderita) {
      CONF conf(global.FICH_CONF); /* Abro la configuración */
      char cad[80];
      for (int i=0;i<4;i++) {
	 sprintf(cad,"jugador%d",i);
	 strcpy(datos[i],conf.tomas(cad)); /* Copio */
      }
      banderita=1;
   }
   
   if (!strcmp(quien.me_llamo(),datos[0]))
     return 0;
   else if (!strcmp(quien.me_llamo(),datos[1]))
     return 1;
   else if (!strcmp(quien.me_llamo(),datos[2]))
     return 2;
   else if (!strcmp(quien.me_llamo(),datos[3]))
     return 3;
   else
     return -1;
}

char * numtogente(int num)
{
   static int banderita=0;
   static char datos[4][80];
   
   if (!banderita) 
     {
	CONF conf(global.FICH_CONF); /* Abro la configuración */
	char cad[80];
	for (int i=0;i<4;i++) 
	  {
	     sprintf(cad,"jugador%d",i);
	     strcpy(datos[i],conf.tomas(cad)); /* Copio */
	  }
	
	banderita=1;
     }
   if (num>3)
       return NULL;
   else
       return datos[num];
}
   
void resultados(jugador *gente, int * puntos)
{
   char cad[80];
   char texto[512];
   
   texto[0]=0; //Inicio el texto
   
   pon_en_lista(_("-------- RESULTS ------------"),NULL);
   
   int mas_gran=gente[0].num_cartas();
   int i;
   for (i=1;i<num_jug;i++)
     if (gente[i].num_cartas() > mas_gran) 
       mas_gran=gente[i].num_cartas();
   
   for (i=0;i<num_jug;i++) 
     if (gente[i].num_cartas() == mas_gran) {
	puntos[gentetonum(gente[i])]++;
	sprintf(cad, _("%s cards points: 1\n") ,gente[i].me_llamo());
	if (!texto[0])
	    strcpy(texto,cad);
	else
	    strcat(texto,cad);
	
	sprintf(cad, _(" cards points: 1\n"));
	pon_en_lista(cad,gente[i].me_llamo());
     }
   
   mas_gran=gente[0].num_oros();
   for (i=1;i<num_jug;i++)
     if (gente[i].num_oros() > mas_gran) 
       mas_gran=gente[i].num_oros();
   
   for (i=0;i<num_jug;i++) 
     if (gente[i].num_oros() == mas_gran) {
	puntos[gentetonum(gente[i])]++;
	sprintf(cad, _("%s golds points: 1\n"),gente[i].me_llamo());
	strcat(texto,cad);
	pon_en_lista(_(" golds points: 1\n"),gente[i].me_llamo());
     }
   
   mas_gran=gente[0].num_sietes();
   for (i=1;i<num_jug;i++)
     if (gente[i].num_sietes() > mas_gran) 
       mas_gran=gente[i].num_sietes();
   
   for (i=0;i<num_jug;i++) 
     if (gente[i].num_sietes() == mas_gran) {
	puntos[gentetonum(gente[i])]++;
	sprintf(cad, _("%s sevens points: 1\n") ,gente[i].me_llamo());
	strcat(texto,cad);
	pon_en_lista(_(" sevens points: 1\n") ,gente[i].me_llamo());
     }
   
   mas_gran=gente[0].num_velo();
   for (i=1;i<num_jug;i++)
     if (gente[i].num_velo() > mas_gran) 
       mas_gran=gente[i].num_velo();
 
   for (i=0;i<num_jug;i++) 
     if (gente[i].num_velo() == mas_gran) {
	puntos[gentetonum(gente[i])]++;
	sprintf(cad, _("%s velo points: 1\n") ,gente[i].me_llamo());
	strcat(texto,cad);
	pon_en_lista(_(" velo points: 1\n") ,gente[i].me_llamo() );
     }
      
   /* Ahora con las escobas */
   for (i=0;i<num_jug;i++) {
      puntos[ gentetonum(gente[i]) ] += gente[i].num_escobas();
      sprintf(cad, _("%s sweepings points: %d\n") ,
	      gente[i].me_llamo(),gente[i].num_escobas());
      strcat(texto,cad);
      sprintf(cad, _(" sweepings points: %d\n"),gente[i].num_escobas());
      pon_en_lista(cad,gente[i].me_llamo());
   }
   
   pon_en_lista("---------- TOTAL: ------------",NULL);
   for (i=0;i<num_jug;i++) {
      sprintf(cad, _("%s %d points.\n") ,
	      gente[i].me_llamo(),puntos[gentetonum(gente[i])] );
      strcat(texto,cad);
      sprintf(cad, _(" %d points.\n"), puntos[gentetonum(gente[i])] );
      pon_en_lista(cad,gente[i].me_llamo());
   }
   pon_en_lista("------------------------------",NULL);
   jugada_no_vale(texto); //Pongo como ha ido esta tirada.
}

extern GtkWidget * cartas_jugada_comp;

void pon_ultima_jugada(char *cartitas)
{
   static GtkWidget * dibujos[40];
   static int viejo=0;
   int i;
   
   if (!viejo) { /* Si es la primera vez que entra inicializa la estructura */
      for (i=0;i<40;i++) 
	  dibujos[i]= NULL;
      viejo=1;
   }
   
   /* 1.- Destruye todas las cartas que haya */
   for (i=0;i<40;i++)
     if ( dibujos[i] != NULL ) {
	gtk_widget_destroy(dibujos[i]);
	dibujos[i] = NULL;
     }
   
   for (i=0;i<40;i++) 
       if ( cartitas[i] != -1) {  //Si existe una carta
	  dibujos[i] = crea_un_pixmap(hbox_mano,cartitas[i]);
	  gtk_container_add(GTK_CONTAINER(cartas_jugada_comp),dibujos[i]);
       }
   
   return;
}

void suena(int tipo)
{
   static char *sonidos[5] =
     {	
	N_("error.au"), N_("risa.au"),N_("trampa.au"),N_("carta.au"),
	N_("repartir.au")
     };
   
   if (!global.sonido)
       return;
   /* Me aseguro de que puedo "escribir" el sonido */
   FILE *f = fopen("/dev/audio","w");
   if (f==NULL)
       return;
   else
       fclose(f);
   
   char cad[160];
   sprintf(cad,"cat %s/%s/%s >/dev/audio 2>/dev/null &",
	   DATADIR,PACKAGE,_(sonidos[tipo]) );
   system(cad);
   
}


