/* IMBHeader:  1.0.0
 * Programa:   sota_copas.cc 
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
const char * sota_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #030305",
"+	c #8A8A8B",
"@	c #B3C67C",
"#	c #A5AA61",
"$	c #464747",
"%	c #994954",
"&	c #C8A85A",
"*	c #B68B22",
"=	c #EBE8E4",
"-	c #D8C990",
";	c #876B48",
">	c #B0B657",
",	c #DFD297",
"'	c #BC8893",
")	c #696754",
"!	c #99985E",
"~	c #AA6238",
"{	c #CBB683",
"]	c #A7A7A1",
"^	c #E5CC90",
"/	c #88744C",
"(	c #BAA485",
"_	c #530F09",
":	c #5C2C24",
"<	c #9F874A",
"[	c #7A765F",
"}	c #D5C8BA",
"|	c #B8953E",
"1	c #DBBA9C",
"2	c #AF9A7F",
"3	c #BAAB8F",
"4	c #877663",
"5	c #8B5745",
"6	c #333333",
"7	c #764A39",
"8	c #A77D34",
"9	c #6F2A28",
"0	c #585752",
"a	c #A5B484",
"b	c #FEFEFC",
"c	c #735A47",
"d	c #C7C5B8",
"e	c #B17889",
"f	c #561C17",
"g	c #896960",
"h	c #703A34",
"i	c #4F3A29",
"j	c #CB989E",
"k	c #C7AA94",
"l	c #D8D6D1",
"m	c #C6C880",
"n	c #B8B8A4",
"o	c #9D5B43",
"p	c #9E8A7E",
"q	c #A29786",
"r	c #7A6744",
"s	c #9A6239",
"t	c #AB6E7F",
"u	c #B6A761",
"v	c #9A7A72",
"w	c #9A6678",
"x	c #C7B8A4",
"y	c #E5DDD7",
"z	c #544C3E",
"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
"bbbb=]+++++++++++++++++++lbbbbbbbbbbbbbbbbbbl+++++++++++++++++++]=bbbb",
"bbbb]0+++++++++++++++++++lbbbbbbbbbbbbbbbbbbl+++++++++++++++++++)qbbbb",
"bbbb++l$]bb66]bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb+[+.]b+0l6bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++l.]b$0l.nbbbbbbbbbbbbbbbbbbbbbbb=bbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++l.]b60l.qldddxxddl=bbbbbbbbbbbbb=n!#]dlybbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++l.]b60}.+11111}1^}kdbbbbbbbbbbbl##>>>#@>dbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++l.]b+0d.1111k1}}1112ybbbbbbbbbby[z/[)!>m>lbbbbbbbbbbbbbbbb++bbbb",
"bbbb+[).0l=)$[p22jk11k(2qqbbbbbbbbbbbn6<*8<<<mm>=bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbn2p2qqqpqqqqnbbbbbbbbbbb)i/)<*r<u#@dbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbl2qq2q2qqq2qybbbbbbbbbb=6z/z[/0c|*>#=bbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbb2p2qq2'pqq2bbbbbbbbbbbb$r/z02r$<|!!bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbb}pp2qqqp2qdbbbbbbbbbbblzr||/<*&<c)!bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbb22q|q2qq(bbbbbbbbbbbba!/&*/r||8+0)nbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbyqqq2qpqybbbbbbbbbbbb]])|*88|&|p0!qbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbb}q2q2q}bbbbbbbbbbbbbll2/*~7c|<c0#+bbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbqppv]bbbbbbbbbbbbbbbbbdpu{&&|</##=bbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbb27s7(bbbbbbbbbbbbbbbbbbq4|||&*<>>ybbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbb(7s7nbbbbbbbbbbbbbbbbb=q<*<<&&<#!ybbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbb27o5(bbbbbbbbbbbbbbbb]0r8**4||)[)=bbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbb/5o5vbbbbbbbbbbbbbd]q<|8***8r$[<[=bbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbl75s55=bbbbbbbbbb=]2pr<&|***|r0)[!=bbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbvho55hpbbbbbbbbb=+3,1w5v|**|<<!a[[=bbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbb3h5o~o5hdbbbbbbbbn21-^k1{|</[3},-@qybbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbb/7sooos7pbbbbbbb=+-'k^^^-^^-^^,^^^x+lbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbb=lk(2(nlbbbbbbbb]a^ej^^^^^-^^^^,^^-u]=bbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbyqx-xam-je1@^^^^11^^-nnbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbb=y=bbbbbbbbbbbq32rn@^^1'q@^^-1e'^--mnbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbb]<2=bbbbbbbbbdv'{7v--^^^@mm^m@jk^^^-d=bbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbynn2<<3nybbbbbn211p5c-,^,^-^,^-@-u1^^^-3bbbbbbbbbb++bbbb",
"bbbb++bbbbbbbd)r;</**rqldq]qp'jw2ygx,^^^^-^^^-xv(^^^^]=bbbbbbbbb++bbbb",
"bbbb++bbbbbb=4rr8*****2,xnkd11q4b=r-^^^^-'j^^m3c2^^-,]bbbbbbbbbb++bbbb",
"bbbb++bbbbbbb]c0s*****!^^'k^^x+lbbp^^^^^^je-^d]03^-m3ybbbbbbbbbb++bbbb",
"bbbb++bbbbbbbb!/<|||*c2^1'j^^+}bbb41^^^^^,a--])z3^^nnbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbb=2+q2'(}(]bbbbpjt1^^^--^kzr8<1{+=bbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbydp[4]bbbbb2k'k^^^^^->;**83qlbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbb=p-^^^^^^^#v8|**!nbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbb=43^^--m--rr8<*8+bbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbb=r]#(2a@1{]//;8x=bbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbb=5rc5gcr[[4);;2bbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbb=p_f__ff:5cgc:)bbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbblh_____________pbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbv______________h=bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbyf_______________(bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb3________________7=bbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbq________________fnbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbw_________________4bbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbb}f_________________fbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbb(___________________2bbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbb2___________________gbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbb3___________________g=bbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbyf______________ff__gbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbb=h__________________5=bbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbn___________________4=bbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbb(___________________dbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbblr_______f_________zbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbl7hf__f%27f______:xbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb}%%%%%%db=oh99f99kbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbk%%%%%e=bbx%%%%%%=bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbl%%%%%e=bbb%%%%%%=bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=%%%%%e=bbbt%%%%%=bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=%%%%%o=bbbt%%%%%=bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=%%%%%oybbbk%%%%tbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=%%%%%oybbbyo%%%e=bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=%%%%%wybbbyw%%5vbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=%%%%okbbbb=vg;;v=bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=4;4ggdbbbb=+/[[[=bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=[/;[[lbbbb=4;;;;lbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=/[;[;ybbbb=+/[[;dbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=[;/;[=bbbby+;[;[dbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=4[[;[bbbbb=<;[;[dbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=[;;[vbbbbb=4/;[;lbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=4/r[!bbbbb=4[;[/}bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=[//4dbbbbby<4pqvnbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbby22(2lbbbb=n2(33u(lbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=(3((lbbbb=3(33((]]bbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbb=k3((lbbbbbl(((((-bbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbblu((k=bbbbby&((((lbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbyk((k{=bbbbby((&((1=bbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbb={2(((xbbbbbbykj(k(3{xl=bbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbb={3((2(=bbbbbby3&((((((({}=bbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbby{2(&k(lbbbbbbb=(2&2(((2(2(3ybbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbl(((((xybbbbbbbb=x((k(((23(((3ybbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbb=k((33}bbbbbbbbbbb}{3{x}-(3u(kk3=bbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbby(((3lbbbbbbbbbbbbbbbbbbby}}3d-x=bbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbdx,ybbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb+dbl+++=++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb0]$nbq.db++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbby.l0)b].lb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb].l06b].lb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb].lz6b].lb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb=.d0)b].lb++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb[+6db].[y++bbbb",
"bbbb++bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb=+nbbldbb++bbbb",
"bbbb[z++++++++++++++++++]bbbbbbbbbbbbbbbbbbbl+++++++++++++++++++0+bbbb",
"bbbbn[++++++++++++++++++qbbbbbbbbbbbbbbbbbbbl++++++++++++++++++++lbbbb",
"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb",
"bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"};
