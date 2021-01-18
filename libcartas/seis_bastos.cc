/* IMBHeader:  1.0.0
 * Programa:   seis_bastos.cc 
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
const char * seis_bastos_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #050505",
"+	c #888550",
"@	c #C5C4B8",
"#	c #BAA31A",
"$	c #A5A48D",
"%	c #474437",
"&	c #A28F34",
"*	c #6D654B",
"=	c #B8B484",
"-	c #77754F",
";	c #C0B45B",
">	c #989462",
",	c #8B733F",
"'	c #AFA45A",
")	c #E5E5E2",
"!	c #B7B6A9",
"~	c #848573",
"{	c #7A7562",
"]	c #A08F61",
"^	c #B7A44A",
"/	c #D5D4CF",
"(	c #8D8564",
"_	c #B2AC7B",
":	c #C1BC7F",
"<	c #797A50",
"[	c #BCAC47",
"}	c #AC9931",
"|	c #C0BDAF",
"1	c #CECCC5",
"2	c #BBAD59",
"3	c #79632C",
"4	c #8B8B8A",
"5	c #B0ADA1",
"6	c #372F29",
"7	c #5C5444",
"8	c #121214",
"9	c #F4F4F3",
"0	c #A29A64",
"a	c #443B32",
"b	c #524234",
"c	c #968424",
"d	c #625244",
"e	c #B59D24",
"f	c #8A7C3A",
"g	c #959686",
"h	c #AAABA3",
"i	c #9F9E94",
"j	c #716D4A",
"k	c #988B44",
"l	c #DDDCD8",
"m	c #7B6D47",
"n	c #221E1C",
"o	c #EDECEB",
"p	c #7B7C62",
"q	c #4E4E4C",
"r	c #8C7C5B",
"s	c #5E5E5C",
"t	c #574E3E",
"u	c #A8994E",
"v	c #9A9B8C",
"w	c #FEFEFC",
"x	c #675A47",
"y	c #AC9B64",
"z	c #BEA41A",
"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww",
"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww",
"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww",
"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww",
"wwww9i444444444/wwwwwwwww$4444/wwwwwwww/4444$wwwwwwwww/444444444i9wwww",
"wwwwis444j%4444/wwwwwwww9i4444/wwwwwwww/4444i9wwwwwwww/444444444siwwww",
"wwww44wwps9wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww44wwww",
"wwww44w~6wwwwwwwwwwwwwwwwwwwwwwww9@9wwwwwwwwwwww/_^+p4@owwwwwwww44wwww",
"wwww44onas@w/_^+p4@owwwwwwwwwwwww)j1wwwwwwwwwww1^e#cj-p5owwwwwww44wwww",
"wwww44/.hj6/eeec--{5owwwwwwwwwwww1,5wwwwwwwwwwl[e##cj-{p!wwwwwww44wwww",
"wwww44)8hp.'#z#cj<-p!wwwwwwwwww9953iowwwwwwwwo=ezezf----~lwwwwww44wwww",
"wwww~4w%vjt#e##fj-<{~lwwwwwwwwwwo]34)wwwwwwww/czz##m--<{p!wwwwww44wwww",
"wwww44w94{czz#e,----p!wwwwwwwwwwl(m~lwwwwwww9:ezzeem<-<-{$9wwwww44wwww",
"wwww~4ww9=ezzzej-<<<{h9wwwwwwwww1v-p/wwwwwwwo'zzzz&j---{ph9wwwww44wwww",
"wwww44wwo_##z#}m---{{$9wwwwwwww9!'-p1wwwwwwwo^},&zzf-<--p!wwwwww44wwww",
"wwww44ww)^em&zefj<<<p!wwwwwwwww)=gj~1wwwwwww)^}at^z}-j<-{@wwwwww44wwww",
"wwww44ww)^uateze--j-p@wwwwwwwwwl=+-<|wwwwwww)'erx+e[}j<-~/wwwwww44wwww",
"wwww44ww)^erx('z}j-pp/wwwwwwww9@=+<p59wwwwww)'[(xx>[&j-{~lwwwwww44wwww",
"wwww44wwo'[(xd0[&--{~lwwwwwwwwo!:g-<h9wwwwwwo'[ymak[k--<4)wwwwww44wwww",
"wwww44wwo'[y,ak[k--<4)wwwwwwww)=:v-<vowwwwwwo_['t6]'>-<-4)wwwwww44wwww",
"wwww44ww9'['q6>y>--<4owwwwwwww/!:+<<g9wwwwwwo_[r%6+ukj<<vwwwwwww44wwww",
"wwww44wwo=[ra6+uk-<-v9wwwwwww9|::<<<gowwwwww9=['3b0[u--{$wwwwwww44wwww",
"wwww44ww9_;'3b>[}j<-$wwwwwwwwo!::~<<4owwwwwww|[['mr[kj<<hwwwwwww44wwww",
"wwww44www|[2^mr2kj-p5wwwwwwww)=::+<<4)wwwwwww@2;2]xy+<<{hwwwwwww44wwww",
"wwww44www@[;2ux'p<<<hwwwwwwww1=@=p<<+lwwwwwww/2;;[y>4<<<@wwwwwww44wwww",
"wwww44www/2;;20>><-p|wwwwwww9|::0<<<~lwwwwwww)_;;;;0+-<p1wwwwwww44wwww",
"wwww44wwwl_;;;;0~<-p1wwwwwwwo!::$-<<plwwwwwww)_;;;;+<-<p/wwwwwww44wwww",
"wwww44www)=;;;2+-<<~/wwwwwww)=::_<<<p1wwwwwwwo:;;;;+-<<~/wwwwwww44wwww",
"wwww44wwwo=;;;;+-<<p/wwwwwww1=::2<<<p@wwwwwww9@;;;;+-<<~lwwwwwww44wwww",
"wwww44wwww@;:;;+-<<~lwwwwwww@=;:_<<<<|9wwwwwww1_:::<<<<4lwwwwwww44wwww",
"wwww44wwww1_;:;p<<<4)wwwwww9==;:0-<<<!wwwwwwwwl_;;;+-<<4)wwwwwww44wwww",
"wwww44wwwwl=:;=+-<<4)wwwwww)=;:;'j<<<!9wwwwwwwo=:::>-<<g)wwwwwww44wwww",
"wwww44wwwwo=::;>-<<g)wwwwwwl_;;;'<-<-h9wwwwwww9|=::>j<<gowwwwwww44wwww",
"wwww44wwww9|;::>j<<vowwwwww1=;;;0-<<<i9wwwwwwww1=::+<<<howwwwwww44wwww",
"wwww44wwwww1=::+<<<$owwwwww@2;;;'<<<<i9wwwwwwww/=:=<<<-h9wwwwwww44wwww",
"wwww44wwwww/=::<<<-h9wwwww9:2;;;'i<<<g9wwwwwwww)=::+<<<$wwwwwwww44wwww",
"wwww44wwwww)!::~<<<$wwwwwwo=;[2>p0<<<~owwwwwwww9|:@$-<<5wwwwwwww44wwww",
"wwww44wwwww9|::_j<<5wwwwwwo'[;^sk'j<-p)wwwwwwwww@::_j<p!wwwwwwww44wwww",
"wwww44wwwwww@::_-<p!wwwwwwl_['3{[[-<<~)wwwwwwwww/=:_-<p|wwwwwwww44wwww",
"wwww44wwwwww/=:_j<p@wwwwww1['j6xu[--<plwwwwwwwwwo!:$-<p@wwwwwwww44wwww",
"wwww44wwwwww)!:$-<<@wwwwww@[0-n*00---{1wwwwwwwww9|:=<<p@wwwwwwww44wwww",
"wwww44wwwwww9@:_<<p1wwwwww@^[u6x^^f-<<!wwwwwwwwww@==<<~1wwwwwwww44wwww",
"wwww44wwwwwww@:=<<p1wwwwww@^u(7j^^---{!wwwwwwwwwwl==<<~/wwwwwwww44wwww",
"wwww44wwwwwwwl==<<4/wwwwww=^'md<[zfj-{$9wwwwwwwwwo!$-<4)wwwwwwww44wwww",
"wwww44wwwwwwwo!$-<4lwwwwww|#,tr^z}--<{v9wwwwwwwww9@$-<g9wwwwwwww44wwww",
"wwww44wwwwwww9|_-<g9wwwwww|e-b&ze<---<4owwwwwwwwww1_<<v9wwwwwwww44wwww",
"wwww44wwwwwwww1_<<v9wwwwww@ee}zzc-<--<4lwwwwwwwwww)=~<v9wwwwwwww44wwww",
"wwww44wwwwwwww)!+<i9wwwwww/ezzz#fj-<--~/wwwwwwwwww9!j<$9wwwwwwww44wwww",
"wwww44wwwwwwww95-<v9wwwwwwo0ezz#&j-<-{~lwwwwwwwwww9|j-59wwwwwwww44wwww",
"wwww44wwwwwwww9!j<5wwwwwww9=ez#z&*<<<{gowwwwwwwwww91,j@wwwwwwwww44wwww",
"wwww44wwwwwwww91,-@wwwwwwww)2#z#em-{<p1wwwwwwwwwww9o]r/wwwwwwwww44wwww",
"wwww~4wwwwwwww9o](lwwwwwwwwwl^zz#<+~~!9wwwwwwwwwwww9549wwwwwwwww44wwww",
"wwww449wwwwwwwww!iowwwwwwwwwwl;;;]gi|owwwwwwwwwwwwww@|9wwwwwwwww44wwww",
"wwww4~9wwwwwwwwwl/wwwwwwwwwwww9o)llowwwwwwwwwwwwwwwww9wwwwwwwwww44wwww",
"wwww44owwwwwwwwww9wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww44wwww",
"wwww4~)wwwwwwwwww99wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww44wwww",
"wwww44)wwwwwwwwww!h9wwwwwwwwwww)l1|@lwwwwwwwwwwwwwwww99wwwwwwwww44wwww",
"wwww4~)wwwwwwwww9h(owwwwwwwwww1ueej-~5owwwwwwwwwwwwww!h9wwwwwwww44wwww",
"wwww44)wwwwwwww9o]r/wwwwwwwwwl^e#ej--ph9wwwwwwwwwwww9$(owwwwwwww44wwww",
"wwww4~)wwwwwwww91,m@wwwwwwww)2#zeem--{p1wwwwwwwwwww9o]rlwwwwwwww44wwww",
"wwww44)wwwwwwww9!3{hwwwwwwww5}#z#&j---{gowwwwwwwwww91,*@wwwwwwww44wwww",
"wwww4~)wwwwwwww9!-<i9wwwwww)uezzzcj<<-{~lwwwwwwwwww9|3-59wwwwwww44wwww",
"wwww44)wwwwwwwwl!+<i9wwwwww/}zzzzfj-<<<~/wwwwwwwwww9!{<$wwwwwwww44wwww",
"wwww4~)wwwwwwww/5<<v9wwwwww@#e}z#c-<-{-4lwwwwwwwwww)_~<i9wwwwwww44wwww",
"wwww44)wwwwwww9|_j<g9wwwwww:em%&ze-----4owwwwwwwwww1_<-v9wwwwwww44wwww",
"wwww4~)wwwwwwwo=$-<4lwwwwww|z,tr^z}----v9wwwwwwwww9@_-<gowwwwwww44wwww",
"wwww44)wwwwwwwl==<<+lwwwwww!^^mdr[zf--{hwwwwwwwwwwo!$-<4)wwwwwww44wwww",
"wwww4~)wwwwww9@==<<~1wwwwww@^yrd*^^---{!9wwwwwwwwwl=_-<4/wwwwwww44wwww",
"wwww44)wwwwww9@:=<<<@wwwwww@^[]6*^'<<<{!wwwwwwwwww@:=<<p1wwwwwww44wwww",
"wwww4~)wwwwww)!:$j<p@wwwwww1[u<n*0u<--p1wwwwwwwww9|:=<<p1wwwwwww44wwww",
"wwww44)wwwwwwl=:_-<p@wwwwww12'j6x'^,<-plwwwwwwwww)!:$-<<@wwwwwww44wwww",
"wwww4~)wwwwww@=:_j<p!wwwwwwl2['3-[[--<p)wwwwwwwwwl_:_j<p@wwwwwww44wwww",
"wwww44)wwwww9|::_<<<!wwwwwwo'[[yx('j-<p)wwwwwwwww@::=j<<!wwwwwww44wwww",
"wwww4~)wwwww)!::+<<<$wwwwwwo=;;;>r0<<-4owwwwwwwwo|::h<<<!wwwwwww44wwww",
"wwww44)wwwww/=::<<<<howwwww9|[;[;'$<<-g9wwwwwwwwo!::+<<<$wwwwwww44wwww",
"wwww4~)wwwww1=::~-<<$owwwww9@2;;;'<<<<v9wwwwwwww/=:=<<<-howwwwww44wwww",
"wwww44)wwww9|:::>-<<vowwwwww12;;;'-<<<$9wwwwwwww1=::+<<<howwwwww44wwww",
"wwww4~)wwwwo==::>-<<g)wwwwwwl=;;;'-<<<$9wwwwwwwo@=::>j<<vowwwwww44wwww",
"wwww44)wwwwl_:;;+-<<4)wwwwww)=:;:'j<<<!wwwwwwwwo_:::><<-g)wwwwww44wwww",
"wwww4~)wwww1_;:=<<<<glwwwwww9=;;:>-<<<!9wwwwwwwl_;;=+-<<4)wwwwww44wwww",
"wwww44)www9@;;;;+---~lwwwwwww@=:;_<<<p|wwwwwwww1=::;<<<<4)wwwwww44wwww",
"wwww4~)wwwo:;:;;+<<<~/wwwwwww1=::=<-<p@9wwwwww9@;;;;+-<<~/wwwwww44wwww",
"wwww44)www)=;;;2<<<-p/wwwwwww)=::_-<<p/wwwwwww9=;;:;+<<<~/wwwwww44wwww",
"wwww4~)www)_;;;;0+<<p1wwwwwwwo!::0-<<~/wwwwwww)=;;;;<--<p/wwwwww44wwww",
"wwww44)www/';;[00><<<@wwwwwww9|::0<<<plwwwwwww)_;;;20+<<p1wwwwww44wwww",
"wwww4~)www@2[[0s0<-<<hwwwwwwww1::=p<<p)wwwwwww/2[;[0v><<p@wwwwww44wwww",
"wwww44)www|[;^mf2kj<<hwwwwwwwwl!::~<<~owwwwwww@2[;0su+-<-hwwwwww44wwww",
"wwww4~)ww9=['*b0[uj-{$wwwwwwwwo!::+<<gowwwwwww|2[^m<[kj-phwwwwww44wwww",
"wwww44)ww9=[+a6+0&-<<vwwwwwwww9|::p<<4owwwwww9=['*b0[uj<<$wwwwww44wwww",
"wwww4~)wwo_^'t6>'>---4)wwwwwwww/!:+<<g9wwwwwwo_[+a6+0k--<iwwwwww44wwww",
"wwww44)wwo_[u,ak[c-{-4)wwwwwwww)=:v-<v9wwwwww9_^'t6>^k<-{4owwwww44wwww",
"wwww4~)ww)'[(x7>[uj<-4lwwwwwwwwo!:>-<howwwwwwo'[u-ak[k---g)wwwww44wwww",
"wwww44)ww)'^rx(ez}j--p/wwwwwwww9@:~<<59wwwwwwo'[(x7u[&j<-4lwwwww44wwww",
"wwww4~)ww)[}adyz}----p@wwwwwwwww/=+-p|wwwwwww)^^rx+yz}j--~/wwwww44wwww",
"wwww44)ww)'e,&z#f-<<-p|wwwwwwwww)!>-p1wwwwwww)^}adez}<---p1wwwww44wwww",
"wwww4~)wwo_##zz&m---{{$9wwwwwwww9!$-~1wwwwwww)'e,k[#f--<-p|wwwww44wwww",
"wwww44)ww9=##zzej-<<-ph9wwwwwwwww1v-</wwwwwwwo2##zz}m--<<p5@g!ww44wwww",
"wwww4~)www/kzz##---<<{!9wwwwwwwwwl+j~lwwwwwww9=ezz#}j--<{pg8)6|w44wwww",
"wwww44)wwwo=#z#ef---<~)wwwwwwwwwwo]*4)wwwwwwww/kzzez,--<-pq.w6jw44wwww",
"wwww4~)wwwwl^ez#cj-{p!9wwwwwwwww99_3$owwwwwwwwo2ez#efj<{<44.9n7w44wwww",
"wwww4~)wwwww/eezc-<phowwwwwwwwwwww/,!wwwwwwwwwwl^zz#c-<{p|o{j.4w44wwww",
"wwww4~owwwww9/=^k~g@owwwwwwwwwwwww)p1wwwwwwwwwwwl^zz&<~~!owwhn)w44wwww",
"wwww44owwwwwwwwwwwwwwwwwwwwwwwwwww919wwwwwwwwwwwwl@:'v$1oww|alww44wwww",
"wwww4~owwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww/|9www44wwww",
"wwwwpq44444444i)9wwwwwwww!g444@9wwwwwwww54444@wwwwwwwwli4444~444q4wwww",
"wwww!p44444444iowwwwwwww9h44441wwwwwwww9h44441wwwwwwwwl44444444441wwww",
"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww",
"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww",
"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww",
"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww@"};
