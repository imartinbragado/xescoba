/* IMBHeader:  1.0.0
 * Programa:   info2.cc 
 * Directorio: xescoba-1.2.1/libiconos 
 * Fecha:      Sun Apr 15 16:44:31 CEST 2001 
 * Autor:      Ignacio Mart�n Bragado.
 * e-mail:     ignacio.martin@tel.uva.es 
 * M�quina:    Linux 
 */


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

/* XPM */
const char * info2_xpm[] = {
"50 53 17 1",
" 	c None",
".	c #090F34",
"+	c #2872E1",
"@	c #2140C5",
"#	c #12266B",
"$	c #245EDB",
"%	c #3628DB",
"&	c #3244DD",
"*	c #212DBF",
"=	c #224ECF",
"-	c #AFB7D4",
";	c #757BC0",
">	c #828FBB",
",	c #BCC8E3",
"'	c #1E178B",
")	c #5160A9",
"!	c #999EC9",
"                                                  ",
"                                                  ",
"                                                  ",
"                                                  ",
"                                                  ",
"                                                  ",
"                            == @                  ",
"                         $=$+=%==*$@              ",
"                     @%@=%&%$*&+%%$%@=@           ",
"                    %$&&$&%@&@==@&=*%&=@@         ",
"                  %=%=&&&$&&$&&=&$$&@$+@$%        ",
"                 $@&&$$*%+$=%=$$@$==$&$%$@@       ",
"               ==%=&$&$%=&&&$$=&&%&%@&+@$&%%      ",
"              &*$=$=&&$&%%&$$&&=**=$@&%$%%%*      ",
"             ====&%$%&=%%=$%%%=$==$%'%%@***=$     ",
"            @++%%%%$&'!,+$+%*&==&=$'**@==*@='     ",
"           =@$$*@@@$*>,,>+====$@%%&*@@*@$@$=%'    ",
"          %%$%+&=&+$@,,-;$&$$&$@%**@=@'*==@=@@    ",
"          %%=@$&+=$&#!,;=&$%%%=@=*$$=@#@@*@=@@'   ",
"         &@$$=&=&&+$@%.%%%&%'%$&*===$=@#@=*'@*'   ",
"        *%=%%%==%&++%%%%'%@**@$%%=%%@*#@##**@@@   ",
"        ==&*%@*%%&$$%);!'@=@@=$*@*'%*@###@@#=@    ",
"       $&$$@@&$*@$---,,-*===$$$@=@**@=##@###''    ",
"       =$&+=@=+$=+=)>-,!@==@***$=$@===@.''''''    ",
"      @$&&%+$%$%%%+=>-->*'%'''*=$$@@=*#.'.'#*#    ",
"      $$$&%=$&$%%%+*!,-;'%'%'#*$*%$%==#.'#####    ",
"      %%$@*=&$&%%*$#-,-)'*****@$*%@%=+#####'@#    ",
"     @%&&$=@@$&**&$#---&'*****=$*'=*=+...####'    ",
"     @=$=$=*&$==&=$@,--&@*#@@@*=**=*@$...##''.    ",
"    &%++%$&$++===&%@---=$*#@=#@@**$===....#.'.    ",
"    '%+$+$*&%%++$&@)---#=@@==@@=*=$=*#..'###'     ",
"    *@++&$=@%*$++*@)--!'#==@@@==@====#.#.#'.#     ",
"    $=$$=&%=**$%%$@)--!'**'''@#==@=$=....#...     ",
"    =$%%=%&$=$&%%=*>,!;#@*'''@'===**...##.'.      ",
"    @$%*$@@+=$=**$@!--;#@##''@@==@*'....##..      ",
"    +$$==@@$@$+=*==,--!)=**#@=@*@@''..#.#.#.      ",
"    %=%%%&$&=$$+$)-,--!>#==@''#'@=#....##...      ",
"    %&%@@$&$&$%%;>))@==='==*#**#@#....#....       ",
"     =*=$%@$++@%*$=*=$$$#==#*@@@*.....#...        ",
"    %+==+%@++++==$+=@@***'#@#=*@#..#..#...        ",
"     $&@$=*%$$&$$*%@**@@=**@@$#......#...         ",
"     $$$%&*%=@%$$@=$==**@@=@@#...........         ",
"      %$%$*%=**$==&@@@@=@**##...........          ",
"      &=*$@*==@@**%%**$@'''.....#......           ",
"       @$+$$$=*******@=#'.............            ",
"        %%%%$@=*@*'###.....#.#.......             ",
"         %%*$=$$#=##########..#.....              ",
"          @*+$$@#=**###'..#.......                ",
"            $+*$=@@@##'.''#.....                  ",
"              *==*@@*'''.......                   ",
"                 *                                ",
"                                                  ",
"                                                  "};
