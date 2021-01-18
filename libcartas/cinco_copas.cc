/* IMBHeader:  1.0.0
 * Programa:   cinco_copas.cc 
 * Directorio: xescoba-1.2.1/libcartas 
 * Fecha:      Sun Apr 15 16:44:38 CEST 2001 
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
const char * cinco_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #020204",
"+	c #938477",
"@	c #CBC4BE",
"#	c #A6A3A1",
"$	c #4C4C4A",
"%	c #656564",
"&	c #C8A892",
"*	c #949494",
"=	c #7D4427",
"-	c #94633F",
";	c #E5E4E2",
">	c #80543A",
",	c #D8D4D1",
"'	c #C4BBB4",
")	c #AA967D",
"!	c #907363",
"~	c #BAB4AE",
"{	c #965427",
"]	c #DDC4AE",
"^	c #A76430",
"/	c #B18464",
"(	c #B9A493",
"_	c #DBBBA0",
":	c #9F9A93",
"<	c #D5A886",
"[	c #845C43",
"}	c #AB9B83",
"|	c #757574",
"1	c #E0CBB9",
"2	c #B7ACA2",
"3	c #2B2B2A",
"4	c #9D8476",
"5	c #5A5957",
"6	c #703B20",
"7	c #F5F4F4",
"8	c #151514",
"9	c #73442E",
"0	c #866451",
"a	c #AA7444",
"b	c #765442",
"c	c #B88B6A",
"d	c #877567",
"e	c #7F4D31",
"f	c #9C5C2D",
"g	c #CDCBCA",
"h	c #916B4F",
"i	c #DEDDDA",
"j	c #987D6F",
"k	c #A96B3A",
"l	c #EDECEB",
"m	c #8B8B8C",
"n	c #C7B19F",
"o	c #876D5E",
"p	c #FEFEFC",
"q	c #AEADAB",
"r	c #BEBBB7",
"s	c #A88C76",
"t	c #6C6C6C",
"u	c #7C7C7C",
"v	c #1E1E1C",
"w	c #754C37",
"x	c #D7B091",
"y	c #9D8E7E",
"z	c #A5947E",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppp7#:#qqqq~q~q~q~q~q~q~;pppppppppppppppppp;~q~q~q~q~q~q~qqq#:*#7pppp",
"pppp#t#~@@ggggggggggggggglpppppppppppppppppplggggggggggggggg@rq:t:pppp",
"pppp**3..,ppp777p7777pppppppppppppppppppppppp77777l77l777ppppppp*mpppp",
"pppp*m|qqlppppppppppp7pppppppppppppppppppppp7ppp7ppppp7ppp7ppppp**pppp",
"pppp*tv%ippppppppppppppppppppppppppppppppppppppppppppppppppppppp*mpppp",
"pppp*|583lpppppppppppppppppppppppppppppppppppp7l;l;;lll7pppppppp:*pppp",
"pppp*#piv,lig@@gg@@g@@gi7pppppppppppppppppl,@@@g1,]]1,g@@@ilpppp*mpppp",
"pppp*|ip5#~'11]]__]]]]1@2~ipppppppppppppp,~@__11]__]]]]111n';ppp:*pppp",
"pppp*53tm]]__]__x_1111]___2,ppppppppppppp~_]____<<_]]11]_]__@ppp**pppp",
"pppp*#p72___xx<<<__]]]___ny,ppppppppppppp'y(_x<<x____]___x2:gppp:mpppp",
"pppp*#pp2yz(&<<__]____n}zy*ppppppppppppppizyyyz)(nnnn2(}yyz#;ppp:*pppp",
"pppp*#ppr}zy+yyy}:z:yyy})z2pppppppppppppplz)zz))zzzzzyzz}}}(7ppp:mpppp",
"pppp*#pp,}})z)}})})zz)))}}gppppppppppppppp#})))))}}}))}z)z}~pppp:*pppp",
"pppp*#ppl})))z})}}}}zzz})}lpppppppppppppppg)zzz:}y}})zzz}z},pppp:mpppp",
"pppp*#ppp~:zzzz}:}))z}zzz~pppppppppppppppp7:zzzz}}}}zz)y}}}ppppp:*pppp",
"pppp*#pppiyszz}))}zzyzz}}ippppppppppppppppp'sszzz)zysyz)zzrppppp:mpppp",
"pppp*#ppppqsyzz}zsyzszzz#ppppppppppppppppppl:s)}z)z)zsz)}:lppppp:*pppp",
"pppp*#ppppiyz)z})})zz)z}ippppppppppppppppppp@z)z}}}})zzz)gpppppp:mpppp",
"pppp*#ppppp~z})}}}))z})~pppppppppppppppppppp7qz)z}z}}}y}qppppppp:*pppp",
"pppp*#ppppp7#z}zz}}zzz}7ppppppppppppppppppppp7:z}z}}zz):;ppppppp*mpppp",
"pppp*#pppppply}}}}}zz:;pppppppppppppppppppppppi:}}z)sy);pppppppp:*pppp",
"pppp*#pppppppi*)zysyyipppppppppppppppppppppppppg+zzyy+,ppppppppp:mpppp",
"pppp*#ppppppppyjyyydqpppppppppppppppppppppppppp;[o++007ppppppppp:*pppp",
"pppp*#pppppppp#60h06~pppppppppppppppppppppppppp7w9[[90pppppppppp:mpppp",
"pppp*#pppppppp~6[>[9@pppppppppppppppppppppppppppb9f-9dpppppppppp:*pppp",
"pppp*#pppppppp~6[^[=gpppppppppppppppppppppppppp7eb^kwopppppppppp:mpppp",
"pppp*#pppppppp}6-^0='pppppppppppppppppppppppppp;e>ff>[7ppppppppp:*pppp",
"pppp*#pppppppps=-{-=}pppppppppppppppppppppppppp@=[ff>e,ppppppppp:mpppp",
"pppp*#ppppppp;[w-f^90pppppppppppppppppppppppppp46[f^[6}ppppppppp:*pppp",
"pppp*#ppppppp26>ffkwegppppppppppppppppppppppppgw9-f^-=0lpppppppp:mpppp",
"pppp*#pppppplb6[{{{>6j7pppppppppppppppppppppp7!6w{{e{w6zpppppppp:mpppp",
"pppp*#pppppp}69ff{{096~pppppppppppppppppppppp266[f^^{[69@ppppppp**pppp",
"pppp*:ppppp'w90-ka^-0=b,pppppppppppppppppppp@b9[kk^kka[60lpppppp*mpppp",
"ppppm:ppppl4!jccc/cc)j!#pppppppppppppppppppp@4jsc/////yjyipppppp*mpppp",
"pppp**pppppi1g1]]_]@]@1lpppppppppppppppppppppli,,1ggg1iipppppppp*mpppp",
"ppppm*pppppppp7p7777ppppppppppppppppppppppppppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppppig~~~~2n~~~~g;ppppppppppppppppppppppmmpppp",
"ppppmmppppppppppppppppppp7'#n_]]_]<____]]2#'7pppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppp'_____]xx_]1]11]__n27ppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppp~&___x<<<x__]]____(:7ppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppgmy}&&<x_]]]___()yygpppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppp;)zzyyyzzzz:yyyz}zz;pppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppp7}z)z):}}}}zzzzz}}}ppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppp~})z))}}}}}zzz}}zrppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppi:zszy}z}}}z)zz}};ppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppp72yz)))}})yszzz}#pppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppiyzzzzzzszzz)z},pppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppp#sz)}}z})yz))qppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppp;:)z}})})))z};ppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppppgzz}z}}}zzz@pppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppppp~y}}}}zzz~ppppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppppp7qzzzysyqpppppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppppppid+yy+dlpppppppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppppppplwbhow[ppppppppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppppppppw9{[9oppppppppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppppppppew^-woppppppppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppppppplb>^^e0ppppppppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppppppp,ebff>>;pppppppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppppppp(6[^f[9'pppppppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppppppl0=[{^-64pppppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppppp}6wf{{[99@ppppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppppib6[ff{{>6olpppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppplo66[f^^f[=6y7ppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppp(96[^^^ffk>6wgppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppp;)!h^f{{f^h!~7ppppppppppppppppppppppmmpppp",
"ppppm*pppppppppppppppppppppppplig@n''g;lppppppppppppppppppppppppmmpppp",
"ppppm*ppppppppppppppppppppppppppppppppppppppppppppppppppppppppppmmpppp",
"ppppmmppppppppppppppppppppppppppppppppppppppppppppppppppppppppppmmpppp",
"ppppmmppppppppppppppppppppppppppppppppppppppppppppppppppppppppppmmpppp",
"ppppmmpppppppppppppppppppppppppppppppppppppppp7;iiiiiii;ppppppppmmpppp",
"ppppmmppppp;g'r~'nnrr~'g;ppppppppppppppppppi'~~_@]_x_]@n~~';ppppmmpppp",
"ppppmmpp7r2(]]_]]x___]]]n#'7ppppppppppppp7~n__]]__n_]]_11]_2rpppmmpppp",
"ppppmmpp@_]__]_xx_]1]11]__nq7pppppppppppp;2___x_x<x_]11]____n,ppmmpppp",
"ppppmmpp~2x__xx<<x__]_____(#pppppppppppppl*}&x_<<x_]______&}:7ppmmpppp",
"ppppmmpp,yy)(&<x_]]]___()y+gpppppppppppppp#zyyyz(2nnnn2}:yy)2pppmmpppp",
"ppppmmpp;zzzyyyy:zz:y*yy}zz;pppppppppppppprzzzz))yzzyys}}}}}@pppmmpppp",
"ppppmmppp}})z):}}}}z)))})}}pppppppppppppppi}z))z})}}}zzzz}}#;pppmmpppp",
"ppppmmppp~}zz)))}}}})z:zz}rppppppppppppppp7:})z)}z)}})zz}zz(7pppmmpppp",
"ppppmmpppi:zszz}z}})y))}z};pppppppppppppppp@zzzzz}}}}s)zz}:gppppmmpppp",
"ppppmmpppp(zz)z)}})zzzzz}#ppppppppppppppppplzsyzz}zzyzyzz)}lppppmmpppp",
"ppppmmpppp,yzzzzzzyssz)z},pppppppppppppppppprzz)z}zzzzs)zz'pppppmmpppp",
"ppppmmpppp7qs)z}}))zzz))qppppppppppppppppppp7zz)z}}}))z)}#7pppppmmpppp",
"ppppmmppppp;:})}}}}z))z};pppppppppppppppppppp,:})z}}))zz},ppppppmmpppp",
"ppppmmppppppgyzzz}}}zzz@pppppppppppppppppppppp@yz})}}zyz~pppppppmmpppp",
"ppppmmpppppppry})}}zzz~pppppppppppppppppppppppp~z}}zzzz~ppppppppmmpppp",
"ppppmmppppppp7qz)zysyqppppppppppppppppppppppppp7*yzysy:pppppppppmmpppp",
"ppppmmppppppppid+yy+dlpppppppppppppppppppppppppp}>u4dw2pppppppppmmpppp",
"ppppmmpppppppplwbhow[ppppppppppppppppppppppppppp(6[{[9@pppppppppmmpppp",
"ppppmmpppppppppww{[9oppppppppppppppppppppppppppp~6[fb9gpppppppppmmpppp",
"ppppmmpppppppppww^-woppppppppppppppppppppppppppp26-^-9@pppppppppmmpppp",
"ppppmmpppppppp7w>^^e0ppppppppppppppppppppppppppp)6-f-=2pppppppppmmpppp",
"ppppmmpppppppp,ebff>>;pppppppppppppppppppppppppp!e-{-=4pppppppppmmpppp",
"ppppmmpppppppp(6[^f[9'ppppppppppppppppppppppppp1=b-fk9>lppp;#%#pmmpppp",
"ppppmmpppppppl0=[{^-64ppppppppppppppppppppppppp+6>{ffb6(pppm,gupmmpppp",
"ppppmmppppppp}6wf{{[99@ppppppppppppppppppppppp@66-{{e[6bipl$@pppmmpppp",
"ppppmmppppppib6[ff{{>6olppppppppppppppppppppp;06wf^^f-w6d77$3mgpmmpppp",
"ppppmmpppppl!69[^kkf-=6ypppppppppppppppppppppj690^^^^^-96#pg$8upmmpppp",
"ppppmmppppp2>ehak^kkaoeb,ppppppppppppppppppplj[okk^^^ka-0#7,gm~pmmpppp",
"ppppmmpppppl2z)cc///c))'ppppppppppppppppppppp7,r&((c}(2~ip;383ipmmpppp",
"ppppmmppppppp7l;i,,iilppppppppppppppppppppppppppp77777ppppppppppmmpppp",
"ppppu$mmmmmmm++mmmmmmmmm#ppppppppppppppppppp,mmmmmmmmmmmmmmmmmmm$mpppp",
"pppp~ummmmmmmmmm+mm+mmmm#7pppppppppppppppppp,mmmmmmmmmmmmmmmmmmmm,pppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp"};
