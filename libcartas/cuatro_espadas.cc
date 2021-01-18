/* IMBHeader:  1.0.0
 * Programa:   cuatro_espadas.cc 
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
const char * cuatro_espadas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #040406",
"+	c #5B839F",
"@	c #C4C4C5",
"#	c #454544",
"$	c #98A4AC",
"%	c #646566",
"&	c #848484",
"*	c #6E666C",
"=	c #E4E4E4",
"-	c #8E9398",
";	c #252524",
">	c #B3B4B5",
",	c #6A4643",
"'	c #7A94A6",
")	c #D4D4D4",
"!	c #747474",
"~	c #979694",
"{	c #5B2420",
"]	c #457494",
"^	c #A7A6A4",
"/	c #6A524C",
"(	c #758C9B",
"_	c #BCBCBC",
":	c #613431",
"<	c #CBCCCD",
"[	c #877271",
"}	c #F4F4F4",
"|	c #8A9CA8",
"1	c #53120D",
"2	c #958384",
"3	c #5E737F",
"4	c #555554",
"5	c #638DA4",
"6	c #1C1C1A",
"7	c #343434",
"8	c #775757",
"9	c #571B19",
"0	c #6C7C88",
"a	c #6C6C6C",
"b	c #5B6D7B",
"c	c #5C7E94",
"d	c #ACACAC",
"e	c #4C4C4C",
"f	c #ECECEC",
"g	c #6D4C4C",
"h	c #9C9C9C",
"i	c #8A7D7C",
"j	c #8A8A8C",
"k	c #5D5D5D",
"l	c #675C66",
"m	c #DCDCDC",
"n	c #653B39",
"o	c #2D2D2C",
"p	c #FEFEFC",
"q	c #3D3D3C",
"r	c #988C8A",
"s	c #A2A3A5",
"t	c #668499",
"u	c #7B6564",
"v	c #7C7C7C",
"w	c #7E6C68",
"x	c #5E2A28",
"y	c #B6BABC",
"z	c #7E9AAC",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppp}sjjjjjjjjjjjjjj)pppppppppsjjjjjjjjj)pppppppp)jjjjjjjjjjjjjjs}pppp",
"pppphkjjjjjjjjjjjjjj)pppppppp}sjjjjjjjjj)pppppppp)jjjjjjjjjjjjjjkhpppp",
"ppppjjpp>)ppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppjjp=6dppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppjjp!;dppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppjj~@odppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppjvv);jppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppj%....pp}}ppppppppppppppppppppppppppppppppppppppf<@fppppppppjjpppp",
"ppppjjppodp)r&_ppppppppppppppppppppppppppppppppppppphgg~fpppppppjjpppp",
"ppppjjpp-)}ix9wfppppppppppppppppppppppppppppppppppp=w91g)pppppppjjpppp",
"ppppjjpppp=u91,@ppppppppppppppppppppppppppppppppppp@,19[=pppppppjjpppp",
"ppppjjppppp^:1{~}ppppppppppppppppppppppppppppppppp}~{1,_ppppppppjjpppp",
"ppppjjppppp=i91u=pp}m<<}ppppppppppppppppppp}@dy)f}=[1{2=ppppppppjjpppp",
"ppppjjpppppp@g1n_=>(ctjfpppppppppppppppppppfs'z''dd898@pppppppppjjpppp",
"ppppjjppppppfhn,ac]]+|@pppppppppppppppppppppmyh'5+b/g~fpppppppppjjpppp",
"ppppjjppppppp_lub]c'@fppppppppppppppppppppppp}=@$0b*%(@}ppppppppjjpppp",
"ppppjjppppp=$tckea>}pppppppppppppppppppppppppppp)!k4b]]'<}ppppppjjpppp",
"ppppjjppp}@-5+0k!^dfpppppppppppppppppppppppppppp_0a-j(]]5y}pppppjjpppp",
"ppppjjppp_'zz$_v%j>)ppppppppppppppppppppppppppp=dj&s@=>-t(<pppppjjpppp",
"ppppjjppf~'d<}pdhvsd}pppppppppppppppppppppppppp_*!h>fpp=@>mpppppjjpppp",
"ppppjjpp}))}pppmhkhs)ppppppppppppppppppppppppp}v7&^@ppppppppppppjjpppp",
"ppppjjppppppppp}~o!~>}pppppppppppppppppppppppp@#e-h=ppppppppppppjjpppp",
"ppppjjpppppppppp)eej!)ppppppppppppppppppppppp}jq!~>}ppppppppppppjjpppp",
"ppppjjpppppppppp}jovahppppppppppppppppppppppp)k#j!)pppppppppppppjjpppp",
"ppppjjppppppppppp)eej!)ppppppppppppppppppppp}^k!v~}pppppppppppppjjpppp",
"ppppjjppppppppppp}j4-!dppppppppppppppppppppp=hsj!@ppppppppppppppjjpppp",
"ppppjjpppppppppppp<rdv~mpppppppppppppppppppp>a&vhfppppppppppppppjjpppp",
"ppppjjpppppppppppp}s!k&dpppppppppppppppppppfaq%j@pppppppppppppppjjpppp",
"ppppjjppppppppppppp@#q&jmpppppppppppppppppp_qe&~=pppppppppppppppjjpppp",
"ppppjjppppppppppppp}&;aadpppppppppppppppppf&o%vyppppppppppppppppjjpppp",
"ppppjjpppppppppppppp@qehs=pppppppppppppppp<4#j&mppppppppppppppppjjpppp",
"ppppjjppppppppppppppf!qjd>ppppppppppppppp}d&j^>}ppppppppppppppppjjpppp",
"ppppjjppppppppppppppp_v^h-=ppppppppppppppm^>hh)pppppppppppppppppjjpppp",
"ppppjjppppppppppppppp}d>-r_ppppppppppppppd!r-^}pppppppppppppppppjjpppp",
"ppppjjpppppppppppppppp@!!j>fppppppppppppfhv&~<ppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppf-~~d@pppppppppppp@@^h>fppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppp@@d&dfppppppppppfhyj^@pppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppfdd&>@pppppppppp@4&&d=pppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppp>e%hdfpppppppp}jo!d@ppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppf*;vd@pppppppp<4qjdmppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppp>74^^fppppppp^4ahy}ppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppp=vkhh<ppppppmjahd)pppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppp>vjhhfppppp@sjh^fpppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppp=s^~k@pppp=>^h-<ppppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppp}_>^&jpppp<@dvv=ppppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppppp=_<ha)pp}>)s!>pppppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppppppy)d!<pp=y_&vmpppppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppppp=>d!)ppfd&vdppppppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppppppm__ppppmh_fppppppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppppppppppppp))fpppppppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppppp})>fppp@vdyfppppppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppppp@&vdfp}d!><<ppppppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppppp=jvd>mp}>!s<_fpppppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppppp@vh<_=ppmvr>>)pppppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppp}-v^<@pppp^ah^d}ppppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppppp)r-s>mpppp)j~jj<ppppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppp}yhr^yfpppp}>s&%h}pppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppp=dhvj<ppppppmshe4<pppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppp@^v4~fpppppp}>h%o-}ppppppppppppppppppppjjpppp",
"ppppjjppppppppppppppppppf>~eeyppppppppmd&ek)ppppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppp<d&7*mpppppppp}y^&~>}pppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppfy~v4hpppppppppp)^iy_mpppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppppmdj^~)pppppppppp}yshh>}ppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppp}_^h@yfppppppppppp<dj!&mppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppp=sj&h)ppppppppppppfdj-^_ppppppppppppppppppjjpppp",
"ppppjjpppppppppppppppp_-j!hfppppppppppppp@-hd-mpppppppppppppppppjjpppp",
"ppppjjpppppppppppppppf^h^h_pppppppppppppp=ssvedpppppppppppppppppjjpppp",
"ppppjjppppppppppppppp<d~-d=ppppppppppppppp<^&7amppppppppppppppppjjpppp",
"ppppjjppppppppppppppfh-a4^}ppppppppppppppp=h!eq>ppppppppppppppppjjpppp",
"ppppjjpppppppppppppp)&aq4)ppppppppppppppppp>&a7!=pppppppppppppppjjpppp",
"ppppjjppppppppppppp}>&l7jfppppppppppppppppp=h!ea@pppppppppppppppjjpppp",
"ppppjjpppppppppppppmh!ee<pppppppppppppppppp}_jv^s=ppppppppppppppjjpppp",
"ppppjjpppppppppppppy&!%&fpppppppppppppppppppm~&j%_ppppppppppppppjjpppp",
"ppppjjpppppppppppp=rvhh@}ppppppppppppppppppppd!&q&fpppppppppppppjjpppp",
"ppppjjpppppppppppp@v&aj=pppppppppppppppppppppmv&ee@pppppppppppppjjpppp",
"ppppjjpppppppppppf-!a#^}pppppppppppppppppppppph!v7&fppppppppppppjjpppp",
"ppppjjppppppppppp)~&ek)ppppppppppppppppppppppp)h-ee<ppppppppppppjjpppp",
"ppppjjpppppppppp}yhaqj}ppppppppppppppppppppppp}>s!kdfppp}f}pppppjjpppp",
"ppppjjpppppppppp=^hee@ppppppppppppppppppppppppp)dj&^)p}m>|y}ppppjjpppp",
"ppppjjppppmmfpp}@^&k&fppppppppppppppppppppppppp}y^v!^m>|z-@pppppjjpppp",
"ppppjjppp=--$<f=>~vh@ppppppppppppppppppppppppppp)sj%a(5'z_}pppppjjpppp",
"ppppjjpppfy5cc|^h&!s=ppppppppppppppppppppppppppp=h!4b++$)pppppppjjpppp",
"ppppjjpppp}@(]]3b%%d}pppppppppppppppppppppppppf<$tbk%0_fppppppppjjpppp",
"ppppjjppppp}m>5bk4a|)=pppppppppppppppppppppp}<|+]]3l,u)pppppppppjjpppp",
"ppppjjppppppp}_%lbc+'$@=pppppppppppppppppppp<-tct$<i{{rfppppppppjjpppp",
"ppppjjpppppppfh:nv|''z'hmpppppppppppppppppppmdd@=}pd:1,yppppppppjjpppp",
"ppppjjppppppp@89n>fm_>$$mpppppppppppppppppppp}ppppp)819[=pppppppjjpppp",
"ppppjjpppppp=2{18)ppp}ffpppppppppppppppppppppppppppf291:^}ppppppjjpppp",
"ppppjjpppppp@,192=ppppppppppppppppppppppppppppppppppy:1x^ppfk)ppjjpppp",
"ppppjjppppp}2{1:dpppppppppppppppppppppppppppppppppppmi82)pp>6~<fjjpppp",
"ppppjjpppppp^,x8<ppppppppppppppppppppppppppppppppppppf)fpppa.;;^jjpppp",
"ppppjjpppppp=>~@}pppppppppppppppppppppppppppppppppppppppppp<o_h)jjpppp",
"ppppjjppppppp}}pppppppppppppppppppppppppppppppppppppppppppp<os-pjjpppp",
"ppppjjppppppppppppppppppppppppppppppppppppppppppppppppppppp<6vfpjjpppp",
"ppppjjppppppppppppppppppppppppppppppppppppppppppppppppppppp@omppjjpppp",
"ppppjjppppppppppppppppppppppppppppppppppppppppppppppppppppppppppjjpppp",
"ppppvejjjjjjjjjjjjjvkkkk!}ppppsjjjjjjjjj)ppp)akkkkvjjjjjjjjjjjjj4jpppp",
"pppp>vjjjjjjjjjjjjj!kkkkvfppp}sjjjjjjjjj)ppp<%kkkk!jjjjjjjjjjjjjj)pppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp",
"pppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppppp"};
