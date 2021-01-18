/* IMBHeader:  1.0.0
 * Programa:   tres_copas.cc 
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
const char * tres_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #020204",
"+	c #8D847B",
"@	c #C7C4C4",
"#	c #4C4C4C",
"$	c #A9A29C",
"%	c #816350",
"&	c #824827",
"*	c #C4AC96",
"=	c #9C9384",
"-	c #E4E3E2",
";	c #9A653C",
">	c #CCB3A0",
",	c #815A45",
"'	c #AA9981",
")	c #D5D3D2",
"!	c #D7B599",
"~	c #555554",
"{	c #9A5928",
"]	c #DDC3AC",
"^	c #A49B8C",
"/	c #998C80",
"(	c #71442C",
"_	c #6F351B",
":	c #B9B5B1",
"<	c #727274",
"[	c #A47448",
"}	c #DCBCA2",
"|	c #764C36",
"1	c #A5947E",
"2	c #AA642C",
"3	c #E2CCB8",
"4	c #F5F5F3",
"5	c #8E5B3A",
"6	c #222220",
"7	c #775747",
"8	c #161614",
"9	c #B6A496",
"0	c #975224",
"a	c #8A7C74",
"b	c #2D2D2C",
"c	c #D2A484",
"d	c #806C60",
"e	c #723C20",
"f	c #8A8A8C",
"g	c #DDDBD9",
"h	c #C5BDB8",
"i	c #CDCDCA",
"j	c #9D6B46",
"k	c #B6AEA4",
"l	c #EBEBEB",
"m	c #FEFEFC",
"n	c #5C5C5C",
"o	c #7C7C7C",
"p	c #AE6D31",
"q	c #A07C5C",
"r	c #A45D2B",
"s	c #BEBEBC",
"t	c #D6AC8A",
"u	c #A48E7C",
"v	c #916D4F",
"w	c #AE9E88",
"x	c #8D654C",
"y	c #AAAAAC",
"z	c #834E30",
"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm",
"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm",
"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm",
"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm",
"mmmm4^fffffffffffffffffff)mmmmmmmmmmmmmmmmmm)fffffffffffffffffff$4mmmm",
"mmmm^nfffffffffffffffffff)mmmmmmmmmmmmmmmmmm)fffffffffffffffffffn^mmmm",
"mmmmff4~.~mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffii-.)mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmm@~mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffms88-mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmm-6ommmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmff@gm~ymmmmmml)@s:::::ssi-mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffyb<$4mm-@$^9*]]3}t!}3]*9$$:gmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmm:9>}}]]]}}t!}]}}]33]>w$-mmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmm@h]}}}}]}!!!}]3333]]}}}}^gmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmm@9}}!}!ttccc}}}]]}]}}}}*=-mmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmml+/w!>!ttt}}]}]]}}}!t*/as4mmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmm/=u+/uuw*>}}]}>*$1///1/immmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmm91'1u1'1=/fff+f/'w^^''1lmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmms'''''''w1w''''1^'''''$mmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmm-='11111w''w'1'11''''1smmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmm4$^1111''11w'1'u'1'11^-mmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmm)11u11uww'ww1u11u^''kmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmm4^111'11''1111u'1''1)mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmm@uu1111'1uuuuu111'$mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmm4^11''''''111u1''1)mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmiu11''1''w'11'1'kmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmk1'''www'''11'^lmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmm4^'''11w'''u1=)mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmml==''www111=@mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmg='1111u11:mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmm:+'1uu1+^mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmg,d+/+d7hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmm-(ex{;|(@mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmm4|e,z%e|)mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmm4(ex2;|z)mmmmmmmmmmmmmml)@s:::::ssi-mmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmm4((v2j||immmmmmmmmm-@$^9*]]3}t!}3]*9$$:gmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmg&evr;7&hmmmmmmmmm:9>}}]]]}}t!}]}}]33]>w$-mmmffmmmm",
"mmmmffmmmmmmmmmmmmm@&&50{,&wmmmmmmmm@h]}}}}]}!!!}]3333]]}}}}^gmmffmmmm",
"mmmmffmmmmmmmmmmmmm/_,jr2,e%mmmmmmmm@9}}!}!ttccc}}}]]}]}}}}*=-mmffmmmm",
"mmmmffmmmmmmmmmmmm-,e,{{pxe&)mmmmmmml+/w!>!ttt}}]}]]}}}!t*/as4mmffmmmm",
"mmmmffmmmmmmmmmmmmueex{rrx&_+mmmmmmmm/=u+/uuw*>}}]}>*$1///1/immmffmmmm",
"mmmmffmmmmmmmmmmm)|_|50zz07e(@mmmmmmm91'1u1'1=/fff+f/'w^^''1lmmmffmmmm",
"mmmmffmmmmmmmmmm4a__%2rrr{xee,-mmmmmms'''''''w1w''''1^'''''$mmmmffmmmm",
"mmmmffmmmmmmmmmm1e_(,0222{57ee+mmmmmm-='11111w''w'1'11''''1smmmmffmmmm",
"mmmmffmmmmmmmmms(ee%p2rr22pv(_ekmmmmm4$^1111''11w'1'u'1'11^-mmmmffmmmm",
"mmmmffmmmmmmmmm:7(7x{r000005,&7smmmmmm)11u11uww'ww1u11u^''kmmmmmffmmmm",
"mmmmffmmmmmmmmmm-$+[[jjr;;[qa$gmmmmmmm4^111'11''1111u'1''1)mmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmlg)gs))g-4mmmmmmmmmm@uu1111'1uuuuu111'$mmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm4^11''''''111u1''1)mmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmiu11''1''w'11'1'kmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmk1'''www'''11'^lmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm4^'''11w'''u1=)mmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmml==''www111=@mmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmg='1111u11:mmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm:+'1uu1+^mmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmml)@s::::s:si-mmmmmmmmmmmmmg,d+/+d7hmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmm-@$$$>}]]}t!}3]*9$$:gmmmmmmmmm-(ex{;|(@mmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmky>!}]]]}]t!}}]}]33]>w$-mmmmmmm4|e,z%e|)mmmmmmmmmmmffmmmm",
"mmmmffmmmmmm@h}]}}}]}!!!}33333]]}}}!$gmmmmmm4(ex2;|z)mmmmmmmmmmmffmmmm",
"mmmmffmmmmmm@9}!}!!>tcct}}}]]]}]}!}*/-mmmmmm4((v2j||immmmmmmmmmmffmmmm",
"mmmmffmmmmmml+uw!!!tct}!]}}]}}}!t*=as4mmmmmmg&evr;7&hmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmm=1/+//1wc!}}@}>kw1=//1=immmmmmm@&&50{,&wmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmm$11111'==f/f/f//^w^'^11lmmmmmmm/_,jr2,e%mmmmmmmmmmmffmmmm",
"mmmmffmmmmmmm@'''1''''1'1'1'''1''''$mmmmmmm-,e,{{pxe&)mmmmmmmmmmffmmmm",
"mmmmffmmmmmmmg1''111'^wwww'111'''w1smmmmmmmueex{rrx&_+mmmmmmmmmmffmmmm",
"mmmmffmmmmmmm4$'1u11''11w11'u'1'111-mmmmmm)|_|50zz07e(@mmmmmmmmmffmmmm",
"mmmmffmmmmmmmm)1'111u''w'w'u11u1w'kmmmmmm4a__%2rrr{xee,-mmmmmmmmffmmmm",
"mmmmffmmmmmmmm41u11'1'''111uu1'1'1)mmmmmm1e_(,0222{57ee+mmmmmmmmffmmmm",
"mmmmffmmmmmmmmmi1uu111111uu11'11^$mmmmmms(ee%p2rr22pv(_ekmmmmmmmffmmmm",
"mmmmffmmmmmmmmm4^111'w''1111u11'^immmmmm:7(7x{r000005,&7smmmmmmmffmmmm",
"mmmmffmmmmmmmmmmiu'1'1'''w111''1:mmmmmmmm-$+[[jjr;;[qa$gmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmm:1''''w'w1'11'1lmmmmmmmmmmmlg)gs))g-4mmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmm4$1''11w''1u1^immmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmml=='''ww1111hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmg='''1u11=smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmm:/111uu+^mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmg7da/+d7hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmml((x{j|e@mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmm4(e,z,(|)mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmm4(ex2x|z)mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmml|&v2j||immmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmg|ejr;,(hmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmh&&x0{5&wmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmue,;rr,e%mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmm-ze,{rpve&)mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmm=eex{{r;|_/mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmg(_750&zz7_(@mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmm4a__,rrrr{xe_%-mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmm=e_(,{22205,e_+mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmh(_e%p22r22pv(_e:mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmk7|75{r0{00{5,&7:mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmg$+q[j;;5;jqa$gmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmm-gggh))g-mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm4i)mmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmif=#@mffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmnfmg4mffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm~b@4mmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmi6~-mmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmms~l4mmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm^b:flmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmml=fsmmffmmmm",
"mmmmffmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmffmmmm",
"mmmmo#ffffffffffffffffff$4mmmmmmmmmmmmmmmmmm)fffffffffffffffffff~fmmmm",
"mmmm:offffffffffffffffff$mmmmmmmmmmmmmmmmmmm)ffffffffffffffffffff)mmmm",
"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm",
"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm",
"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm",
"mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"};
