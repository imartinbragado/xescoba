/* IMBHeader:  1.0.0
 * Programa:   tres_espadas.cc 
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
const char * tres_espadas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #030304",
"+	c #5186AA",
"@	c #434547",
"#	c #276996",
"$	c #C4C4C4",
"%	c #8A8A8C",
"&	c #656465",
"*	c #769DB8",
"=	c #64747D",
"-	c #232324",
";	c #718595",
">	c #67423C",
",	c #4F0F09",
"'	c #7F7372",
")	c #A8A8A7",
"!	c #5D5C5C",
"~	c #766564",
"{	c #6C94AC",
"]	c #E3E4E3",
"^	c #531A17",
"/	c #592424",
"(	c #705451",
"_	c #6190B1",
":	c #5A626C",
"<	c #848484",
"[	c #6B6C6D",
"}	c #737779",
"|	c #580F0D",
"1	c #545555",
"2	c #8A9AA9",
"3	c #84A7C2",
"4	c #62859C",
"5	c #D4D4D4",
"6	c #F4F4F4",
"7	c #477B9D",
"8	c #343435",
"9	c #181818",
"0	c #693937",
"a	c #BABAB9",
"b	c #39749D",
"c	c #514344",
"d	c #927A94",
"e	c #587589",
"f	c #82929E",
"g	c #9E9E9E",
"h	c #6C4D48",
"i	c #B0B0B0",
"j	c #7A6C70",
"k	c #CECECC",
"l	c #ECECEC",
"m	c #3A6E94",
"n	c #2B2B2B",
"o	c #602C28",
"p	c #DDDDDC",
"q	c #829DB0",
"r	c #647C8A",
"s	c #7D7C7C",
"t	c #3C3C3D",
"u	c #949494",
"v	c #6F5C57",
"w	c #4D4C4C",
"x	c #5E1C19",
"y	c #0B0B0C",
"z	c #FEFEFC",
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
"zzzz5%%%%%%%%%%%%%%s!!!![kzzz5%%%%%%%%%gzzzz6}!!!!s%%%%%%%%%%%%%sazzzz",
"zzzz%1%%%%%%%%%%%%%}!!!!&5zzz5%%%%%%%%%)6zzzl}!!!!}%%%%%%%%%%%%%wszzzz",
"zzzz%%zzk<azzzzzzzz]]zzzzzzzzzzzzzzzzzzzzzzzzzzzzl]lzzzzzzzzzzzz%%zzzz",
"zzzz%%z51&9lzzzzzps~~}5zzzzzzzzzzzzzzzzzzzzzzzz6i~~[g6zzzzzzzzzz%%zzzz",
"zzzz%%zl6zy]zzzz]1vxx(w5zzzzzzzzzzzzzzzzzzzzzzzu!>|0v}zzzzzzzzzz%%zzzz",
"zzzz%%zz5w!zzzzzac^||^cazzzzzzzzzzzzzzzzzzzzzzz1>||,>1zzzzzzzzzz%%zzzz",
"zzzz%%zz]}.)zzzz$h,,||(kzzzzzzzzzzzzzzzzzzzzzzz[o|,|oszzzzzzzzzz%%zzzz",
"zzzz%%zzzz@<zzzzk!|,|^vkzzzzzzzzzzzzzzzzzzzzzzz<o|,|0szzzzzzzzzz%%zzzz",
"zzzz%%z<}5!]zzzz]j^,,x~]zzzzzzzzzzzzzzzzzzzzzzzuh,,|huzzzzzzzzzz%%zzzz",
"zzzz%%z6%g6zzzzzlj/,,^'lzzzzzzzzzzzzzzzzzzzzzzz)h,,|h)zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzl[/||/[lzzzzzzzzzzzzzzzzzzzzzzzg(,||()zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzz<o,,0<zzzzzzzzzzzzzzzzzzzzzzzzkv|,|v$zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzz%0||0%zzzzzzzzzzzzzzzzzzzzzzzz5~|^|~5zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzg(,|(gzzzzzzzzzzzzzzzzzzzzzzzzls,|^slzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzz666a~>>~i666zzzzzzzzzzzzzzzzzz666l[(hvjl66zzzzzzzz%%zzzz",
"zzzz%%zzz]$i<==[=!tj~t[rsrsug$]zzzzzzzz65$%<=[=[@!~1@}r}}%%a56zz%%zzzz",
"zzzz%%z$<=;22*_++4:dj:477b7r4r[;kzzzz6g=}f2q{+++;jjv477bb444[=g6%%zzzz",
"zzzz%%][fq33*{+++{fww;7####b7+{f&]zzzu}q333*_++_q1!1;7####b7_*s%%%zzzz",
"zzzz%%l}}f22qfrr=18888:==ee4;;;=}6zzza&;ffqf;rr:t8n8@=e=e44;;;[a%%zzzz",
"zzzz%%z6kiiiia5]5&}s%$[5p]$iaa$pzzzzzz]aaaii$pp)&<sa%gpp5aaaa5lz%%zzzz",
"zzzz%%zzzzzzzzzz5[t!ga<kzzzzzzzzzzzzzzzzzzzzzzzs:tsaaszzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk<[&[ggkzzzzzzzzzzzzzzzzzzzzzzz<%w}[$%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkgiss5ukzzzzzzzzzzzzzzzzzzzzzzz%5<sgk<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk)a}[$gkzzzzzzzzza1!$zzzzzzzzzz<p<s<5%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk%}&<)ukzzzzzzzz$}[%<$zzzzzzzzz<g1s%a%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk&91)aukzzzzzzzp}'})pspzzzzzzzz<t-<$a<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.wa$<kzzzzzzzk}wgazgkzzzzzzzz<-ys]g<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.1u%<kzzzzzzzk![ga6gkzzzzzzzzs-9sg%%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1y&%igkzzzzzzzk&<ga6gkzzzzzzzz<-8suk%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk19[gg[kzzzzzzzk&})i6gkzzzzzzzz<-t<$[<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.&g11kzzzzzzzk!&)g])kzzzzzzzz<--sa-<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.1i&!kzzzzzzzk!1g%ig$zzzzzzzz<-9<$-<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.!i[!kzzzzzzzk&<)gau$zzzzzzzz<--<k8<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk19[g%[kzzzzzzz5u$%gag$zzzzzzzz<-@sa!<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk&!%g}!kzzzzzzz5%%<s<<$zzzzzzzz<w<sa@<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzksaigw&kzzzzzzz5saa[1s$zzzzzzzz<g5<g@<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk%k)<}ukzzzzzzz5ua)&ws$zzzzzzzz<a5<[g%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkss<!gukzzzzzzz5ui%1-[$zzzzzzzz<s<s1$<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk&9w!%}kzzzzzzz5uas!y1$zzzzzzzz<8-}!%<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.1&%skzzzzzzz5u5s1.wazzzzzzzz<-9}&u<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.w%)%kzzzzzzz5ga}1.wazzzzzzzz<-9sg)<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.1u%skzzzzzzz5%)u!ywazzzzzzzzs99sg%%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.w[n!kzzzzzzzpgp)st1azzzzzzzz<-ysw8<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.1uu}kzzzzzzz5g)!gg[azzzzzzzz<-9sgs<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.1gaskzzzzzzz5gu!)]uazzzzzzzz<99<$g<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk19&%$gkzzzzzzzpgas)6iazzzzzzzz<nts)k%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk[suuk%kzzzzzzzp%a%)liazzzzzzzz<[u<aa%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk%kigg}kzzzzzzzpg5%uiuazzzzzzzz<i]<i<<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzku]ig<skzzzzzzzpg)&}![azzzzzzzz<$]<)s<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk<)gg<%kzzzzzzzp%gu[w&izzzzzzzz<ga<i%%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk[1}gg<kzzzzzzzp%%)<u<azzzzzzzz<!!s)g<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk[@[[ugkzzzzzzzp<<ggpgizzzzzzzz<11s&a%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk<g%}k)kzzzzzzzps%ggpgizzzzzzzz<ugs%]%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkg]a%aukzzzzzzz]%a)ugsizzzzzzzz%5l<)$<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkg6a<agkzzzzzzzpukg}twizzzzzzzz<p6<%5%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkula&%)kzzzzzzz]<i)&ytizzzzzzzz%$6sw5<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk'gi1<)kzzzzzzz]su)&ytizzzzzzzz<s5<t5%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk!w%%]gkzzzzzzzp}t&&yt)zzzzzzzz<tssi]<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1y!gaukzzzzzzz]s}<&yt)zzzzzzzz<-nsaa%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.w}ggkzzzzzzz]%)u&yt)zzzzzzzz<99s[$<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk1.ws5ukzzzzzzz]<%[&yt)zzzzzzzz<-9sg5<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk!.1[$gkzzzzzzz]su!&9@)zzzzzzzz<-ys<5%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk[-w<)ukzzzzzzzl%)1}![)zzzzzzzz<19s%a%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzksw!)aukzzzzzzz]%g[%$g)zzzzzzzz<}t<$a<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk}1&i$<kzzzzzzzls1ug5u)zzzzzzzz<}@spg<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzks'}u%<kzzzzzzzl[1)<<&gzzzzzzzz<s}<g%%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk%ag<igkzzzzzzzl}[isttgzzzzzzzz%ii<uk<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkgag)g[kzzzzzzzl'!i}-tgzzzzzzzz<a$<$[<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkui%g11kzzzzzzzl}@a[y8gzzzzzzzz<ag<i-<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk)pg)[!kzzzzzzz]}8i}98gzzzzzzzz%pa<kn<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk)li)[!kzzzzzzzl}&isn8gzzzzzzzz<l]<kt<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkg6ag%[kzzzzzzzl%$g}n8gzzzzzzzz%5l<a!<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkg6ag}!kzzzzzzzl%u<[9ngzzzzzzzz%p6<i@<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzkgzag1&kzzzzzzzl<gk}y8uzzzzzzzz<l6<g@<zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzk<lis[s5zzzzzzzl%aa}9tgzzzzzzzzsk]<[<%zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzz)u%[[)zzzzzzzz6%iu'w<uzzzzzzzzps)s&}]zzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzz)!!)6zzzzzzzz6%ks}%$gzzzzzzzzzp}1'pzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzziizzzzzzzzzz6%5usu$uzzzzzzzzzzpupzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzz6%$s}&guzzzzzzzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzz6<ig}t&uzzzzzzzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzlpppplll%)as[&)ll5kkkkklzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzz5%s<;s;r<s}@1@1@};<;%ff%;skzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzz<;q_+7bbbb+=@t1;4+__*333f}gzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzz$}r447m#mbbr&'&{+++_*qf;ru]zzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzl$g<;}errr1!jv1ee==}<)apzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzll5kk$!vhv&k55p66zzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzz]'/^^slzzzzzzzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzz5~||^jpzzzzzzzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzzkv|,|~5zzzzzzzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzz)(|,|v)zzzzzzzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzzgh|,,h)zzzzzzzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzzgh,,,hgzzzzzzzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzzs0|,,0szzzzzzzzzzzzzzzzzzzz5%ww6%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzz<o|,|o}zzzzzzzzzzzzzzzzzzzzn5z)6%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzz!0,,,01zzzzzzzzzzzzzzzzzzzz.<zzz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzz[(/|/hszzzzzzzzzzzzzzzzzzzzs.1zz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzz5s~(~upzzzzzzzzzzzzzzzzzzzza!6zz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzzz6$a$6zzzzzzzzzzzzzzzzzzzzz!&zuz%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz$y-)z%%zzzz",
"zzzz%%zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz%%zzzz",
"zzzzg&%%%%%%%%%%%%%%5zzzzzzzz5%%%%%%%%%gzzzzzzzzz5%%%%%%%%%%%%%%&gzzzz",
"zzzz6g%%%%%%%%%%%%%%5zzzzzzzz5%%%%%%%%%)6zzzzzzzz5%%%%%%%%%%%%%%g6zzzz",
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz",
"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
