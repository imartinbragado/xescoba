/* IMBHeader:  1.0.0
 * Programa:   dos_copas.cc 
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
const char * dos_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #020204",
"+	c #8B847C",
"@	c #C6C4C2",
"#	c #484847",
"$	c #686462",
"%	c #AAA49D",
"&	c #966443",
"*	c #7B4426",
"=	c #9E9486",
"-	c #D4A582",
";	c #7C533C",
">	c #E3E3E4",
",	c #94745E",
"'	c #A8957D",
")	c #995526",
"!	c #CFBAA9",
"~	c #B8B4B1",
"{	c #D5D3D2",
"]	c #767371",
"^	c #A9642D",
"/	c #9D8D7D",
"(	c #6C351B",
"_	c #DFC4AD",
":	c #B9A594",
"<	c #D9B496",
"[	c #AB9B83",
"}	c #793C1D",
"|	c #8C5327",
"1	c #8E4E25",
"2	c #9F5C2B",
"3	c #A09C94",
"4	c #DCBCA1",
"5	c #826453",
"6	c #313130",
"7	c #595958",
"8	c #F4F4F4",
"9	c #6D432F",
"0	c #AD7541",
"a	c #131314",
"b	c #3C3C3C",
"c	c #867A70",
"d	c #70594C",
"e	c #D4AC8B",
"f	c #DCDDDB",
"g	c #AFACA8",
"h	c #926B4F",
"i	c #726B67",
"j	c #7C4C33",
"k	c #7C5C49",
"l	c #8A8A8C",
"m	c #CECCCB",
"n	c #BEBCBB",
"o	c #6F3B21",
"p	c #E2CCB9",
"q	c #866C5B",
"r	c #B47C4C",
"s	c #EDEDEC",
"t	c #AF6B31",
"u	c #8F7C6F",
"v	c #BCADA2",
"w	c #8A5B3C",
"x	c #7C7B78",
"y	c #FEFEFC",
"z	c #714E3C",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyy8%lllllllllllllllllll{yyyyyyyyyyyyyyyyyy{lllllllllllllllllll%8yyyy",
"yyyy37lllllllllllllllllll{yyyyyyyyyyyyyyyyyy{lllllllllllllllllll73yyyy",
"yyyylly87.+yyyyyyyyyyyyyyy>m~g%%%%%%%%ggmfyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyylly%37a>yyyyyyyyyyf%=l[v!@_p_ee<__p!:[l=%@yyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllysy%asyyyyyyyynl[!__p___4_<e<4_!_44ppp!%+g8yyyyyyyyyyyyyyyllyyyy",
"yyyyllyyy]$yyyyyyyy%g__4<<___444e!____4_pp___<<vl>yyyyyyyyyyyyyyllyyyy",
"yyyyllyy>]y8yyyyyys[___!4<4_4<e<e4ppp{ppp_4_444<!]yyyyyyyyyyyyyyllyyyy",
"yyyylly>6n@]yyyyyy8u!44<44<ee---e<444_p_4__44444+%yyyyyyyyyyyyyyllyyyy",
"yyyylly6...nyyyyyyy%c/e4<<<<e-e<<_44444444<e<4'c+>yyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyy~'=xu/[eeee44_4_4_____!:=+cl//yyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyym3''[3/x++///=/===+/l++/[%'''gyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyys/'[''/''[[[%:%%%[[/'''[[[[[=@yyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyy3[['''['[[''[''[[''[['''[['3fyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyy~[['[''''[[[[[[['[''=[[['[[%8yyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyy{=['[''['[['[[[['[''''[[''[nyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyy%[['/''=['['[:[''/''=['[[=8yyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyf/'''''/[[[[[[['/'''/[[[[gyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyy83/'//[['[[[[''/'/'''''[={yyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyym/''/''/['/'//''''''/['%yyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyy='/''['[[''''''/'''[[={yyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyym'/''[[[[[[''''/'''[[%yyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyy['[''[[[[[[['''[''[38yyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyys3'''[[[[[[['[''''=@yyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyy{='[['''[[['''['[3yyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyn=/[['[[[[['/['38yyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyy%/'[[[:[[''/==syyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyg=[[''///''/syyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyy8i='/''/'/]fyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyy8+5c/[[/ckc8yyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyy[(jiqhq;(,yyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyy:(o5||5*9+yyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyg(ok11qoo=yyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyv(o5^^5z*=yyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyv}*,^^h**'yyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyy=o}q^^hjouyyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyy/}*h22h;*hyyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyy8k}|&1)^w*&fyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyy{jowh2225o9~yyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyy/}okt^^tqo}cyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyy{;(*51)^th*}jfyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyuoozh)))2&;o(/yyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyy@z((5w)1jj|5oo9nyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyy85((9h222^)2hz(o5fyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyy8=oo(;)2^^t^1wk}(oxyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyy%9o(9q22^^^^^2hj}(9gyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyf;o(}k0t^^222200qo(ozfyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyys]w*k5|)))1))11)&kjk/8yyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyn/i,0rtt222^tr,5/@yyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyy8f~%%:==%ggg{8yyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyy8>>>>>>syyyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyy8mg3=/==%:'[[%3=l=3g@syyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyn=lv____4_p4ee44__4!4_~=lg8yyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyy{+~_4<!___444e<4_44_4ppp__<v/~yyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyy83___!444p_4<<<4_ppp_ppp__44<4%3yyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyys=_44444e<<e--e<4p_ppp___4444<v+yyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyy8l/4<<<<4eeeee-44<44_!4444<4<[]nyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyg/cl:_<<e-e<_4_44__4444<<v/x+=8yyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyn[''+c++/':e44_p__!v:=/l++''/=yyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyf='[['''[==l+++++++/=[[[[[[['nyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyy/[[''/'''[[[['['''='['[[[['/{yyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyg[['''[''[[[[[[[''''[''[[[[3syyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyn[['['''['[[[[[[[[''=[['[[[gyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyys=['[/''[[['=[[[''='''['''/fyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyn['''['/[[[[%[[''/'[/[[[[%yyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyys=///''''[['[[['''/'''[['~yyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyg'''/[''['''///'/'['=[[lyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyy8+''/''/[['''/''/''[/['nyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyv'/'[['[[['''''/'''[[3syyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyys/'''[[['[[[['[''''[=myyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyym=[''[[[[[[['''''[[gyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyg'['[[[[[[['[''''/syyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyy8='[[[''[[[['/''3myyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyy>l/'[[[:[[[''[/nyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyfl'[[''''/'//nyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyfc[[''///'/~yyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyy]c='''''c]syyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyy/jk]++xd*qyyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyy[(o5^^hjouyyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyvook1jqoo=yyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyg(o5|)599=yyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyvo}q^thj}=yyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyy%o*ht^hj*/yyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyy'o*h22&;ouyyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyy8u}*h))&w*hsyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyy>;}w&2)25}jmyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyg*(wh2t^5o93yyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyys,}*52)^th}}k8yyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyv9(9h)22^h;(*~yyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyysd((d&)|1||kook>yyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyy3o(o52)111)59(9/yyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyym9o(j&2^^^^2&k(}zgyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyf5o(9k1)^^t2)ww*((dfyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyy8q(((;,t^^2t^^t0k(((c8yyyyyyyyyyyyy>7#b#yllyyyy",
"yyyyllyyyyyyyyyyyyyyyyymd*}j52^^22)))2&q;}9dfyyyyyyyyyyyyy~il63yllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyynckqh2^2))))22^t5wu{yyyyyyyyyyyyyy{8~3yyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyy{%'u,,hhhhhhc=%{yyyyyyyyyyyyyyyyy@7>yyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyy8ssf{ss8yyyyyyyyyyyyyyyyyyyyy$7yyyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyysbb@%yllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy=a6gyllyyyy",
"yyyyllyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyllyyyy",
"yyyyx#llllllllllllllllll%yyyyyyyyyyyyyyyyyyy{lllllllllllllllllll7lyyyy",
"yyyynxllllllllllllllllll%8yyyyyyyyyyyyyyyyyy{llllllllllllllllllllmyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy"};
