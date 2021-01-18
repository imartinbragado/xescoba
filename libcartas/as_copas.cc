/* IMBHeader:  1.0.0
 * Programa:   as_copas.cc 
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
const char * as_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #161614",
"+	c #8F909D",
"@	c #505971",
"#	c #955427",
"$	c #6B7499",
"%	c #CCCBCC",
"&	c #B1B2B3",
"*	c #6E5A50",
"=	c #8A7A6E",
"-	c #B6967A",
";	c #7F8392",
">	c #AB9F8C",
",	c #6A341B",
"'	c #6D6967",
")	c #694738",
"!	c #D4B498",
"~	c #7D7773",
"{	c #AF794C",
"]	c #8A6952",
"^	c #A5917A",
"/	c #5D6583",
"(	c #676D94",
"_	c #8B8789",
":	c #D2C1B2",
"<	c #783519",
"[	c #7A695D",
"}	c #EAEAED",
"|	c #777DA2",
"1	c #AA6531",
"2	c #834926",
"3	c #A8A8AC",
"4	c #9497A9",
"5	c #717BA1",
"6	c #37383E",
"7	c #B3A28A",
"8	c #2D2C2E",
"9	c #DEDFE0",
"0	c #474B52",
"a	c #C2C3CF",
"b	c #AF8562",
"c	c #FDFDFC",
"d	c #A25B2A",
"e	c #D4A785",
"f	c #E3CDBA",
"g	c #595553",
"h	c #9C7658",
"i	c #9B8875",
"j	c #BEB5AE",
"k	c #7A5A48",
"l	c #6F3B20",
"m	c #B8753D",
"n	c #754731",
"o	c #904C20",
"p	c #DCB798",
"q	c #986746",
"r	c #B46A31",
"s	c #925C37",
"t	c #616B8C",
"u	c #595D73",
"v	c #7B84AB",
"w	c #A99881",
"x	c #7A3C1D",
"y	c #DFC1A9",
"z	c #D4D5D9",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"ccccc}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}ccccc",
"ccc}}9z%%%%%%%%%%%a%%%%%%9%aaaaaajaaaaaaaaaa9%%%%%%a%%%%%%%a%%%z9}cccc",
"cccc9&j&&&&&&&&&&&&&&&&&&a34+++4v+v+4+44++44a&&&&&&&&&&&&&&&&&&j&9}ccc",
"ccc}%jv5+/55$$55$||$|5||vvv555$$5$$$5555v$5||||||v$(|5///(~$$v$|jz}ccc",
"ccc}%&5$88($$($$$|$$5$$555t/////tttttt($5$t$$||55$$tt@u/($t'($t$&%}ccc",
"ccc}%&$(g8t(tt$$t$$((t$$$/u/u/u/$tt//tt((/tt$$t$$($u@0/t//t/t$($&%}ccc",
"ccc}%&$5g8tt/t(((((($$$(u@@ut/t(t/tt((t$///$$/t(tttuu@5(/t(t(5|$&%}ccc",
"ccc}%&5|g8ttt($($($($$t/@@@ttt$$(/$$((((/t$|5/(($$tu@/t//((($55$&a}ccc",
"ccc}z&v|g8/(($t$(($$$(/@@@t/tt($$((5$(((/t55((/(t5t/////$tt$$|$|&%}ccc",
"ccc}%&v$08;((($(t($($$/0/t$((($($((|5(//($((ttttt$t///tt($t$5|$v&%}ccc",
"ccc}%&$t68@($(((((t$$t@@/t($$($$$$(v|(($(tt(((//ttttutt/(555(/(|&a}ccc",
"ccc9%&$tt/t(($$($(t(5u@v43$3_~'''''''(''+_t(43vttt/ttt//$$$t@//$&%}ccc",
"ccc}%&5t((t$$$$$(((&v+~'['~>>w:f%!:p:::%3>w_['*';53$$//$$/t@@//(&a}ccc",
"ccc}%&;5$$($$$($+|;u'+jj::yy:yfyyeeeppyyff::p:::4~u~|;$(//t@@/t|&%}ccc",
"ccc}%&|$$t$$$$+~/'>:ffffyyfyyyyfpe!eppyy:yypy!yfff:3~*(5//t/tt5|&a}ccc",
"ccc9%&v$$(t$t4/_:y:!pyfffyyy:yyy!e!pyyyyyy:pyfffffy!pjig;//t((5|&%}ccc",
"ccc}%&|$$($$4g3fyyy!!!pyyffyypyye!pyyfyyyyp:fffffyyyp!!jg|u($$5v&%}ccc",
"ccc}%&v$$$(+'::yyfyppyyyyfyyppppepyyffffyyfffffyyyfppypyf*v$5$vv&%}ccc",
"ccc}%&v$$$$4=fyyyyy:ypp!yyyppppppypffffffffffyyyyy::pyp!:w|$$$5v3%}ccc",
"ccc}%&v$$$$3gyfyypppypp!!!!!eeeee!!yyfyfzffffyyyyypyypp!e__$555v&%}ccc",
"ccc}%&5($($(6>ypyppy!yp!!eeeee-eeepp!!pyyfyypyyyypppppyp36+5$$55&%}ccc",
"ccc}%&55$$5$_/=:pe!y!!yp!peeeeppepyy!ppyyy:py:ypy!!py!p_g'/5$$55&%}ccc",
"ccc}a&5$$$$(47=*4!yyy!pppeeeeppypyfypyyyyypyyypy!epyjw'~3vu($$$53%}ccc",
"ccc}%&5$$t$tt^w>~u'w!p!eeeeeeppyyyyfyyyfyyyyyyyy!j>~*~4i>~/(5((5&%}ccc",
"ccc}%&v5$$$(3_^^^>w=u'_+e!!!pyyyyyyyyyyyy::y::w_'g=4ww^^^/(((($v3%}ccc",
"ccc}%&55$$$53;^www^^>>i_[~g[[[^w>w>>>>>>'[~g'~~+77>www-^=4(/t($5&%}ccc",
"ccc}%&v5$$5vv;w^wwwwww^^ww7&&3+_++_++___33>&ww>>>7w>w^ww;|(((tt|&%}ccc",
"ccc}%&v$$$5v$+7www^ww^iwwwww>>w>>w>w>ww^w^i>w-www>w>>w-w=$((($5v&a}ccc",
"ccc}%&v$55vv|__w>wwww^^w>^>wwwwwwwww>wwww^^ww^w>>ww->ww>_5|$($5v&%}ccc",
"ccc9%&5$$$55$v~w>ww>www-w^->wwww7ww^>wwwww->ww^-wwww>ww^5$v((($v&%}ccc",
"ccc}%&5ttt$t$$;>>ww^w^wwww>ww7>www7>->wwwwww^w>wwww>ww>=4v5(/(($&%}ccc",
"ccc}a&t@/t(((t;w7>w^w-w^^wwww>>w7ww>>www>www^w>ww>ww7w>;v|(t//tt&%}ccc",
"ccc}%&5t(t$$$$+_w7w^>wi>wwwww-ww>w7>^7w^w^^w^www7www>w>;|$///@t$&a}ccc",
"ccc}%3$$$$tt$$5'w>w^w^^www>w7wwi^w77w>w^7i^>wwww7w7iww_+((/u//((&%}ccc",
"ccc}%&5(t(t/$$$~>>www^iwwwiw>w>w7>w7w7www^wwww^wwwww>>=5$t@//(t$&a}ccc",
"ccc}%&5t$($($$v3~>www^^w>wi^>www>7w>>w-^^^^www=>ww>w>w$|$/@t/t($&%}ccc",
"ccc}%&55(t$$$5$/=>w^^w^w^w^w-w>www>7w>^^w^^w^w^wwwwww~+$t@/(t$$;&a}ccc",
"ccc9%&v$($$$$v$t;^^^^^^wwwwwww>ww-wwww^^w^^^wwwww>->>~$///tt//tv&%}ccc",
"ccc}%&5t(|($v|$tv'^^-^^^wwwww>w>wwwii^^^^^^^wwwwww>w_vu///tt(/(|&%}ccc",
"ccc}%&|$$v5vv$/tt$^^^^i^ww^^wwwww^^^^^^^^^^^w^wiwww-~tt//ttt//5v&%}ccc",
"ccc}%&v555vv5t($tv~^w^w^^wwiiw>^^^-^i^^^^^^^ww-^i7>4/u//uu//tt$5&%}ccc",
"ccc9%&|5v$$($t/t$$uw^^^wwwwwww>www^-w^-^w^^^wwwwww>~|///////t$$|&%}ccc",
"ccc}%&v$$$$$5t$t$$+~wwbwww>w>>>>>w>wwwww^^^-wwwww7w~u//$ttt($5$|&%}ccc",
"ccc}%&|$$t$5$$/$5$$+>^iww^www-ww>w>w>wwww^iww^w>ww';/(tt/ttt(|$|&a}ccc",
"ccc}a&5$$5$tt$$$t55;=w^7wwww>>ww>wwwwwwww^w7w^>-w+_/($//(t//t((5&%}ccc",
"ccc}%&5$55t$$t//t(tt'4->w^>www>ww>w>>wwwwww>www>>=tt((//((/tt((v&%}ccc",
"ccc}%&v$5(t//ttt/(($+~ww^w-ww>ww>w>w7wwwww^^^w>wi5t($/(($(//(5$;&%}ccc",
"ccc}%&v$t/@tttt/$$$t(__wwwwww>>w7w7w77wwwwwwwww>'+t$$/t($//t$$5v&%}ccc",
"ccc}%&vt/u/t$(($($$$t$~>wwww7ww^www>^ww^7wiw^ww~$(((//t/(/t$55$v&a}ccc",
"ccc}%&$////($(($(($$$t|[>>ww7ww^w>7>>wwwwi^>w>__t(//t/(/t/(|(5($&%}ccc",
"ccc}%&$t(/(((((($$$55$$4=wi^wwww>>-7>>www^^www;$$((t(/t/$(($$($$&a}ccc",
"ccc}%&|$$$$$$$$$$$$5$$$$_^iwww>ww>>77w^w^w^ww';$t($($(((5($55//5&%}ccc",
"ccc}%&5t$5$($555$55$55$$+~www>>wwwwwww^^^^^>'$$($(($$/t$$$$5$/$;&%}ccc",
"ccc}a&$$$$$$5$$555$555$$tvu>www>www^w^^^^^w~4t$(t$($$/(($$5|$/((&%}ccc",
"ccc}%&v|($$$$$555$$5t$$t$$3~>w-www^ii^^^^w+;t$((((($(/($$$|5//t5&%}ccc",
"cc}}%&v$ttttt$$$5$(t@t5t($tg[7>^^^^^^^^^w=g$/$$$t$$$($$55($5@u(v&a}ccc",
"ccc}%&((///(t($$$$u@/vvt$t$;=g3w^^w^^^^w'[~tt(|(($$5$5|$$($(@(((&%}ccc",
"ccc}%&5(ttt(t/ttt(@@t5$$$/$4ks['477>>4~)][u(($5tt$$$(((t((~////$&a}ccc",
"ccc}a&$ttt$(t/t$t$@/t$t((($$]l#=0'''*'[k<];((($(($$u/(uuuu/u//t$&%}ccc",
"ccc}%&$((($$$t/t((/u/t(((($~kl<l_hb{{=n,,k_($$(($$/0t$u@gugu((t$&%}ccc",
"ccc}%&$($($$/t($t(t/tt$$$5$;k,,,]1##s=n<,u3(($$((5/u$$@0gu/(((/(&%}ccc",
"ccc}%&$ttt(((t($t5$$$t($$|$3*,ll*h#oq[,,,'/$($$$$$(/$/@@/t/'($t(&%}ccc",
"ccc}%&$((tt$tt$$$5t$$t$5|t/4'l,l*qx2k~,,,'/($$$$$($/@@u/((/'/(/$&a}ccc",
"ccc}%&$$tttt/t((t$($(($(/uu4[,,,*h##q[,,,[t($(($(((@@@t(u(t/($$$&%}ccc",
"ccc}%&55(/t/tt(((($(5$(tu@@3*,,l~1rr1~*xl'$$5t((t$tu@/$t/((($5|$&a}ccc",
"cc}}%&|5$/ttt$$($t$($(/u@@/3[xxl_rd11~x,<[5|$t/(($(/@///((t($|$5&%}ccc",
"ccc}%&v5(t/($t((t($$($/@@ut>[<x<_rrrr~n,<~$(ttttt$t////t(tt$$v$;&a}ccc",
"ccc}%&|t//t($t$t(($($(@0/tt|*xlx_1rrr~nll'+tt(t/t$t/@//t($$$$5$v&%}ccc",
"ccc}%&$/(/t((($($(t($t@utt$$s,,s[dddd[sx<[_$((t/ttttt(t/(5|5/@/$&a}ccc",
"ccc9%&$t(/t$$$$(((($$////tt;sxls[1dd#]]xxq(/(($(tt/$t//($(t@@//(&%}ccc",
"ccc}%&5$($((($$$$t(t$t///$$4s2x]]d#dd]]ooq+(($$$tu/$$(($(/t@@/t$&a}ccc",
"ccc}%&v$$$$$$$($$$$($(tut$$~xx2]]2o##hk2xo_$ttt$tut$(/(t//tu//$v&%}ccc",
"ccc}%&|$($($$$$5$$(tt$(t$$3]x<xk{1#do1~xxl';ut/t//ttttt////t(($|&a}ccc",
"ccc}%&v5((t$t$$55$ttt$$(5(_*<l<*{dddd1[n,<*$u/u///t//t(///u($$5v&%}ccc",
"ccc}%&5$$$$$(t$($$t(t/$(t$=nxll_11rrr1])l,kit/tt///t/tt//u/$$$|v&%}ccc",
"ccc9%&v5$(((t(((|5$$//$$$5*lxl]*sddsrrh*xxl[;t(t/tuttttt/u/$$$|v&%}ccc",
"ccc}%&5$$5$$$($$vv5$t/t(t;k<xxk]oo#1r1hk<xxk't(ttt/$tt////($$|5v&a}ccc",
"ccc}%&5$$((t$$($vvv$/uu@~'l<<x[r#d111r{[<<<k[$$$$tttttut(($|$55v&%}ccc",
"ccc}%&55(5$$($5vvvv(@uu@+*,lln[dd###dds[k,,,[;$$t$(tt//t5$($5$$5&%}ccc",
"ccc}%&5$$$$$t$5vv55uu//;[),,,*]###o2222s*,,,n'($t(tt/t/$5$/$$$$5&%}ccc",
"ccc}%&5$$$$($$55v$(////+*,,,l'hd#o2222#q'lx,,*;$$$t//t/($$ut5$$5&%}ccc",
"ccc}%&5$$$t$t5555/uu/u|[),,,n]sdd#s##o##[k,,<n~_(((tttttt$t((((5&a}ccc",
"ccc}%&v5$$$$5555|ut('@_*,,x<*h11d1drrd1dh*,,,<[+(t($$t(t(5(tt($5&%}ccc",
"ccc}%&55$$55v5v5(@ut/4)lx,,,*s#drrd1rddoq*2<<<)*+(($(($t5|(/(tt|&%}ccc",
"ccc}%&v5$$5v55v5tu//~'klxl,k[2#drr1rr#od2]kx<,,*$+tu///(|5(((($|&%}ccc",
"ccc}%&v$$55v55(tuu//'k,,<ll'qddd11rrr11ddq[n<,,,*;@@u/(5|$$$($5v&%}ccc",
"ccc}%&v$55v55(tt/(/;',,,l<k]mrr11dddd111m{]k,,,,l'u@((((||v($$5v3%}ccc",
"ccc}%&5t$t5$$t/tt//=nllx,x[bmrr1rddd#ddrmmb[ll,ll[_/tt((||v(t($|&%}ccc",
"ccc}%&$///$(($/$t//=kxnxxk[2#d1d1dd#d#o2oos][xxn2*_/(((|vv(t//t$&%}ccc",
"ccc}a&t@t/(((($t//$$']]2k[]s###o2xo#####d#sq]#2=*|uu((5vv$/(uu/t&%}ccc",
"ccc}%&5$$$($$$5tuttu;_*[==qrrmrrr1dd#dd11rrh[=[~_//($$|v$(tu//($&a}ccc",
"ccc}%&5t($t/$$$$utu$tt+|_'[]ibb-{{1rb{{bih~[u$+t$(t(($||$(uu/$t$&%}ccc",
"ccc}%&5(t((t5$55ttu$//$$(+34>;''''''''''=4~3+((//t/tt$|5$/@//tt$&a}ccc",
"ccc}%355(t($$$5tt$@$|$$$5$$55$5|$($+u($t((t($$$((((($5|5$/4;0'+5&%}ccc",
"ccc}%&5$$$$$$|5/($$$$($5555v$5$$(/t//u(/t$(t($$$(($$$|5t/@t_.+(|&a}ccc",
"ccc}%&v($5($||$t$ttt(/$v5$5$(($$u//t//$$($$55|||$(|$|5//t/t_.4t;&%}ccc",
"ccc9%&5((5$vv5tt/$$t$5$$$$$((((//tt/(t$((t5($(((55$5|t///tt_.4$v&%}ccc",
"ccc}%&|55v$vv(t$($(($(tt$tt$t$$u/(//$(((($5(5$$|$$$$t/t/u//v.45|&a}ccc",
"ccc}%&v55v55(ttt/($$/(((t$$t$5(//'((5(t((($((((((((t///uut/_.~v|&%}ccc",
"ccc}%&v5$$5$$(($55$($$$5$$555(t//(|$((|t((($(($((((///t(ttt_8__v&%}ccc",
"ccc}%&vvv55vv555v|5vv5vv55vvv($$$v;;|5||||||$$$$(55$t$$v5$55vvvvjz}ccc",
"ccc}z&&&&&&&&&3&&&&&&&&&a3434++4444++4++444+a&&j&&3&&&&&&&&&&&&j3z}ccc",
"cccc}zz%%%%%%%%%%%a%%%%%zzaaaaaaaaaa%aaa%aaa9%a%%%%%%%a%%%%%%%%z9}cccc",
"ccccc}}}}}}}}}}}}}}}}}}}}}}}}}}}}}9}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}ccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"};
