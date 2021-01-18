/* IMBHeader:  1.0.0
 * Programa:   caballo_copas.cc 
 * Directorio: xescoba-1.2.1/libcartas 
 * Fecha:      Sun Apr 15 16:44:37 CEST 2001 
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
const char * caballo_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #050506",
"+	c #9C8555",
"@	c #A6C688",
"#	c #A3A59F",
"$	c #E0E2E4",
"%	c #D1CA90",
"&	c #AD8648",
"*	c #BFA57F",
"=	c #574844",
"-	c #6E6961",
";	c #D3D4D4",
">	c #C6B68F",
",	c #B59565",
"'	c #8A8A8C",
")	c #9E6236",
"!	c #97A8B8",
"~	c #E5CB8F",
"{	c #8095A4",
"]	c #C09449",
"^	c #B8D5EC",
"/	c #7C7A75",
"(	c #DBBA9A",
"_	c #A9957C",
":	c #CBC9C6",
"<	c #B8C68B",
"[	c #7C4B3A",
"}	c #ADBB90",
"|	c #9BB7D7",
"1	c #8C7961",
"2	c #B19B82",
"3	c #C0BAB4",
"4	c #9A8A79",
"5	c #EBEAE9",
"6	c #2A2A2C",
"7	c #612C29",
"8	c #9C7A40",
"9	c #825848",
"0	c #575754",
"a	c #B67997",
"b	c #1E1E1C",
"c	c #FDFDFC",
"d	c #AB8B7C",
"e	c #E1D7AC",
"f	c #9B9891",
"g	c #B2B6B9",
"h	c #9B5B32",
"i	c #836A58",
"j	c #ABABAD",
"k	c #A5C8EA",
"l	c #C59A8A",
"m	c #D7AC92",
"n	c #B8C8D7",
"o	c #9B796F",
"p	c #6A3A34",
"q	c #724941",
"r	c #6E5A4B",
"s	c #B1A796",
"t	c #3C3B39",
"u	c #A76892",
"v	c #A18F5C",
"w	c #DDDAD6",
"x	c #BC8A2B",
"y	c #C08798",
"z	c #BFAA96",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccc5#''''''''''''''''''';cccccccccccccccccc;'''''''''''''''''''#5cccc",
"cccc#r''''''''''''''''''';cccccccccccccccccc;f''''''''''''''''''0#cccc",
"cccc''cftcc5'0cccccccccccccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''gt6ccjb0cccccccccccccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''c06ccc60cccccccccccccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''c06ccc605w:3:33::w5ccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''c06ccc6t>(((((~(~(>3cccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''c06ccc6t(((mm((:((ms$ccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''gbbfcf.br22*m((zz2_fcccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''cccccccg2___ff4_f2_3cccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''ccccccc;_____2___f_wcccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''cccccccc#d_f_2_4__2ccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''cccccccc:4___fd__f:ccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''ccccccccc#___f___scccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''cccccccccw___2_vfwcccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''cccccccccc:f_f__:ccccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''cccccccccccf4v42cccccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc''ccccccccccc299[scccccccccccccccc5::$cccccccccccccccccccccc''cccc",
"cccc''ccccccccccc2[)[gcccccccccccccccc3n3g:5cccccccccccccccccccc''cccc",
"cccc''ccccccccccc2[)9*cccccccccccccc5::::;jwcccccccccccccccccccc''cccc",
"cccc''ccccccccccco9h9occcccccccccccc$#'f'::jcccccccccccccccccccc''cccc",
"cccc''cccccccccc;qhhh95cccccccccc$#gj'gjj/:n:ccccccccccccccccccc''cccc",
"cccc''ccccccccccoph[hpdcccccccccc3::/j:;wf#3g5cccccccccccccccccc''cccc",
"cccc''ccccccccczp9h)h9p:ccccccccc;n;:wj#gg'-j;cccccccccccccccccc''cccc",
"cccc''ccccccccc1[)hhh)[4ccccccccccjjf_2f$3:fj5cccccccccccccccccc''cccc",
"cccc''ccccccccc5;z*22>;ccccccccccc5'ri41:n:5cccccccccccccccccccc''cccc",
"cccc''ccccccccccccccccccccccccccccc;v+**_::ccccccccccccccccccccc''cccc",
"cccc''cccccccccccccccccccccccccccccwvf1,'fj5cccccccccccccccccccc''cccc",
"cccc''ccccccccccccccccccccccccccccc52-9+5j:5cccccccccccccccccccc''cccc",
"cccc''cccccccccccccccc5ccccccccccccc:+8#cccccccccccccccccccccccc''cccc",
"cccc''cccccccccccccc$3j45cccccccc55;/x]'55cccccccccccccccccccccc''cccc",
"cccc''ccccccccccccc$iiir15cccccc;};f+]x-{/jccccccccccccccccccccc''cccc",
"cccc''ccccccccccccc$11188,3$55:'gg!48x+fk|!35ccccccccccccccccccc''cccc",
"cccc''ccccccccccccc5}i8v]&+818+1!kk!/14{'f|gn5cccccccccccccccccc''cccc",
"cccc''cccccccc5c5;cccsi+]]xx]]&+!knkg!||!|^nnncccccccccccccccccc''cccc",
"cccc''ccccccc5n:f'5c5c5:+8xxxx81||k^kkk{kk^^n3cccccccccccccccccc''cccc",
"cccc''ccccccc5fgf/j5ccccw_8888rv:!kkk^|{|kkk^:cccccccccccccccccc''cccc",
"cccc''ccccccc;/3gtt-35cccc5;e55cw|k^kkk|k|kk^3cccccccccccccccccc''cccc",
"cccc''cccccc$/0//-//-jcccccccccc$nkk^k^|^|^^:wcccccccccccccccccc''cccc",
"cccc''cccccc/00t{##f14wccccccccc;k^^k^^!^^^^g5cccccccccccccccccc''cccc",
"cccc''ccccc$-'0r_si4_v+:$ccccccc{k^^^^kj^^$^|ccccccccccccccccccc''cccc",
"cccc''cccccc22sss>1_22_f/jccccc;!k^^^n|^n$^n3ccccccccccccccccccc''cccc",
"cccc''ccccc$f,>4':/2,,l_#-#ccccj|^^^k|^^^^'gcccccccccccccccccccc''cccc",
"cccc''ccccc5s2z*3$sv,,*,#-=:ccc!kk|{#n^^#fg:5ccccccccccccccccccc''cccc",
"cccc''ccccc53-_z%$:42l2lzf-/cccgg1v&/nn{n#:;cccccccccccccccccccc''cccc",
"cccc''ccccc5#03(3;wd*2*22sj/#c5##1+x+'fw;f;wcccccccccccccccccccc''cccc",
"cccc''ccccc$/iz>35$+,l,2l22f-w;/g-+,1!^^$f$5cccccccccccccccccccc''cccc",
"cccc''ccccc$/vl*#c542,,222*2/{#'^!-'kk^^|';$cccccccccccccccccccc''cccc",
"cccc''ccccc$/22zwcc42*l**2+i-0/!kk|knkkk{3gwcccccccccccccccccccc''cccc",
"cccc''cccccg/z2scc5z*2,,1o+,,=/'k^k|kk|kf55$ccccccc5c55ccccccccc''cccc",
"cccc''ccccc34f0fn;$j1i1o_vd,_/-/-{{|||||{cccccccccc5:3wccccccccc''cccc",
"cccc''ccccc;ff/#'#34,,,l,],,2*>{q1/0-/'{$ccccccccc;ffnf:5ccccccc''cccc",
"cccc''cccccc#0;ccc54,,2,,,,,*%~*999-ipr'cccccccc5n///fjg3$cccccc''cccc",
"cccc''ccccccc55ccc:d,,,ll*ll~%%%2pqpp7qfccccccccw#ff'g:'3:;5cccc''cccc",
"cccc''ccccccccccccj*,,,2,z*m~%<}~lir779g5c553j$53'#f:gf:fgg55ccc''cccc",
"cccc''cccccccccccc2(*2l*%@}~~%}a~~(o[p4}^ee<34fg{//ff!3ffgg:cccc''cccc",
"cccc''cccccccccc5$3~m,>~~<%~~~(am~~_qpqs%~~~(u('':;g#j#j/f:g55cc''cccc",
"cccc''ccccccccccc:~~(m~~~%~~~~~~(~~:/qps~~~~~(~;'55c53fgj-335ccc''cccc",
"cccc''ccccccccccc3~%<~~~~~y(~~~~~%~%1r7>a~~~~~~;4$cccc$fg#f:$ccc''cccc",
"cccc''ccccccccccc>~}<%~~~~a2%~~~~}<%_irmuz~~~~(}#:5cccc5'g/n;ccc''cccc",
"cccc''ccccccccccc%yo<%~~~~%}%~~~ad<~>r9_<}%~~~a2};ccccccwf#g;ccc''cccc",
"cccc''cccccccccc5~lm%~~~~~><%~~(l(<~(i7o@%%~~(l(<3cccccc53ffwccc''cccc",
"cccc''cccccccc5c5~~~~~~~~~~~%~m~~~~~~-qi~e%(m~~~~3ccccccc:''5ccc''cccc",
"cccc''cccccccccccz~~~~~~~~~~~mu~~~~~(17p~~~la~~~~3ccccccc5#f;ccc''cccc",
"cccc''cccccccccc5z~((~%~~~~~~(_%~((%~zpp(~~(_%~m(:cccccccc:#:ccc''cccc",
"cccc''ccccccccccc'(lu}%~~~lm~<@%~aa}%mppy~~<}%~ad:5cccccccc:gccc''cccc",
"cccc''cccccccc5cw4*>m}<~<la(~~%%~(>@%*[9a~~~%%~(g#5ccccccccwnccc''cccc",
"cccc''ccccccccc:4+r1<%%~%}>~~~~~~~%%>lqi(~~%~~~~%5cccccccccc5ccc''cccc",
"cccc''ccccccccgs2r_#;>>~%%%~~~~~~~~~1q91%~~~~~~~%5cccccccccccccc''cccc",
"cccc''ccccccc5'*'#2#cc;%~~~~~~~~~~~(1p9i(e~~~~~~~ccccccccccccccc''cccc",
"cccc''cccccccc',sg+#cccc5%>%~~%~~~~lu[qq*(~~%~~~e5cccccccccccccc''cccc",
"cccc''cccccccc:_3;4s5cccc5;::ee%~~~maz99u*~%%%~~;$cccccccccccccc''cccc",
"cccc''cccccccc3+j$4s5ccccccc53##ss:e<%%#a(~%@}~~%55ccccccccccccc''cccc",
"cccc''ccccccccw4g54f5cccccccccc5c5:$<(~<@~~<>u~~w5cccccccccccccc''cccc",
"cccc''cccccccc5_>c_s5cccccccccccccccc$e%~~~~~y(~~5cccccccccccccc''cccc",
"cccc''cccccccc5#1$4*$ccccccccccccccccc5#>>*z%*>~$5cccccccccccccc''cccc",
"cccc''cccccccc5f-;4_5cccccccccccccccccc:>2*_/3#z%wcccccccccccccc''cccc",
"cccc''cccccccc51/:f2cccccccccccccccccccc:**,*j38':cccccccccccccc''cccc",
"cccc''cccccccc5/-s4gcccccccccccccccccccc5g>**j:iis5ccccccccccccc''cccc",
"cccc''ccccccccc#i#v;ccccccccccccccccccccc:l_vw5i&fcccccccccccccc''cccc",
"cccc''cccccccc5$3__$cccccccccccccccccccc$s2*4c5+&45ccccccccccccc''cccc",
"cccc''ccccccccc5c44$ccccccccccccccccccccjz*2:c5f&dgccccccccccccc''cccc",
"cccc''cccccccccc:gs5ccccccccccccccccccc:223gcc5s&8gccccccccccccc''cccc",
"cccc''ccccccccccg3#ccccccccccccccccccc$_*22$cccj&i35cccccccccccc''cccc",
"cccc''ccccccccccf/:ccccccccccccccccccc:2*s:cccc;o8:ccccccccccccc''cccc",
"cccc''cccccccccc1_$cccccccccccccccccc5s*,25ccccc1&3ccccccccccccc''cccc",
"cccc''cccccccccc-/gcccccccccccccccccc52,1:cccc5c4&2ccccccccccccc''cccc",
"cccc''ccccccccc5f4scccccccccccccccccc:zdf5cccc5c2&1$cccccccccccc''cccc",
"cccc''ccccccccccf/#cccccccccccccccccc3/r45ccccccfiig5ccccccccccc''cccc",
"cccc''cccccccccc$c5cccccccccccccccccc;1i-5ccccc5311:cccccccccccc''cccc",
"cccc''ccccccccccc5ccccccccccccccccccccsf35ccccccf1r'55cccccccccc''cccc",
"cccc''cccccccccccccccccccccccccccccccc5ccccccccc3#2f:c$f/';;{/f5''cccc",
"cccc''ccccccccccccccccccccccccccccccccccccccccccc5c55cc:.fccf.:c''cccc",
"cccc''ccccccccccccccccccccccccccccccccccccccccccccccccc:.jcc#.;c''cccc",
"cccc''ccccccccccccccccccccccccccccccccccccccccccccccccc;.#cc#.;c''cccc",
"cccc''ccccccccccccccccccccccccccccccccccccccccccccccccc:.jcc#.;c''cccc",
"cccc''ccccccccccccccccccccccccccccccccccccccccccccccccc;.#cc#.;c''cccc",
"cccc''ccccccc5ccccccccccccccccccccccccccccccccccccccccc:.-;cj./5''cccc",
"cccc''ccccccccccccccccccccccccccccccccccccccccccccccccc5#ccc;3cc''cccc",
"cccc''cccccccccccccccccccccccccccccccccccccccccccccccccccccccccc''cccc",
"cccc/=''''''''''''''''''#ccccccccccccccccccc;'''''''''''''''''''0'cccc",
"cccc3/''''''''''''''''''#ccccccccccccccccccc;'''''''''''''''''''';cccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"};
