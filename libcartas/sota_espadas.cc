/* IMBHeader:  1.0.0
 * Programa:   sota_espadas.cc 
 * Directorio: xescoba-1.2.1/libcartas 
 * Fecha:      Sun Apr 15 16:44:39 CEST 2001 
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

/* XPM */
const char * sota_espadas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #050506",
"+	c #858669",
"@	c #B3C67C",
"#	c #B68B24",
"$	c #4B4844",
"%	c #BAA477",
"&	c #994954",
"*	c #ECE8E4",
"=	c #CBA550",
"-	c #D8C990",
";	c #AFA89A",
">	c #A4AB5B",
",	c #866953",
"'	c #DFD297",
")	c #B2B7A6",
"!	c #696758",
"~	c #BC8893",
"{	c #9B8650",
"]	c #AB6B70",
"^	c #99985E",
"/	c #530F09",
"(	c #E5CC90",
"_	c #88744C",
":	c #5E2D27",
"<	c #797665",
"[	c #BEA88B",
"}	c #B8953D",
"|	c #D3CABD",
"1	c #8B8A8B",
"2	c #571D18",
"3	c #7A6847",
"4	c #877663",
"5	c #C0B9A8",
"6	c #2A2A2B",
"7	c #734B43",
"8	c #CEB781",
"9	c #6F2A28",
"0	c #A1A5A0",
"a	c #B29A7E",
"b	c #A87C40",
"c	c #B2B662",
"d	c #595956",
"e	c #925859",
"f	c #745A4A",
"g	c #C5C5BB",
"h	c #FEFEFC",
"i	c #1E1E1C",
"j	c #A1B5AD",
"k	c #4F3A29",
"l	c #7F8487",
"m	c #6E3A39",
"n	c #CB989E",
"o	c #896D66",
"p	c #B17889",
"q	c #D9D8D4",
"r	c #C6C880",
"s	c #D6BB9F",
"t	c #9B9992",
"u	c #D3A99D",
"v	c #393839",
"w	c #77919C",
"x	c #9B7B76",
"y	c #9A6678",
"z	c #E6DCD7",
"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh",
"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh",
"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh",
"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh",
"hhhh*011111111111111qhhhhhhhhh0111111111qhhhhhhhhq11111111111111thhhhh",
"hhhh0d11111111111111qhhhhhhhh*0111111111qhhhhhhhhq11111111111111dthhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11q$;hhvv;hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh1<1.0h1dqvhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh1lq.;hvdq.5hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11q.0h6d|.0hhhhhhhhhhhhhhhhhhhhh*hhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh1lq.;hvdq.5hhhhhhhhhhhhhhhhhhhhh*)t>;g|zhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11q.0hld|.hhhhhhhhhhhhhhhhhhhhh|>>>cc>@@5hhhhhhhhhhhhhhhhhhh11hhhh",
"hhhhl<!.dq*!$ghhhhhhhhhhhhhhhhhhhhh*<d_<!^crcqhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhg*hhhhhhhhhhhhhhhhhhh)v{#{{{{@rc*hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh)!q*hhhhhhhhhhhhhhhhhh!v_3{#3{=>@ghhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh1t*qhhhhhhhhhhhhhhhhh*v$_$<_fd}}>>*hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh11gqhhhhhhhhhhhhhhhhhhk3b$da3${}^^hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh)ttqhhhhhhhhhhhhhhhhhqd3}}_##=#f!^hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh)t$zhhhhhhhhhhhhhhhhhjt3=#_3}}b1d!5hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh516qhhhhhhhhhhhhhhhhht;!}#bba=#1d^thhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhgl1qhhhhhhhhhhhhhhhhhqqtb#e7f}#fd>+hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhg1*qhhhhhhhhhhhhhhhhhhhhg{=8==}#_>;*hhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh)l<qhhhhhhhhhhhhhhhhhhhhht4^}^=#{cczhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh0tgqhhhhhhhhhhhhhhhhhhhh*tb##{%c{>^zhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh)0$zhhhhhhhhhhhhhhhhhhh0d3###b}#!+!*hhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhht<6qhhhhhhhhhhhhhhhhg0a{}_###{3k<++*hhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh0<6qhhhhhhhhhhhhhh*;a1!#=}####!!!!^*hhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhj<)zhhhhhhhhhhhhh*1)(sye{}##}{4t)<<*hhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh1t$qhhhhhhhhhhhhh)as((us8}{__['(rrtqhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh11vqhhhhhhhhhhhh*1-~u(((-((--(((((rlqhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh)t6qhhhhhhhhhhhhjc-p~(((-(((((((((([t*hhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh5t<qhhhhhhhhhhhzt5srjr-npu@('((ss((-55hhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhh)1lqhhhhhhhhhhht[a,c@-((~0@((-sp~((-r)hhhhhhhhhhhhh11hhhh",
"hhhh11hh*)jjjl!!tjg)5hhhhhh5xnu7x--((()rr(r@nu((((r*hhhhhhhhhhhh11hhhh",
"hhhh11hhhgj0ww!!wwtwghhhhh)ass~ef-((('(('(-@r%s(((-;hhhhhhhhhhhh11hhhh",
"hhhh11hhhhh)d<2m{##3^qgt00x~nytz3s(((((-(((-s4%((((;*hhhhhhhhhhh11hhhh",
"hhhh11hhhh*l3</:}###a-r[ussst4h*3-((((-~n(--)fa((-';hhhhhhhhhhhh11hhhh",
"hhhh11hhhhh0!o/2####}-(~u((slqhh{-(((((np((50d[(--;qhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhtl73a}#fa(s~n'(1|hhhxs(((((-c--0!$[(-5)hhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhh*tt1%~[s;;hhhh1n]s((('-(8$3b{-8l*hhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhh*51<+0hhhhhau~u(((((-[_##b[tqhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhx-((((((-c_b}##^5hhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhh*4c((r-r-s33b{#bxhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhh*30%%aj@-8%4_,#)*hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhh*f,ff,f3_<<!_3ahhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhh*1////22:7,,7mfhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhzm////////////2{hhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhx//////////////:*hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhz2//////////////2;hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh;////////////////7*hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhha////////////////25hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhho/////////////////ohhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhh|2/////////////////2hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhn///////////////////ahhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhh;///////////////////,hhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhh[///////////////////,*hhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhz2//////////////22//,hhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhh*m//////////////////e*hhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhh5///////////////////<*hhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhha///////////////////ghhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhq3///////2/////////7hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhq7m2//2&am2//////:5hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhs&&&&&&gh*y999299[hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhu&&&&&p*hhs&&&&&&*hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhq&&&&&p*hh*e&&&&&*hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*&&&&&phhhh]&&&&&*hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*&&&&&yzhhhp&&&&&*hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*&&&&&ezhhh[&&&&phhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*&&&&&ezhhhze&&&]*hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*&&&&&]zhhh*y&&exhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhze&&&e[hhhh*xo_3x*hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*oo,ooghhhh*+,_<_*hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*4,<__qhhhh*4_3<,qhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*<_,<3qhhhh*+_o_<ghhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*43__4*hhhh*+3<_3ghhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*__<3_hhhhh*{_3__ghhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*<3_<4hhhhh*+,_<oqhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*__,<^hhhhhz+,<_<ghhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*<__xghhhhhz+4{{{5hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhzaaa%|hhhh*8a[[[%;qhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*;[[%qhhhh*[[[[%[a;hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh*[[%;qhhhhhq[%[%%|hhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhh'%%%[*hhhhhz[%%%%qhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhh*[[%[8*hhhhhz[%[%%s*hhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhh*5a%%[5hhhhhh*[n%[[[[5q*hhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhh*u[%%n[*hhhhhhz%[n%%[[%%5|zhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhq5%%[%[qhhhhhhh*[a%a%%%%a%%[*hhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhh'[a%[;5qhhhhhhhh*s[[[%[a%[%%%[zhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhh*[%%[[-hhhhhhhhhhh|8[55'g%[%[[%5*hhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhh*[[%[qhhhhhhhhhhhhhhhhhhhz||[gs5*hhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhh5s|*hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh!$)ht.i5h11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhldq.hh6dhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhvdq.)h6dhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh6$q.;h6dhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhvd|.)h6dhh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh)dq.hh6v)h11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhvv;hhv1hh11hhhh",
"hhhh11hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh11hhhh",
"hhhhl$1111111111111<dddd<*hhhh0111111111qhhhq!ddddl1111111111111d1hhhh",
"hhhh)l1111111111111ld!ddl*hhh*0111111111qhhh|!d!dd<11111111111111|hhhh",
"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh",
"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh",
"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh",
"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh"};
