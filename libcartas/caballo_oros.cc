/* IMBHeader:  1.0.0
 * Programa:   caballo_oros.cc 
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
const char * caballo_oros_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #0E0E0C",
"+	c #8F9304",
"@	c #BDC789",
"#	c #A8AD09",
"$	c #EAE6BC",
"%	c #C7B07F",
"&	c #B58F4C",
"*	c #D0CA90",
"=	c #575553",
"-	c #986470",
";	c #DCDBA4",
">	c #97AEC3",
",	c #C0B09B",
"'	c #8A8A8C",
")	c #B89B70",
"!	c #C2BDB2",
"~	c #767371",
"{	c #92A0AF",
"]	c #B2AE98",
"^	c #E3CB8E",
"/	c #9B7B4D",
"(	c #B0BE8C",
"_	c #C99F90",
":	c #DBBF92",
"<	c #B38531",
"[	c #A9CAE9",
"}	c #D3D8D8",
"|	c #A0917C",
"1	c #B4A088",
"2	c #82817E",
"3	c #CDCCCA",
"4	c #B6CBDE",
"5	c #97826D",
"6	c #414141",
"7	c #5E2A24",
"8	c #6A3834",
"9	c #7C5651",
"0	c #9EA305",
"a	c #FEFEFC",
"b	c #272729",
"c	c #65625C",
"d	c #7E6454",
"e	c #BCBF61",
"f	c #B39375",
"g	c #B57B98",
"h	c #714742",
"i	c #99BEE4",
"j	c #A39C8D",
"k	c #D9B197",
"l	c #B3B72A",
"m	c #A48D56",
"n	c #DFDED9",
"o	c #C49394",
"p	c #ACBFD2",
"q	c #B9D4EA",
"r	c #907240",
"s	c #BED6B4",
"t	c #EEEEED",
"u	c #9F844E",
"v	c #847461",
"w	c #D2BC82",
"x	c #AEB0B2",
"y	c #BB8499",
"z	c #A0A1A2",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
"aaaatz'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''}aaaa",
"aaaazc''''''''''''''''''''''''''''''''''''''''''''''''''''''''''='aaaa",
"aaaa''atzaaat]aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''!bbaaz.=aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''a=baaab=aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''a=baaab=aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''a=baaab=aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''a=baaab=aaaaa;;;aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''a6baaab6aa;l00+00l;aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''!22zaz22je00###000#etaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaa$#0###000#0##ltaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaae00##0+#0#####eaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaa;0####00#0######;aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaal0####0##0#####0laaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaa0#####0##0####00#taaaaaatt$aataaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaa}0####00##000###0#$aaaaaan!xx}aaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaa*###0#+l###0####0#;aaaaan4}33x}aaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaa;00###0####+######$aaaat!z'z3!xtaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaa####0#0###+######tat3x3j'xz|3!}taaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaa###0##0##0#l###l#aat!3z'3}3zz4!taaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaa;#####0+++l#0##0;aaax3!3!zxxj~ztaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaal###00####0###laaaanxzj||333'xtaaaaaaaaataaaaaaaaaa''aaaa",
"aaaa''aaaaaaatl0###########taaaaax~vm5z3!ttaaaaaaataaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaatl#######l0ltaaaaaat1mjf|!!taaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaaa;l#0##0#;aaaaaaaat]|vuj'xtaaaataaaaaaaataaaaaaaa''aaaa",
"aaaa''aaaaaaaaaaaa**@@;aaaaaaaaata}5d/nn3tataaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaaaaaaatnntaaaaaaaaat}muutaaaaaaaataaaataaaaataaaaa''aaaa",
"aaaa''aaaaaaaaaaaaa31zv!tataatatt}j/&~xxntataaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaaaatt|dvd/!taaat}!x]m<&m{>xtataaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaaaaat(rdr&um1!]|~[x{v/u|{{{x}ataaaataaaaaataaaaaaa''aaaa",
"aaaa''aaaaaatttattatjru)&&/<&uv[[[>5j>'>[4pnaaaaaaaaaaaaaaataaaa''aaaa",
"aaaa''aaaaaaat}nz3att*1m<<<&</vpiq[ii[{i[44!ataaaaataaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaan|42|tatat!u<<<<r2x>[q[[>'[[q43aaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaatx|326~!taaat*],!3t3i[[[[[>i[[p3aaaaaaaaaataaaaaaaaa''aaaa",
"aaaa''aaaaaan~~{2=~~ztaaaataaaa}i[[[[[ii[qpnaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaat~c=='{j2m}taaaaatatqq[[qqq>[qqpttaaaaaaaaaataaaaaaaa''aaaa",
"aaaa''aaaaa}~cccj|v|||3ttaaaaan>[qqqq>}q}qpaaaaaaataaaaaaaaaaaaa''aaaa",
"aaaa''aaaaan||]1115f)f|2xtaaaa!i[qqq>4qq}p!ataaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaa}|_]'1x5)fffj~ztaat>p[q[i[qq}{xtaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaatjf,1}}|ff1)12=3aatz[p>|pq4>zx3aaaaaaaaaaaaataaaaaaaa''aaaa",
"aaaa''aaaaatzd,k3nj)))_1j~'tatp{5mr>p>px!}tataaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaa}22,!!t1f))1)1]~xt3z|/m<2z!}x3}aaaaaaaaataaaaaaaaaaaa''aaaa",
"aaaa''aaaaa3~|_!!txff)f)f1|2nx'{vmu{[qqznnaaaaaaaaaaaaaataaaaaaa''aaaa",
"aaaa''aaaaa32f)1na!|)f)1)1'~|2>['2pq[4p{!naaaaaaatatataaaaaaaaaa''aaaa",
"aaaa''aaaaa!21,,ta!j_1o)|//~=2>q[i[[ii>33}aaaaataaataaaaaaaaaaaa''aaaa",
"aaaa''aaaat]'||ntt31mu55/ffmc~'>iiiii>{}atataaaattnnataaataaaaaa''aaaa",
"aaaa''aaaaa,jc~2|xz/5uff&&ff|22~'2'{>{>taaaaaaaanxxx}tataaaaaaaa''aaaa",
"aaaa''aaaaa}'~3}}t!)fffff&))*%5hdcc=c~}aaaataat}'2z!x!tatataaaaa''aaaa",
"aaaa''aaaaat}!tatt1fff)))))w*^,dh9hhh~tataaaatnz''|zzp3naaaaaaaa''aaaa",
"aaaa''aaaaaaataaan1f)f)f1_%^*@*_99878vtaatnntaxjz{!z!jp!tttaaaaa''aaaa",
"aaaa''aaaaaaaaaaa}]_))_w(]:^@]_^wfh8-zs$$3,|z3''2zxxzzxx}taaaaaa''aaaa",
"aaaa''aaaaaataaat3ww)_:^@@^^*_g:^kdhh'@^^^,g,2{x!zzzz|'!!ttaaaaa''aaaa",
"aaaa''aaaaaaaatat!^:%:^^^^^^^^k:^^|985^^^^^k^]zttt3xzx2x!naaaaaa''aaaa",
"aaaa''aaaaaaaaaan^^ww^^^^o:^^^^^^*,=7mo:^^^^^3jttaanxxz'3}taaaaa''aaaa",
"aaaa''aaaaaaaaaa3^@(*^^^^y_*^^^w(*%v9fy1*^^^:(z}aaaatxz'!}taaaaa''aaaa",
"aaaa''aaaaaaaaaanky]*^^^^w(^^^:y]@:vdv!]*^^:y1(ntaaaatzzx}aaaaaa''aaaa",
"aaaa''aaaaaaaata$k_w*^^^^e@*^^k_:*^589!@*^^k_w!naaaaat3z|}taaaaa''aaaa",
"aaaa''aaaaaaaaat;^^^^^^^^^^^kk^^^^^mhd,^^kk^^^w3aaaaaanz'}aaaaaa''aaaa",
"aaaa''aaaaaaaaaa!^^^^^^^^^^^oo:^^^^1h8)^^_y^^^:naaaaaat!|3aaaaaa''aaaa",
"aaaa''aaaaaaaata3::_k^^^^:^^k]*:_k*w98)^^:z::okntaaaaaanx!aaaaaa''aaaa",
"aaaa''aaaaaaaaat3|ky1@^^:yk^@(*:yj@:98-k:@@*^yf3aaaaaaaa}!taaaaa''aaaa",
"aaaa''aaaaaaaaatj||w(@^*,y:^^^^^:@@:99g:^^*^^^x3taaaaaatt3aaaaaa''aaaa",
"aaaa''aaaaaaat3jmdvx**^*(@^^^^^^^^%u99w^^^^^^^;taaaataaaataaaaaa''aaaa",
"aaaa''aaaaaaanz1|v|n3w*^*^^^^^^^^^1h99*^^^^^^^;ttaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaa}5|!||tttn;^^^^^^^^^:y9h9u^^^^^^^$taaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaatj|n|'taaaan!!*;^^^^:gg9hg_^^*^^^ntaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaatj|},|naaaaatt}!@3*:*!(%|5_^*(@^^nnaaaaataaaaaaaaaa''aaaa",
"aaaa''aaaaaaatzj}!5}taaaaaaat!33!3;w^((:^@]o^^nttaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaa!133|}taaaaaaaaaaaaat3;**^^^kgk^;taaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaa!j!3f3aaaaaaaaaataaaaat!%w%%*k:^ntaaaaaataaaaaaaaa''aaaa",
"aaaa''aaaaaaaa!5|x|!aaaaaaaaaaaaaaaatn]1_j|xjw3$aaataaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaa!~x1|naaaaaaaaaaaaaaaaat},1fjx]u|}aaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaa}cj|jtaaaaaaaaaaaaaaaaaat*%_,x!rv!aaaaaaaataaaaaaa''aaaa",
"aaaa''aaaaaaaat~||1taaaaaaaaaaaaaaaaaaa})f|n}v/!taaaataaaaaaaaaa''aaaa",
"aaaa''aaaaaaatt}!|!aaaaaaaaaaaaaaaaaaan]1)1tnuu,taaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaat!j!taaaaaaaaaaaaaaaaaa31,13anfu5naaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaat,,3aaaaaaaaaaaaaaaaat}1),!taa1/vnaaaaaaaaaataaaa''aaaa",
"aaaa''aaaaaaaaanxz}taaaaaaaaaaaaaaaat1111taat]udttaaaataaaaaaaaa''aaaa",
"aaaa''aaaaaaaaa}5|aaaaaaaaaaaaaaaaaa}1_13taaa!f/taaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaa!2xtaaaaaaaaaaaaaaaat!1f|taaaan55ntaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaa}~|}aaaaaaaaaaaaaaaat,f|3aaaattyu,aaaataaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaan2|}aaaaaaaaaaaaaaaat|5vnaaaaatj/'ttaaaataaaaaaaa''aaaa",
"aaaa''aaaaaaaaan]!taaaaaaaaaaaaaaaatvdd}aaaaa$jd5nataaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaaattataaaaaaaaaaaaaaatz5'3taaaatzvv3taaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaaaataaaaaaaaaaaaaaaaaat3naaaaaat'vvjttaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaataaaaaaaaatttttaaaataaaaaaaa''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaatataaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaataaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaaaataaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaataaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaataaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaataaaaaaaa''aaaa",
"aaaa''aaaatatataaaataaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaataaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaax..jaj.bxa''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa=baaab=aa''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa=baaab=aa''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa=baaab=aa''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa=baaab=aa''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa=bxaab6!a''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa=~taa62aa''aaaa",
"aaaa''aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa''aaaa",
"aaaa26''''''''''''''''''''''''''''''''''''''''''''''''''''''''''='aaaa",
"aaaax2'''''''''''''''''''''''''''''''''''''''''''''''''''''''''''3aaaa",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",
"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
