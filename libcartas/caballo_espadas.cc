/* IMBHeader:  1.0.0
 * Programa:   caballo_espadas.cc 
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
const char * caballo_espadas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #020204",
"+	c #8A8A8C",
"@	c #B1C48A",
"#	c #89A2B8",
"$	c #E8E8E7",
"%	c #BBA385",
"&	c #AB8850",
"*	c #D0C98F",
"=	c #484847",
"-	c #C4B791",
";	c #D4D5D2",
">	c #6A6765",
",	c #B39667",
"'	c #ADB3AC",
")	c #8597A7",
"!	c #E3CB8E",
"~	c #916D53",
"{	c #B8D4EC",
"]	c #D9B595",
"^	c #BF954F",
"/	c #A7C8E6",
"(	c #9D8349",
"_	c #B19A80",
":	c #BCB9B5",
"<	c #767777",
"[	c #CBC9C5",
"}	c #AEA593",
"|	c #D0A895",
"1	c #9AB4CE",
"2	c #BCC6CF",
"3	c #968A7B",
"4	c #B48398",
"5	c #BCAC93",
"6	c #2A2A2C",
"7	c #764A47",
"8	c #52110C",
"9	c #632F2E",
"0	c #957A5A",
"a	c #595959",
"b	c #7B5853",
"c	c #FEFEFC",
"d	c #A0947E",
"e	c #B57A94",
"f	c #E3D8B1",
"g	c #C49B90",
"h	c #A9BBCB",
"i	c #7F695C",
"j	c #8E5A64",
"k	c #C38A96",
"l	c #673B35",
"m	c #847A6C",
"n	c #6B4642",
"o	c #B98A2D",
"p	c #9A9998",
"q	c #A9A9AA",
"r	c #DDDBD8",
"s	c #ACBD8E",
"t	c #6C5C54",
"u	c #CFDBE1",
"v	c #97A8B4",
"w	c #DEBB97",
"x	c #99BCDF",
"y	c #BFC694",
"z	c #A98D78",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccc$}++++++++++++++;ccccccccc}+++++++++;cccccccc;++++++++++++++pccccc",
"ccccva++++++++++++++;cccccccc$v+++++++++;cccccccc;++++++++++++++apcccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++c;=qcc[6;ccccccccccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++$+.qc;<.;cccc$2ccccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++c;.'ccq.;ccc$<q[cccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++c;.qccq.;ccc$+:;cccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++c;.qccq.;cccr<p2cccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++c;.qccq.;ccc$q+qcccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++$>.a;;a.>$cc$qa+cccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++cccccccccccc$q=<cccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++cccccccccccc$q3)cccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++ccccccccccccr''[ccccccccccccccc$$$cccccccccccccccccccccccc++cccc",
"cccc++cccccccccccc$p<3cccccccccccccc$:'q:$$ccccccccccccccccccccc++cccc",
"cccc++cccccccccccc$p':ccccccccccccc$[;r;2:$ccccccccccccccccccccc++cccc",
"cccc++cccccccccccc$'><cccccccccccc$2q++q['[$cccccccccccccccccccc++cccc",
"cccc++ccccccccccccr<=>ccccccccc$[2[+pqqpp;:rcccccccccccccccccccc++cccc",
"cccc++cccccccccccc$+a<ccccccccc$''}+:;;:p:[:$ccccccccccccccccccc++cccc",
"cccc++ccccccccccccrmpqccccccccc$:[[2[:'q'+<v$ccccccccccccccccccc++cccc",
"cccc++cccccccccccc$+><cc$ccccccc;'qd_3:2;q}:$ccccccccccccccccccc++cccc",
"cccc++ccccccccccccr<>>cccccccccc$:mt33_::[$ccccccccccccccccccccc++cccc",
"cccc++cccccccccccc$qa>cccccccccccr5,3,_5'r$ccccccccccccccccccccc++cccc",
"cccc++ccccccccccccr'>vcccc$cccccc$-dm~_pp[$ccccccccccccccccccccc++cccc",
"cccc++cccccccccccc$q>qcccccccccccc;(i05r[r$ccccccccccccccccccccc++cccc",
"cccc++cccccccc:h1vv<a+1hhh;cc$cc$cr_((yccccccccccccccccccccccccc++cccc",
"cccc++cccccccc$hv))>><)1:2cccccccrp0o0+:;$cccccccccccccccccccccc++cccc",
"cccc++ccccccccccchit8i0[$ccc$$['q}do,(31#2$c$ccccccccccccccccccc++cccc",
"cccc++cccccccccccr+l8mo&_-:[:3)/hpm(&(vvvq2$c$cccccccccccccccccc++cccc",
"cccc++cccc$c$c$c$c:98b^o((&o(&+x/hp3m##)hh/'$ccccccccccccccccccc++cccc",
"cccc++ccccc$$$'[cc$mnd&oooo^(&+h/{////vv/{{1r$cccccccccccccccc$c++cccc",
"cccc++ccccc[v[m+$c$ccr5(oooo~m}vx{///1#1//{2uccccccccccccccccccc++cccc",
"cccc++cccc$'p;>=<:$ccc$;-d,5}2r'//{//x11///hr$cccccccccccccccccc++cccc",
"cccc++ccc$[<+'<=><+rccccc$ccccch//////hx//{'$ccccccccccccccccccc++cccc",
"cccc++ccc;mta<<+}mm5$cccccccc$c{/{/{{///{{{:$ccccccccccccccccccc++cccc",
"cccc++cc$v=>=t+p+33d}$$ccccccc2h{{{{{hh{{u{h$ccccccccccccccccccc++cccc",
"cccc++ccc[3_}%-%~zg,dd_2$cccc$#x{{{{/x;{uu2[$ccccccccccccccccccc++cccc",
"cccc++cc$:z5_3p'3,_,,pd+qccccrq//{{xh2{u/v2$cccccccccccccccccccc++cccc",
"cccc++ccc[d_5_[;+,,gg_p<a:ccc:1//hv1{{{'p}$ccccccccccccccccccccc++cccc",
"cccc++ccc;3+5-f$},,_%,%_>)rcc2hv((0q/hvh''$ccccccccccccccccccccc++cccc",
"cccc++cc$:<3-w:$'_%,g%__d+q$c'2<zo&+v'22:2$$cccccccccccccccccccc++cccc",
"cccc++cc$qiz5:[$:_,_g%%__d+[$m:+i,(mh{uh:r$ccccccccccccccccccccc++cccc",
"cccc++cc$qm%%_;c;z%,,,%_%_>pq+11+<q/{/{qq;$ccccccccc$ccccccccccc++cccc",
"cccc++cc$qm%5-$cr(_%g%__30ia<)//h1////x1q:$ccccccccccc$ccccccccc++cccc",
"cccc++ccrdd__;$c$}%,&z000,,>>mv///x/xx#'c$$cccccc$c$$$cccccccccc++cccc",
"cccc++ccrd3>>pq':3~0(zz,z,,3m<m)#))xxx#:cccccccccc$[::$$cccccccc++cccc",
"cccc++cc$qp+'::;;_z,z^,^^,,5-pbbj<>t>mvrcccccccc$[pp'::r$$c$cccc++cccc",
"cccc++ccc;+q$ccc:_,,_,,g,,5w!-zb7bbb7i'cccccccc$[+<<)'q:;$cc$ccc++cccc",
"cccc++ccccc$cccc}_,,,^,%g|!**y-~7779lt:cccc$$cc$pp}p}''q:2$ccccc++cccc",
"cccc++ccccccc$cr}g,g,%%5%-!*@sw*&0l9732$$$u'}[u:+p+::vqq''2$$ccc++cccc",
"cccc++cc$cccccc[w!g,|]*yy!!**eg!!]7lj0s*ff*%4p+p)pppp'pdp:'$cccc++cccc",
"cccc++ccccccccc2*!|%w!!**!!!!|gw!*3bnt5*!!!]kw'+;$r2q}'p<':[$ccc++cccc",
"cccc++cccc$ccc$*w!-!!!!!ww!!!!!!!!}blb5w!!!f!!!3;ccc$2}:p+:[$ccc++cccc",
"cccc++cccccc$c[f!y-!!!!wkg!!!!!***-tn~gk]!!!!!y':$ccc$rq:+:[$$cc++cccc",
"cccc++cccccccc;!5q@!!!!!|_*!!!w_s**0i~g_s!!!!|qs:$ccccc[pqp[$ccc++cccc",
"cccc++ccccccccfwe%y!!!!!*@*!!!ke-*w3b7dyy!!!]egs[ccccccc2q+;rccc++cccc",
"cccc++cccccccc$w]!!!!!!!**!!w!ww!*!_b7d**!ww!w!*-cccccccrq+'$ccc++cccc",
"cccc++cccccccc*!!!!!f!!!!!!]kw!!!!!%n9m!!!k|w!!w:ccccccc$:pq$ccc++cccc",
"cccc++ccccc$cc[*!ww!!!!!!!!]k-!!w!*]~9~-!!gg!!ww[ccccccccrqq$ccc++cccc",
"cccc++cccccccc[5wk4y!!!!|]!*'y!|e%yw09jgw!ss*wke*$cccccccc;'$ccc++cccc",
"cccc++ccccccc$:}-|%@*!!|4|!*y*!w|'y*07jk!!*y!!]%'$ccccccccc'$ccc++cccc",
"cccc++ccccc$$:30t}y**!*s5!!!f!!!!y*%0j0]!!!!!!!*;$cccccccccr$ccc++cccc",
"cccc++ccccc$[}&i3::-*!*@*!!!!!!!!!|ijb3!!!!!!!!!$ccccccccccccccc++cccc",
"cccc++ccccc'3_p33[cr**!!!!!!!!!!!!%llj3*!!!!!!!f$ccccccccccccccc++cccc",
"cccc++ccccc[dd[332ccc$$!-w!!!f!!!]ejb7~g!!!!!!!frccccccccccccccc++cccc",
"cccc++cccccr%_$_d[$cccc$r;*rf*!!!!gzz7je|!***f!frccccccccccccccc++cccc",
"cccc++cccccrd3r:_[$ccccccc$[q':--[f@!y}gwf@s]!ff;$cccccccccccccc++cccc",
"cccc++ccccc$53r:55$cccccccccc$$$;rr-**@y!!*%ew!frccccccccccccccc++cccc",
"cccc++cccccc:dr2-:$cccccccccccccccc$r;*!!!!wkw!frccccccccccccccc++cccc",
"cccc++cccccc:3}'%}ccccccccccccccccccc;}55_55-5!f$ccccccccccccccc++cccc",
"cccc++cccccc:m}}}%$cccccccccccccccccc$[5%%dd:q%w[ccccccccccccccc++cccc",
"cccc++ccccccqa'pd[ccccccccccccccccccccc*%%%%:qmzpccccccccccccccc++cccc",
"cccc++cccccc[m_30rccccc$ccccccccccccccc$*5_}y;~0+$cccccccccccccc++cccc",
"cccc++ccccc$r+pdd$ccccccccccc$cccccccccr-%,dr$(&3ccccccccccccccc++cccc",
"cccc++ccccccc$2%}$ccccccc$cccccccccccc$[_g,[$$3&z[$ccccccccccccc++cccc",
"cccc++ccccccc$:_:$cccccccccccccccccccc;5-55$c$}&&pcccccccccccccc++cccc",
"cccc++ccccccc$:':$ccccccccccccccc$cccr}_%q;ccc:(&_cccccccccccccc++cccc",
"cccc++ccccccc[:+rccccccccccccccccccc$:_%_[$cc$r~(p$ccccccccccccc++cccc",
"cccc++ccccccc:3d$ccccccccccc$ccccccc$5g_5$cccc$3z5cccccccccccccc++cccc",
"cccc++ccccccc:3prccccccccccccccccc$$[%,z2ccccc$_&}cccccccccccccc++cccc",
"cccc++ccccccc:3m[cccccccccccccccccc$:_&}$cccc$c5e0[ccccccccccccc++cccc",
"cccc++ccccccc[3+2$ccccccccccccccccc$}0iq$ccccc$500q$cccccccccccc++cccc",
"cccc++ccccccc$;r$ccccc$ccc$cccccccc$pii_$cccccc2m~qc$ccccccccccc++cccc",
"cccc++cccccccccccccccccccccccccccccc[ddq$ccccc$[mi3rc$cccccccccc++cccc",
"cccc++cccccccccccccccccccccc$ccccccc$$$$ccccccc:333:$ccccccccccc++cccc",
"cccc++ccccccccccccccccccccccccccccccccccccccccc$$c$c$ccccccccccc++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++cccccccccccccccccccccccc$ccccccccccccccccccccccccccccccccc++cccc",
"cccc++cccc$ccccccccccccc$ccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++cccccc$ccccccccccccccccccc$ccccccccccccccccccccccccccccccc++cccc",
"cccc++cccc$ccccccccccccccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccccccccccccc++cccc",
"cccc++ccccccccccccccccccccccccccccccccccccccccccccccc$p<+;;++p$c++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccc[.pccp.2cc++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccc;.qccq.;cc++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccc;.'ccq.;cc++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccc;.qccq.;cc++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccc;.qccq.;cc++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccc;.>;cq.<$c++cccc",
"cccc++cccccccccccccccccccccccccccccccccccccccccccccccc$qccc;2ccc++cccc",
"ccccm=+++++++++++++<aaaa<$cccc}+++++++++;ccc;>aaaam+++++++++++++a+cccc",
"cccchm+++++++++++++maa>am$ccc$v+++++++++;ccc[>aa>a<++++++++++++++[cccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc",
"cccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccc"};
