/*
 * Fichero:  xescoba.txt
 * Fecha:    Sat Dec 26 16:28:12 CET 1998 
 * Autor:     Ignacio Martín Bragado.
 * Programas:  
 * Máquina: Linux espe 2.0.35 #5 Mon Dec 14 14:48:03 CET 1998 i586 unknown 
 */

/***************************************************************************
 Las mejoras o sugerencias sobre este programa seran estupenda-   
 mente recibidas. Puedes realizarlas en las direcciones del autor  
 imartin@jmlopez.fam.cie.uva.es
 imartin@cie.uva.es
 ******************************************************************************/              

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

----------------------------------------------------------------------------
1.- ¿Qué es xescoba?
----------------------------------------------------------------------------

	Xescoba es una implementación en GTK del popular juego español de la
escoba.

----------------------------------------------------------------------------
1.1- ¿Cuáles son las reglas de la escoba?
----------------------------------------------------------------------------

	El objetivo de la escoba es llevarse el mayor número posible de
cartas, oros, escobas, sietes y el siete de oros. Cada escoba, así como el
velo (el siete de oros) vale un punto. Para el resto se lleva un punto el
que más cantidad haya logrado llevarse. 
	Se produce 'una escoba' cuando un jugador logra llevarse todas las
cartas que hay en el centro.
	Para jugar hay que tirar siempre una carta. Si existe alguna
combinación de esa carta con las que hay en el centro tal que sumen quince,
considerando que las sotas valen 8, los caballos 9 y los reyes 10, y el
resto de las cartas su puntuación nominal, el jugador recoge las cartas que
le sumen 15 y las pone en su baza. Por ejemplo, una sota y un siete 'suman
quince' y, por tanto, es una baza válida.

----------------------------------------------------------------------------
2.- ¿Qué opciones tiene xescoba?
----------------------------------------------------------------------------

----------------------------------------------------------------------------
2.1.- En el menú.
----------------------------------------------------------------------------

	En el menú propiedades se puede elegir:

	Sonido-> Activa/desactiva el sonido.
	Ver cartas->Activa/Desactiva el panel para ver la última jugada.
	Sugerencias->Cuando está activado el ordenador selecciona para un
		jugador 'humano' lo que él considera la mejor jugada.
		El jugador humano puede aceptarla o bien seleccionar la
		jugada que quiera. Esta selección se hace de forma que la
		mejor jugada (según el criterio del ordenador) aparecerá ya
		cogida tanto en las cartas del centro como en las del
		jugador. Esto es, basta dar al botón de turno si se acepta
		la jugada, porque estarán las cartas seleccionadas.
	Configuración -> Permite decir cuantos van a ser los jugadores en 
		la próxima partida, y si van a tratarse de jugadores
		regulados por el ordenador o bien serán humanos. También se
		puede poner el nombre de los jugadores en el cuadrado
		correspondiente. Para seleccionar el número de jugadores y
		su naturaleza basta con pinchar en el botón adecuado. Para
		cambiar los nombres hay que escribir en el cuadro de nombre
		correspondiente.
			Este diálogo lo que hace es modificar el fichero de
		configuración para la próxima partida. (Ver en 2.2).

----------------------------------------------------------------------------
2.2.- En el fichero de configuración.
----------------------------------------------------------------------------

	El fichero de configuración .xescoba debería encontrarse en la base
de tu directorio personal. Dicho fichero admite los siguientes
campos:
	jugadores = numero_jugadores

	Donde numero_jugadores es un entero del 2 al 4.

	jugador0 = Nombre0
	jugador1 = Nombre1
	jugador2 = Nombre2
	jugador3 = Nombre3
	naturaleza0 = 0_o_1
	naturaleza1 = 0_o_1
	naturaleza2 = 0_o_1
	naturaleza3 = 0_o_1

	Se escriben los nombres de los cuatro jugadores (máximo) así como
sus naturalezas. Para un jugador humano se pondrá 'naturalezaX = 0' siendo X
el número del 0 al 3 que representa a este jugador. Para uno automático, es
decir, para que lo lleve el ordenador, se pondrá 'naturalezaX = 1'.

----------------------------------------------------------------------------
3.- ¿Bajo qué licencia se distribuye xescoba?
----------------------------------------------------------------------------

	Bajo licencia GPL. Para más información lee el fichero COPYING o
bien la cabecera de este documento.
	Básicamente: No tienes que pagar para usar este programa, pero has
de respetar su copyright. Los términos exactos se encuentran en el fichero
COPYING.

----------------------------------------------------------------------------
3.1.- ¿De dónde han salido esos dibujos de las cartas?
----------------------------------------------------------------------------

	Los dibujos de las cartas han sido íntegramente realizados por el
autor de xescoba y también se distribuyen con licencia GPL (o, si se
quisieran usar como librería, bajo LGPL). Les he hecho usando la
imaginación, el programa GIMP y mis penosas dotes artísticas. No obstante
también he usado el logotipo de linux, creado por Larry Ewing, para ponerle
de relieve en los oros. Incluyo más abajo la licencia de distribución de
dicho fichero.
 

----------------------------------------------------------------------------
3.1.- ¿Quién se dedica a tan productivos entretenimientos?
----------------------------------------------------------------------------

	Soy yo, Ignacio Martín Bragado. Puedes escribirme e:

	ignacio.martin@tel.uva.es

	Nuevas versiones y otros programas en:

	http://www.ele.uva.es/~imartin/

----------------------------------------------------------------------------
3.2.- ¿Quién más ha colaborado?
----------------------------------------------------------------------------

	Aún nadie más... pero estás a tiempo ;-).

----------------------------------------------------------------------------
4.- Licencias adicionales.
----------------------------------------------------------------------------

	Tal y como se ha indicado en 3.1 he tomado para la creación del
relieven en los oros el fichero logo.jpg que se distribuye con el núcleo linux.
No obstante incluyo aquí su licencia de utilización respectiva:

logo.txt:

	 This is the full-colour version of the currently unofficial Linux logo
	('currently unofficial' just means that there has been no paperwork and
	that I haven't really announced it yet).  It was created by Larry Ewing,
	and is freely usable as long as you acknowledge Larry as the original
	artist.

	Note that there are black-and-white versions of this available that
	scale down to smaller sizes and are better for letterheads or whatever
	you want to use it for: for the full range of logos take a look at
	Larry's web-page:

        	http://www.isc.tamu.edu/~lewing/linux/

