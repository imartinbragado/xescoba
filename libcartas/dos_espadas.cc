/* IMBHeader:  1.0.0
 * Programa:   dos_espadas.cc 
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
const char * dos_espadas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #030304",
"+	c #5184A5",
"@	c #444444",
"#	c #2C6B97",
"$	c #C4C4C4",
"%	c #89A5B9",
"&	c #646464",
"*	c #607483",
"=	c #828486",
"-	c #282828",
";	c #6E423C",
">	c #777574",
",	c #501009",
"'	c #85949C",
")	c #6A95B0",
"!	c #501C19",
"~	c #545454",
"{	c #727275",
"]	c #6A8597",
"^	c #746465",
"/	c #A8A8A8",
"(	c #E4E4E4",
"_	c #5C2826",
":	c #6A5551",
"<	c #42789D",
"[	c #8A7C84",
"}	c #580F0C",
"|	c #949494",
"1	c #968294",
"2	c #7C7C7D",
"3	c #627C8E",
"4	c #BABAB9",
"5	c #6C6C6C",
"6	c #141414",
"7	c #D4D4D4",
"8	c #F4F4F4",
"9	c #3A3A39",
"0	c #633432",
"a	c #377499",
"b	c #A2A2A4",
"c	c #574744",
"d	c #7B6D74",
"e	c #527A97",
"f	c #819DB0",
"g	c #5C5D5C",
"h	c #588CB0",
"i	c #734B4A",
"j	c #638CA4",
"k	c #6C5C59",
"l	c #759CB6",
"m	c #9C9C9C",
"n	c #1E1D1C",
"o	c #DDDDDC",
"p	c #4B4C4D",
"q	c #313131",
"r	c #B0B0B0",
"s	c #8A8A8C",
"t	c #FEFEFC",
"u	c #0D0D0C",
"v	c #CDCDCC",
"w	c #ECECEC",
"x	c #6F7C85",
"y	c #5B1A16",
"z	c #89ABC3",
"tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt",
"tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt",
"tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt",
"tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt",
"tttt8bssssssssssssss7tttttttttbsssssssss7tttttttt7ssssssssssssssb8tttt",
"ttttmgssssssssssssss7tttttttt8bsssssssss7tttttttt7ssssssssssssssgmtttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttsst8m/ttttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttsstg-.btttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttsswvtn~tttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttssttt-rtttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttsstt4gttttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttsst(g8($ttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttss(-9g-tttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttss$22=/tttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttssttttttttttttt$4v8tttttttttttttttttttttttt(~~(tttttttttttttsstttt",
"ttttsstttttttttttos^:^=otttttttttttttttttttttto{5=2ottttttttttttsstttt",
"ttttssttttttttttt2:_}_:5tttttttttttttttttttttw225mv2(tttttttttttsstttt",
"ttttssttttttttttt~0}},0&tttttttttttttttttttttv2~|4tbvtttttttttttsstttt",
"ttttssttttttttttt>_,,}02tttttttttttttttttttttvg&m48bvtttttttttttsstttt",
"ttttssttttttttttt20},};stttttttttttttttttttttvgsm48mvtttttttttttsstttt",
"ttttssttttttttttt|;,,}:mtttttttttttttttttttttv&2br8bvtttttttttttsstttt",
"ttttsstttttttttttbi,,}:rtttttttttttttttttttttvg&rbw/vtttttttttttsstttt",
"ttttsstttttttttttmi},}:rtttttttttttttttttttttv~g/s4mvtttttttttttsstttt",
"ttttssttttttttttt$k,,y^7tttttttttttttttttttttvg5/mr|vtttttttttttsstttt",
"ttttsstttttttttttv^}}ydotttttttttttttttttttttvsvmb$|vtttttttttttsstttt",
"ttttssttttttttttt(d!,_[8tttttttttttttttttttttv|2>sm=vtttttttttttsstttt",
"ttttsstttttt8(vvv$g::k5v77(88ttttttttttttttttv24r5g2vtttttttttttsstttt",
"ttttssttw$ms2x3***p^d~gx]3*==m4otttttttttttttv|4/g~2vtttttttttttsstttt",
"ttttsst$>]'%%lh+++]{d&3aa##<+]3*|wtttttttttttv|4|~q2vtttttttttttsstttt",
"ttttsst==f%%%l)hh]]@9~3eaa#a<+)l{4tttttttttttvmr>~u&vtttttttttttsstttt",
"ttttsstv22]s]s]=={@~@~px22*]]]222otttttttttttv|7{p.~vtttttttttttsstttt",
"ttttsstt8ooooo(ww=55=$|/ww(vvvv(8ttttttttttttvmv>p.~vtttttttttttsstttt",
"ttttsstttttttttt82g@=b/|ttttttttt(8ttttttttttv||=~.~vtttttttttttsstttt",
"ttttsstttttttttt8=|g2=4mttttttttt$=ttttttttttvm(/{n~vtttttttttttsstttt",
"ttttssttttttttttw|v=2r$|ttttt888882ttttttttttv/r&m25vtttttttttttsstttt",
"ttttssttttttttttws$2>|4mtttttr~g~pgttttttttttv/2&4v=vtttttttttttsstttt",
"ttttsstttttttttt8={p=brmtttttvmmb/mttttttttttv/b{48mvtttttttttttsstttt",
"ttttsstttttttttt8>--s$/mttttt({>wttttttttttttv|r=48mvtttttttttttsstttt",
"ttttssttttttttttw>6-sv|mttttt4{=4t8ttttttttttvbos/$|vtttttttttttsstttt",
"ttttssttttttttttw{nq==|mtttttv||2m|ttttttttttvb/g25>vtttttttttttsstttt",
"ttttssttttttttttw{n@=r4bttttt4~&gg>ttttttttttv|ms&@5vtttttttttttsstttt",
"ttttssttttttttttw{nps/~bttttt8(8$((ttttttttttv=sb22>vtttttttttttsstttt",
"ttttssttttttttttw569s|9mttttt7sw{p|ttttttttttvssmr7svtttttttttttsstttt",
"ttttssttttttttttw56qs/9bttttt4vtr$|ttttttttttv>s|4(|vtttttttttttsstttt",
"ttttssttttttttttw{6@|b~mttttt4mw8$|ttttttttttv=4|//2vtttttttttttsstttt",
"ttttssttttttttttw5-&sbgbttttt8>@@~$ttttttttttvm7s2@gvtttttttttttsstttt",
"ttttsstttttttttt(25|s|pbtttttt8oowtttttttttttvs4mg.gvtttttttttttsstttt",
"ttttsstttttttttt(=4vs>&/tttttttttttttttttttttv24m~.~vtttttttttttsstttt",
"ttttssttttttttttwsr42{b/ttttttt($$4ttttttttttv&@>p.~vtttttttttttsstttt",
"ttttsstttttttttt(2&55{m/tttttt8>995ttttttttttv5g=p.~vtttttttttttsstttt",
"ttttsstttttttttt({nq52s/ttttttw=/{5ttttttttttv|r|~.~vtttttttttttsstttt",
"ttttsstttttttttt(56q{>=/tttttt8oo44ttttttttttv22{p.~vtttttttttttsstttt",
"ttttsstttttttttt(5uq=/m/ttttt7s5&&5ttttttttttv2m&~.gvtttttttttttsstttt",
"ttttsstttttttttt(5uq=22/tttttt({vo/ttttttttttv=s~&95vtttttttttttsstttt",
"ttttsstttttttttt(5u9{@prttttttwsw8=ttttttttttvm|5mrsvtttttttttttsstttt",
"ttttsstttttttttt(5u9s/2/ttttttt|p@=ttttttttttv2~|47svtttttttttttsstttt",
"ttttsstttttttttt(&u9|4|rttttttt(bm$ttttttttttvg&mms{vtttttttttttsstttt",
"ttttsstttttttttt(5q&s$rrtttttt82&&5ttttttttttv&sm2qgvtttttttttttsstttt",
"ttttsstttttttttto2sbs4mrtttttt8s4$/ttttttttttv&2b&u~vtttttttttttsstttt",
"ttttsstttttttttt(svv|m>rttttttw&&55ttttttttttvg5r~.~vtttttttttttsstttt",
"ttttssttttttttttos74||=rttttttt42($ttttttttttv~g/g.~vtttttttttttsstttt",
"ttttsstttttttttto2|s||srttttttws$72ttttttttttv~5b&u~vtttttttttttsstttt",
"ttttsstttttttttto{p&sb|4ttttttt|99|ttttttttttv|$|56~vtttttttttttsstttt",
"ttttsstttttttttto2g55=rrtttttt8sm$4ttttttttttv|=2gu~vtttttttttttsstttt",
"ttttssttttttttttosr/=444tttttt8soo>ttttttttttv24rp.~vtttttttttttsstttt",
"ttttsstttttttttto|($srb4tttttttb9@|ttttttttttv|4/p.gvtttttttttttsstttt",
"ttttssttttttttttomwv2mr4ttttt8oor/$ttttttttttv|rmg@>vtttttttttttsstttt",
"ttttsstttttttttt7sv$5{r4ttttto=5&&&ttttttttttvmr{{bmvtttttttttttsstttt",
"ttttsstttttttttto{=r&=r4tttttttwt7/ttttttttttvm7>24/vtttttttttttsstttt",
"ttttsstttttttttto&q>|or4tttttttttw{ttttttttttvmv{{s|vtttttttttttsstttt",
"ttttsstttttttttt7gups/m4tttttov77v5ttttttttttv|s=g@>vtttttttttttsstttt",
"ttttssttttttttttog.@{//4ttttt4qq9qptttt888ttto{o/{~&ott8t888ttttsstttt",
"ttttsstttttttttt7gu@>$b4tttttwo(((7tvs>2==>ss|g5&5&g||2222==24ttsstttt",
"ttttsstttttttttt7&u@>r/4tttttttttttogffj+<a+e+3gnn&3])llzz%ff&otsstttt",
"ttttsstttttttttt72qps/m$ttttttttttt8=*jj+#####a*d>*h++h)lz%'*=8tsstttt",
"ttttsstttttttttt72~~b4m4tttttttttttt8v|{***e]]3p[1p*<eex*{>|v8ttsstttt",
"ttttsstttttttttt72g&/$=$ttttttttttttttttw(vr/rs~::~srrr$(8ttttttsstttt",
"ttttsstttttttttt7=s2==s$ttttttttttttttttttttttr:!!krttttttttttttsstttt",
"ttttsstttttttttt7|4/|4m$ttttttttttttttttttttttsi}}isttttttttttttsstttt",
"ttttsstttttttttt7|4mm|g$tttttttttttttttttttttts0}}0sttttttttttttsstttt",
"ttttssttttttttttv|4|m&~$ttttttttttttttttttttt8>0,}0{8tttttttttttsstttt",
"ttttsstttttttttt7bom/5~$tttttttttttttttttttttwdy}}!dwtttttttttttsstttt",
"ttttssttttttttttvb84b=g$tttttttttttttttttttttwd!,,!dwtttttttttttsstttt",
"ttttssttttttttttvmw4|s&vttttttttttttttttttttt7^y,,yk7tttttttttttsstttt",
"ttttsstttttttttt7m84m>g$tttttttttttttttttttttvk},,,kvtttttttttttsstttt",
"ttttssttttttttttvbt4|~5vttttttttttttttttttttt4c},,,c4tttttttttttsstttt",
"ttttsstttttttttto2o/>{2ottttttttttttttttttttt$@_}}0cvtttttttttttsstttt",
"ttttssttttttttttt$=s5{4ttttttttttttttttttttttw=^ii^sttttttttttttsstttt",
"ttttsstttttttttttt$g~4ttttttttttttttttttttttttt$||vtttttttttttttsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttttttttsstttt",
"ttttsstttttttttttttttttttttttttttttttttttttttttttttttttttttv4$4tsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttv-q6@tsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttr$vg7tsstttt",
"ttttsstttttttttttttttttttttttttttttttttttttttttttttttttttt88>vttsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttts~8ttsstttt",
"ttttsstttttttttttttttttttttttttttttttttttttttttttttttttttt89&totsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttt~n&stsstttt",
"ttttssttttttttttttttttttttttttttttttttttttttttttttttttttttt7sm(tsstttt",
"tttt2psssssssssssss2gggg>8ttttbsssssssss7ttt75gggg2sssssssssssss~stttt",
"tttt42sssssssssssss>gggg>wttt8bsssssssss7tttv&gggg>ssssssssssssss7tttt",
"tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt",
"tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt",
"tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt",
"tttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttttt"};
