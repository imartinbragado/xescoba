/* IMBHeader:  1.0.0
 * Programa:   caballo_bastos.cc 
 * Directorio: xescoba-1.2.1/libcartas 
 * Fecha:      Sun Apr 15 16:44:37 CEST 2001 
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
const char * caballo_bastos_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #040405",
"+	c #8A8A8B",
"@	c #A8C38B",
"#	c #AFA590",
"$	c #D8E2E1",
"%	c #B18840",
"&	c #BDA628",
"*	c #D2CA8F",
"=	c #4B4A46",
"-	c #845657",
";	c #CED2A0",
">	c #9D956B",
",	c #B39655",
"'	c #BEA888",
")	c #9DA5AC",
"!	c #C5B88A",
"~	c #666663",
"{	c #E5CC8F",
"]	c #B8D5EC",
"^	c #C39647",
"/	c #9D864A",
"(	c #A7C9E7",
"_	c #876D4D",
":	c #AE9577",
"<	c #96B7DA",
"[	c #CBCAC7",
"}	c #DDBA97",
"|	c #797863",
"1	c #948A7A",
"2	c #A97A34",
"3	c #8C969D",
"4	c #B39C7F",
"5	c #FDFDFC",
"6	c #2D2D2F",
"7	c #612D29",
"8	c #734741",
"9	c #AEB98C",
"0	c #705950",
"a	c #AC8B73",
"b	c #AD6E95",
"c	c #A7618E",
"d	c #585855",
"e	c #1E1E1C",
"f	c #B1B6B8",
"g	c #967948",
"h	c #6C3B37",
"i	c #E3D7A8",
"j	c #D5AA9A",
"k	c #C1B45C",
"l	c #EAE9E6",
"m	c #B9C9D7",
"n	c #C49B89",
"o	c #B47B93",
"p	c #ACABAA",
"q	c #756858",
"r	c #C28B9D",
"s	c #D3D4D5",
"t	c #BFBBB4",
"u	c #BCC68E",
"v	c #896E6F",
"w	c #8D7B67",
"x	c #9C9993",
"y	c #DEDBD7",
"z	c #88615A",
"5555555555555555555555555555555555555555555555555555555555555555555555",
"5555555555555555555555555555555555555555555555555555555555555555555555",
"5555555555555555555555555555555555555555555555555555555555555555555555",
"5555555555555555555555555555555555555555555555555555555555555555555555",
"5555l)+++++++++s555555555)++++s55555555s++++)555555555s+++++++++)l5555",
"5555)d+++++++++s555555555#++++s55555555s+++1x555555555s+++++++++0)5555",
"5555+1y=p55[6s55555555555555555555555555555555555555555555555555++5555",
"5555+|+.p5sq.s55555555555555555555555555555555555555555555555555++5555",
"5555++s.p55p.s$!pl555555555555555555l555555555555555555555555555++5555",
"5555++s.p55).[&&||t5555555555555555l[#ml555555555555555555555555++5555",
"5555++s.p55p.'&&_||$555555555555555[t[tpl55555555555555555555555++5555",
"5555++s.p55#.,&&g||f55555555555555s[[sstf55555555555555555555555++5555",
"5555+|~.dssd.=~/&||p5555555555555lfx++f[)l5555555555555555555555++5555",
"5555++5555555$,~>>|)55555555555$ml++))+[[t5555555555555555555555++5555",
"5555++55555555&qq,|15555555555lpfx~[s[#+yfl555555555555555555555++5555",
"5555++55555555u/q&|+55555555555tstts[mf)+ps555555555555555555555++5555",
"5555++55555555$k>>||l5555555555t[[[4xpf[d3[555555555555555555555++5555",
"5555++555555555kk&||l5555555555l)+14:t[[psl555555555555555555555++5555",
"5555++555555555;kk||;55555555555t|q/wxsp555555555555555555555555++5555",
"5555++555555555l9k||t55555555555l#>4,atfl55555555555555555555555++5555",
"5555++5555555555;!>|p55555555555l'#w,>x)l55555555555555555555555++5555",
"5555++5555555555lu>|>555555555555!w0_ttxl55555555555555555555555++5555",
"5555++55555555555*9|+555555555555l1/gy5l555555555555555555555555++5555",
"5555++55555555555lu1|s5555555555l[>%a$55555555555555555555555555++5555",
"5555++555555555555!>|+*55555555lywg%_xps555555555555555555555555++5555",
"5555++55555555555l19|w_y55555$fp#,%^/3)3l55555555555555555555555++5555",
"5555++555555555555|#|>%/xsl[#~m(3_%/><<)xy5555555555555555555555++5555",
"5555++555555555555u1>1,%%__/g_(((|g/33+t<my555555555555555555555++5555",
"5555++555555ll5yl5lpw/,^%%^^%_((]())(+(((mf555555555555555555555++5555",
"5555++555555lfs|s55l;w/%%%^%gw(f](((<3(]]mf555555555555555555555++5555",
"5555++555555t3[|p5555tp22%22qwp<((((<3<((]m555555555555555555555++5555",
"5555++555555x)sd=+l5555$!1:!tlm((]((<)(((mt555555555555555555555++5555",
"5555++55555[~3[~=d+s555555l555m(((((((<((]t555555555555555555555++5555",
"5555++5555l+dd~||+|>555555555l$](((](<(]][[555555555555555555555++5555",
"5555++5555)=d=|+pxwa[555555555<(]]]](mm]]]s555555555555555555555++5555",
"5555++55553w~~+'v1::w[y555555$)]]]]])]]$$m$555555555555555555555++5555",
"5555++5555[:4'4taa44:x|t55555f<(]]]<mm]$]p5555555555555555555555++5555",
"5555++5555#:'#1#+4:,4:x~t5555x(]]])(]]$x3l5555555555555555555555++5555",
"5555++5555t:4'xyf/,:n4#~dl55l3((<)<]]m)3t55555555555555555555555++5555",
"5555++5555y+1!tylw:,44#+dm555<m+>_m](3ff[l5555555555555555555555++5555",
"5555++5555yq1}}sl1n'nn'xwql5lf3/^gxp)sft[55555555555555555555555++5555",
"5555++5555pdx!t[lan,4'n'fwx5[xxq%'~)]]t[s55555555555555555555555++5555",
"5555++5555)q''tslx:n:44:#>|lp3p~,g3(]sps$55555555555555555555555++5555",
"5555++5555xwnnxl54:,n,4n'x|p|p(|df]](]+my55555555555555555555555++5555",
"5555++555lp14't55x4'4n'4wzd~|(]((](((<)p[55555555555555555555555++5555",
"5555++555s+##'$55f'n::gv/41=|)](<((<<3s5$555555l5l5l555555555555++5555",
"5555++555y14qxylltaggwaaa^a~~++<<<<(<3[555555555ly[l555555555555++5555",
"5555++555513d~dq)1v/a4%a,:44++q+|+33<)l55555555lt3xpy55555555555++5555",
"5555++5555tq+55l5#4,4n^:r,:*}whz0~=8|]55555555l+|)ymts5555555555++5555",
"5555++5555lxm5555>na,n,n4^!*{'-8z-88qy55555555)|3++xp[$l55555555++5555",
"5555++55555l55l5y1a,an4'nj{**uah8h77wl5555l55y+f+1p[3ttl55555555++5555",
"5555++5555555555[n,n,'4'4}{;9u{1vh781$55l[)$l[+x)ypxt)ftll555555++5555",
"5555++5555555555f}k,nj*@9{{u#r{}!8hzp@;i;!a+3x+q3x)t3xtpl5555555++5555",
"5555++555555555l!{j^k{{u*{{*jc{{{0h8q*{{*}bj++msf)pp)|fts5555555++5555",
"5555++555555555lt{}'{{{*{{{{{j{{{1zh|*{{{i}}swl5l[pxt+wmtl555555++5555",
"5555++555555555s{{k*{{{{n{{{{{{{*p87wj}{{{{{i+y555lfxm|st5555555++5555",
"5555++555555555tiu**{{{}b}{{{{{uu!v8/rr{{{{{uxyl5555[+fx[l555555++5555",
"5555++555555555[}#@{{{{{r#*{{{j9*{qvvn:u{{{}p9[55555lxp+s$555555++5555",
"5555++5555555l5inb9*{{{{u9{{{}cpu{qzzt9*{{{ba@[555555[33$l555555++5555",
"5555++555555555ijj*{{{{{uu*{{}n**{1h89u*{{{n}*[555555lp1fl555555++5555",
"5555++555555555{}{{{{{{{{{*jj{{{{{a80!{*}n{{{{tl555555t+)5555555++5555",
"5555++55555555lt{{{{{{{{{{{rr{{{{{#h7:{{}b{{{{[5555555sxx5555555++5555",
"5555++555555555t{{{{{{{{{{{j:{{{{*!z7%{{}o*{}{[5555555lpx5555555++5555",
"5555++555555555f!nc!*{{{j}{u9*}cnu{-7oj{*@!{oos55555555l)l555555++5555",
"5555++5555555l5p'{r9*{*jb}{uu*{n#u{z8cn{*u*{jr955555555lfl555555++5555",
"5555++55555555yw/1*@*{u'n{{{*{{}@**8-o}{{*{{{uf555555555[l555555++5555",
"5555++555555l[1a0|f**{*@!{{{{{{{*''-q#{{{{{{{*l55555555555555555++5555",
"5555++555555[#'wwxy!!{***{{{{{{{{,08-!{{{{{{{{l55555555555555555++5555",
"5555++555555p:>pax5ls}{{{{{{{{{{{'h8z>{{{{{{{i555555555555555555++5555",
"5555++555555tw:swx555llu}{{{{{{{}b-h-g}{{{{{{iy55555555555555555++5555",
"5555++555555y4#l1x55555ltt*i;{{{{b:v7ba}{u*{{ls55555555555555555++5555",
"5555++555555$wxl:#l5555555sf9t!}i*!*xon{{@u{{ls55555555555555555++5555",
"5555++555555lwx5x>l55555555y[[[pp$*{u9*{*@a{{iy55555555555555555++5555",
"5555++55555554154:l55555555555555l9*uu*{*}cj{ly55555555555555555++5555",
"5555++5555555#xlp#l5555555555555555l!*{{{ijj{il55555555555555555++5555",
"5555++5555555p1t#:l55555555555555555t''44!''{il55555555555555555++5555",
"5555++55555554vpxal55555555555555555lp'4#w)f'*y55555555555555555++5555",
"5555++5555555)ws>>5555555555555555555l'','xt/1s55555555555555555++5555",
"5555++555555lp=p1#55555555555555555555[''jxyqzt55555555555555555++5555",
"5555++5555555sq)ap55555555555555555555l''4tlg/x55555555555555555++5555",
"5555++5555555swx:t5555555555555555555l[44/yl1%x55555555555555555++5555",
"5555++555555555p:y55555555555555555555'#nx551%1l5555555555555555++5555",
"5555++5555555ll#1l5555555555555555555t4!#[l54%ap5555555555555555++5555",
"5555++55555555lpxl555555555555555555y#''p55lt%gt5555555555555555++5555",
"5555++55555555yt)5555555555555555555p4':s555tggt5555555555555555++5555",
"5555++55555555t1x555555555555555555$'nnpl555lvg[5555555555555555++5555",
"5555++55555555xa[555555555555555555['4:s55555aa[5555555555555555++5555",
"5555++555555553xf555555555555555555p::1l5555l:%p5555555555555555++5555",
"5555++55555555#v+555555555555555555',at55555l#%1l555555555555555++5555",
"5555++55555555t11555555555555555555xa|y555555'awl555555555555555++5555",
"5555++55555555txp555555555555555555d0q[555555x00[555555555555555++5555",
"5555++555555555l5555555555555555555awqp555555svw[l55555555555555++5555",
"5555++5555555555l555555555555555555[14y555555#w0xl55555555555555++5555",
"5555++555555555555555555555555555555555555555tx>xyl5555555555555++5555",
"5555++55555555555555555555555555555l5555555555l55l55555555555555++5555",
"5555++5555555555555555555555555555555555555555l5l555555555555555++5555",
"5555++555555555555555555555555555555555555555555555555teex5xeet5++5555",
"5555++5555555555555555555555555555555555555555555555555=6555ed55++5555",
"5555++5555555555555555555555555555555555555555555555555d65556d55++5555",
"5555++5555555555555555555555555555555555555555555555555=65556d55++5555",
"5555++55555l5555555555555555555555555555555555555555555d65556d55++5555",
"5555++5555555555555555555555555555555555555555555555555dep5566t5++5555",
"5555++5555555555555555555555555555555555555555555555555d|l556355++5555",
"5555++5555555555555555555555555555555555555555555555555555555555++5555",
"5555|=++++++++)5555555555)++++s555555555)++++s55555555s+++++++++d+5555",
"5555t|+++++++1x5555555555#++++s555555555#++++s55555555s++++++++++s5555",
"5555555555555555555555555555555555555555555555555555555555555555555555",
"5555555555555555555555555555555555555555555555555555555555555555555555",
"5555555555555555555555555555555555555555555555555555555555555555555555",
"5555555555555555555555555555555555555555555555555555555555555555555555"};
