/* IMBHeader:  1.0.0
 * Programa:   help.h 
 * Directorio: xescoba-1.2.1/src 
 * Fecha:      Sun Apr 15 16:42:49 CEST 2001 
 * Autor:      Ignacio Mart�n Bragado.
 * e-mail:     ignacio.martin@tel.uva.es 
 * M�quina:    Linux 
 */

/***************************************************************************
 Improving this program will be thanked. You can do it in author address:
 ignacio.martin@tel.uva.es
 ******************************************************************************/              

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
#############################################################################*/

char *HelpStrEn = "None";
/*"----------------------------------------------------------------------------
1.- What is xescoba?
----------------------------------------------------------------------------

	xescoba is an 'escoba' (broom, sweeping) playing program. The escoba 
game is a popular Spanish cards game.

----------------------------------------------------------------------------
1.1- What are 'escoba' rules?
----------------------------------------------------------------------------

	The 'escoba' purpose is to win the greatest possible amount of cards,
golds, sevens, sweepings and the special card named the 'velo', that is, the
seven of golds. Every sweeping and the 'velo' wins one point. For the rest
the point is won when you have more amount of golds, cards or sevens than
the others.

	You make a 'escoba' or a sweeping when you win all the cards on the
center.

	Playing 'escoba' is simple: You have only to play a card every turn.
If there is some combination of this card with centers ones adding 15 you
win this cards. If not your card stays on center. In order to make this
combination you should know that knights are 9 points, kings 10 and 'sotas'
8 points. That is. The cards whose nominal value are 1,2,3,4,5,6 and 7 are
evaluated as 1,2,3,4,5,6 and 7 (no difficult!) and the 10,11 and 12 as 8,9
and 10. Here is a table:

	Nominal value.		Real value for adding
	1				1
	2				2
	3				3
	4				4
	5				5
	6				6
	7				7
	10 (sota)			8
	11 (knight)			9
	12 (king) 			10

	For example: Playing a seven with a 'sota' is a valid trick, because
they add 15. 
	More examples: Here are some examples. NOTE: There are a lot of
more valid tricks then the ones here!.
	Real cards			Values for adding  

	1,4,king			1+4+10 = 15  	OK!
	2,2,2,knight			2+2+2+9=15	OK!
	7+sota				7+8=15		OK!
	4,5,6				4+5+6=15	OK!
	1,1,3,7,3			1+1+3+7+3=15	OK! 	
	
----------------------------------------------------------------------------
2.- What are xescoba options?
----------------------------------------------------------------------------

----------------------------------------------------------------------------
2.1.- In menu
----------------------------------------------------------------------------

	In the properties option of menu you can chose:

	Sound	
		Make sound active or not.
	Game exposition window
		To active or not the visualization of last trick.
	Advice	
		When advice is active the computer select for you what it
		think is the better trick. If you accept it only have to
		click in turn button. Else you should reselect your trick
		and clicking turn button.
	Configuration
		When selecting configuration you obtain a configuration
		dialog. Here you can select the number of players (from 2 to
		4) and their nature (human or computer ones). You can write
		their names, too.
		This dialog modifies the configuration file. (Further
		information in 2.2) 

----------------------------------------------------------------------------
2.2.- The configuration file.
----------------------------------------------------------------------------

	The configuration file .xescoba should be in $HOME. Such file have
the following fields:

	jugadores = players_number

		players_number is a number from 1 to 4

	jugador0 = player_name0
	jugador1 = player_name1
	jugador2 = player_name2
	jugador3 = player_name3
	naturaleza0 = 0_or_1
	naturaleza1 = 0_or_1
	naturaleza2 = 0_or_1
	naturaleza3 = 0_or_1

	For a human player you write:
		naturalezaX = 0
	where 'X' is a 0,1,2,3 according with the other fields. For a
	computer one you write 
		naturalezaX = 1

----------------------------------------------------------------------------
3.- Distribution license.
----------------------------------------------------------------------------

	GPL. For further information see COPYING.

----------------------------------------------------------------------------
3.1.- About cards pixmaps.
----------------------------------------------------------------------------


	Cards pixmaps have been made by xescoba author, using lots of
imagination, the excellent GIMP program and his poor artistic talent.

	The Linux logo, created by Larry Ewing, has been used too.

	The license for distributing this pixmaps are GPL (or LGPL).  

----------------------------------------------------------------------------
3.1.- About xescoba author and his personal folly.
----------------------------------------------------------------------------

	I'm Ignacio Mart�n Bragado. You can email me in

	ignacio.martin@tel.uva.es

	New versions and another programs in

	http://www.tel.uva.es/~imartin/

----------------------------------------------------------------------------
3.2.- Another people contributing
----------------------------------------------------------------------------
	Nobody, but if you want...
	* Your name here	you@domain.??

----------------------------------------------------------------------------
4.- Additional license
----------------------------------------------------------------------------

	Here is the license for the linux logo. (The original files are in
	linux kernel)

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


						The end.
"
};
*/

char *HelpStrEs = "None";
/*
"----------------------------------------------------------------------------
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
"

*/