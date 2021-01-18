/*
 * Fichero:  xescoba.txt
 * Fecha:    Sat Dec 26 16:28:12 CET 1998 
 * Autor:     Ignacio Mart�n Bragado.
 * Programas:  
 * M�quina: Linux espe 2.0.35 #5 Mon Dec 14 14:48:03 CET 1998 i586 unknown 
 */

/***************************************************************************
 Las mejoras o sugerencias sobre este programa seran estupenda-   
 mente recibidas. Puedes realizarlas en las direcciones del autor  
 imartin@jmlopez.fam.cie.uva.es
 imartin@cie.uva.es
 ******************************************************************************/              

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

----------------------------------------------------------------------------
1.- �Qu� es xescoba?
----------------------------------------------------------------------------

	Xescoba es una implementaci�n en GTK del popular juego espa�ol de la
escoba.

----------------------------------------------------------------------------
1.1- �Cu�les son las reglas de la escoba?
----------------------------------------------------------------------------

	El objetivo de la escoba es llevarse el mayor n�mero posible de
cartas, oros, escobas, sietes y el siete de oros. Cada escoba, as� como el
velo (el siete de oros) vale un punto. Para el resto se lleva un punto el
que m�s cantidad haya logrado llevarse. 
	Se produce 'una escoba' cuando un jugador logra llevarse todas las
cartas que hay en el centro.
	Para jugar hay que tirar siempre una carta. Si existe alguna
combinaci�n de esa carta con las que hay en el centro tal que sumen quince,
considerando que las sotas valen 8, los caballos 9 y los reyes 10, y el
resto de las cartas su puntuaci�n nominal, el jugador recoge las cartas que
le sumen 15 y las pone en su baza. Por ejemplo, una sota y un siete 'suman
quince' y, por tanto, es una baza v�lida.

----------------------------------------------------------------------------
2.- �Qu� opciones tiene xescoba?
----------------------------------------------------------------------------

----------------------------------------------------------------------------
2.1.- En el men�.
----------------------------------------------------------------------------

	En el men� propiedades se puede elegir:

	Sonido-> Activa/desactiva el sonido.
	Ver cartas->Activa/Desactiva el panel para ver la �ltima jugada.
	Sugerencias->Cuando est� activado el ordenador selecciona para un
		jugador 'humano' lo que �l considera la mejor jugada.
		El jugador humano puede aceptarla o bien seleccionar la
		jugada que quiera. Esta selecci�n se hace de forma que la
		mejor jugada (seg�n el criterio del ordenador) aparecer� ya
		cogida tanto en las cartas del centro como en las del
		jugador. Esto es, basta dar al bot�n de turno si se acepta
		la jugada, porque estar�n las cartas seleccionadas.
	Configuraci�n -> Permite decir cuantos van a ser los jugadores en 
		la pr�xima partida, y si van a tratarse de jugadores
		regulados por el ordenador o bien ser�n humanos. Tambi�n se
		puede poner el nombre de los jugadores en el cuadrado
		correspondiente. Para seleccionar el n�mero de jugadores y
		su naturaleza basta con pinchar en el bot�n adecuado. Para
		cambiar los nombres hay que escribir en el cuadro de nombre
		correspondiente.
			Este di�logo lo que hace es modificar el fichero de
		configuraci�n para la pr�xima partida. (Ver en 2.2).

----------------------------------------------------------------------------
2.2.- En el fichero de configuraci�n.
----------------------------------------------------------------------------

	El fichero de configuraci�n .xescoba deber�a encontrarse en la base
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

	Se escriben los nombres de los cuatro jugadores (m�ximo) as� como
sus naturalezas. Para un jugador humano se pondr� 'naturalezaX = 0' siendo X
el n�mero del 0 al 3 que representa a este jugador. Para uno autom�tico, es
decir, para que lo lleve el ordenador, se pondr� 'naturalezaX = 1'.

----------------------------------------------------------------------------
3.- �Bajo qu� licencia se distribuye xescoba?
----------------------------------------------------------------------------

	Bajo licencia GPL. Para m�s informaci�n lee el fichero COPYING o
bien la cabecera de este documento.
	B�sicamente: No tienes que pagar para usar este programa, pero has
de respetar su copyright. Los t�rminos exactos se encuentran en el fichero
COPYING.

----------------------------------------------------------------------------
3.1.- �De d�nde han salido esos dibujos de las cartas?
----------------------------------------------------------------------------

	Los dibujos de las cartas han sido �ntegramente realizados por el
autor de xescoba y tambi�n se distribuyen con licencia GPL (o, si se
quisieran usar como librer�a, bajo LGPL). Les he hecho usando la
imaginaci�n, el programa GIMP y mis penosas dotes art�sticas. No obstante
tambi�n he usado el logotipo de linux, creado por Larry Ewing, para ponerle
de relieve en los oros. Incluyo m�s abajo la licencia de distribuci�n de
dicho fichero.
 

----------------------------------------------------------------------------
3.1.- �Qui�n se dedica a tan productivos entretenimientos?
----------------------------------------------------------------------------

	Soy yo, Ignacio Mart�n Bragado. Puedes escribirme e:

	ignacio.martin@tel.uva.es

	Nuevas versiones y otros programas en:

	http://www.ele.uva.es/~imartin/

----------------------------------------------------------------------------
3.2.- �Qui�n m�s ha colaborado?
----------------------------------------------------------------------------

	A�n nadie m�s... pero est�s a tiempo ;-).

----------------------------------------------------------------------------
4.- Licencias adicionales.
----------------------------------------------------------------------------

	Tal y como se ha indicado en 3.1 he tomado para la creaci�n del
relieven en los oros el fichero logo.jpg que se distribuye con el n�cleo linux.
No obstante incluyo aqu� su licencia de utilizaci�n respectiva:

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

