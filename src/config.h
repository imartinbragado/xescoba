/* IMBHeader:  1.0.0
 * Programa:   config.h 
 * Directorio: xescoba-1.2.1/src 
 * Fecha:      Sun Apr 15 16:42:49 CEST 2001 
 * Autor:      Ignacio Martín Bragado.
 * e-mail:     ignacio.martin@tel.uva.es 
 * Máquina:    Linux 
 */

#ifndef _CONFIG_H_ESCOBA_
# define _CONFIG_H_ESCOBA_

# define CONFIG_N0H 0
# define CONFIG_N0C 1
# define CONFIG_N1H 2
# define CONFIG_N1C 3
# define CONFIG_N2H 4
# define CONFIG_N2C 5
# define CONFIG_N3H 6
# define CONFIG_N3C 7
# define CONFIG_NUMJ2 8
# define CONFIG_NUMJ3 9
# define CONFIG_NUMJ4 10
# define CONFIG_OK 11

# define CONFIG_MAX_LONG 50

void configuracion_callback(GtkWidget * widget, gpointer data);
int extrae_data(char * que, int uno, int dos);
void configuracion(GtkWidget * widget, gpointer data);

#endif


