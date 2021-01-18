/* IMBHeader:  1.0.0
 * Programa:   tres_bastos.cc 
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
const char * tres_bastos_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #0A0909",
"+	c #868542",
"@	c #BEC62B",
"#	c #A9A64B",
"$	c #A7A48A",
"%	c #554A3F",
"&	c #6B673C",
"*	c #A89435",
"=	c #B1B837",
"-	c #8E6C44",
";	c #9C9649",
">	c #BAB787",
",	c #7B7945",
"'	c #BFA51B",
")	c #DFE414",
"!	c #B6A44B",
"~	c #8A8A89",
"{	c #C4C289",
"]	c #BBB8AD",
"^	c #7A7959",
"/	c #B3AD87",
"(	c #703B3B",
"_	c #7E6929",
":	c #9B9983",
"<	c #90483A",
"[	c #A78E66",
"}	c #ACAC96",
"|	c #5E5747",
"1	c #99896E",
"2	c #D8D6D3",
"3	c #BDAD4E",
"4	c #C0B555",
"5	c #C4BC7F",
"6	c #2E2722",
"7	c #C21718",
"8	c #E9E8E6",
"9	c #B12F28",
"0	c #48382D",
"a	c #AC4B44",
"b	c #917934",
"c	c #1B1713",
"d	c #D0DC15",
"e	c #A99C6D",
"f	c #FEFEFC",
"g	c #BA7E7C",
"h	c #865A54",
"i	c #8F3A2A",
"j	c #6F5A3A",
"k	c #B6624C",
"l	c #6B4A3D",
"m	c #9A8A39",
"n	c #37322C",
"o	c #B63C38",
"p	c #CA9E9C",
"q	c #B5201C",
"r	c #B25D52",
"s	c #967A63",
"t	c #CAC8C0",
"u	c #AF9C2E",
"v	c #7A6A50",
"w	c #CCCA22",
"x	c #663E3C",
"y	c #6C6953",
"z	c #EFEA13",
"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff",
"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff",
"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff",
"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff",
"ffff8$~~~~~~~~~2fffffffff$~~~~2ffffffff2~~~~$fffffffff2~~~~~~~~~:fffff",
"ffff$|~~~~~~~~~2fffffffff$~~~~2ffffffff2~~~~:fffffffff2~~~~~~~~~|:ffff",
"ffff~~f8$~8fffffffffffffffffffffffffffffffffffffffffffffffffffff~~ffff",
"ffff~~fy^6~fffffffffffffffffffffffffffffffffffffffffffffffffffff~~ffff",
"ffff~~f8f^^fffffffffffffffffffffffffffffffffffffffffffffffffffff~~ffff",
"ffff~~ff~ctfffffffffffffffffft8fffffffffffffffffffffffffffffffff~~ffff",
"ffff~~ff]66fffffffffffffffff8|2fffffffffffffffffffffffffffffffff~~ffff",
"ffff~~ffft.fffffffffffffffff}%]fffffffffffffffffffffffffffffffff~~ffff",
"ffff~~8nt$^fffffffffffffffff]v/fffffffffffffffffffffffffffffffff~~ffff",
"ffff~~ft^tffffffffffffffffff:h1fffffffffffffffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffffff8:js2ffffffffffffffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffffff81j-]ffffffffffffffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffffff2aj-effffffffffffffffffffffffffffffff~~ffff",
"ffff~~ffffffffffffffffffffftai_1fffffffffffffffffff82228ffffffff~~ffff",
"ffff~~fffffffffffffffffffff]aq|-8ffffffffffffffff8]*b;u1}8ffffff~~ffff",
"ffff~~fffffffffffffffffffff>97i:tffffffffffffff8{euu'u'*&^tfffff~~ffff",
"ffff~~fffff8t~:]]8fffffffff}77j/]fffffffffffff8/uu'''''by^ytffff~~ffff",
"ffff~~ffff]=3wzzz::8fffffff/q7y>}8fffffffffff$m''''''u*&^^^$ffff~~ffff",
"ffff~~fff/[_=zzzzw34tffffff]a7&>}2ffffffffff]_u'''u'''b&,^^^8fff~~ffff",
"ffff~~ff2;'ujdzzzzzz^}8ffff}a7&//tfffffffff]*u'''''''u&^^^^ytfff~~ffff",
"ffff~~f81u''b'zzzzzzwe$8fff}a7i;]}fffffffft;''''''u'*j&^^^^^}fff~~ffff",
"ffff~~f8m''''b=zzzzzzz~]fff}97i+5}8ffffff8;'''''''''_&^^^^^^:fff~~ffff",
"ffff~~ft*'u'u*&zzzzzzzw~2ff$777y>/2ffffffeu''''''''*j,^^^^^^:fff~~ffff",
"ffff~~ft*'''''_zzzzzzzz4$ff:777y>/{fffffte!'*'''''m|^,y^^y^^$fff~~ffff",
"ffff~~ftu'u''ub+zzzzzzzz~28:979^5>]fffff/'3,0*'''*&,,^^^,^^^]fff~~ffff",
"ffff~~f>u''''''_zzzzzzzz4]f:979r{{$8ffftu';6.^'''b&^,,^^^^^^tfff~~ffff",
"ffff~~ft''u''''_wzzzzzzzw/8~77is>{}tff813!1%6&!''m,^^^^^^^^~8fff~~ffff",
"ffff~~ft*'u''''mwzzzzzzzz@t~q7ir{{>]fft*3'e-h[3''m&^,^y^^^^}ffff~~ffff",
"ffff~~f{_''''''u_wzzz)z)zz:kq79r>{5]88e34e$j|/4''m&^^,^^^^~tffff~~ffff",
"ffff~~f8-'''''''*,#zzzzzz)eg7q7j/{{}ft#33vyx6ve'3*&^^^^y^^}fffff~~ffff",
"ffff~~ff!'''''''''m_+w)zzz=$oq7i$5{}2$!'3$1v|^!3'u&^,^^^^:8fffff~~ffff",
"ffff~~ff}u'''''''''';_#z)z@~p7qi}{5>]u333!v0%34'3m&^^^^^~8ffffff~~ffff",
"ffff~~fft*'';v+!3''''u&z)z);$aqi/{5{}43e3vc6|!3'uvy^,y^ytfffffff~~ffff",
"ffff~~fff#!',ccj!4333',zz)z);pq</5{t$33y~6cj*33*&y^^^^^$ffffffff~~ffff",
"ffff~~ffft*!;60v1:v3='b#z)z))-qi}{5$33#|%c61333+,,,^^^~8ffffffff~~ffff",
"ffff~~fff8e'3s-v6ny333m;)z)z)ea&/{{$344j06|::e!+^^,^^~tfffffffff~~ffff",
"ffff~~ffff2!'3![|||^!33#)z)z)w1h1{{#334;60&;1e,^,^^y^}ffffffffff~~ffff",
"ffff~~fffff}!!3~y-06m33#_@z))z=ro>$3433e0s#33!v^^^^^~8ffffffffff~~ffff",
"ffff~~fffff2+!3[:enn,3e1!&w)z)=$<:e4343ev:433m&,^,^^}fffffffffff~~ffff",
"ffff~~ffffff]!3'3!lcn:+e'm+))zw31]34433[%s333&^^^^y:ffffffffffff~~ffff",
"ffff~~ffffff8$3'34^.c|~433b@)))=:}34444;6+33by,^^^~8ffffffffffff~~ffff",
"ffff~~fffffff2e331^%06s343;u))))#t44443/|e#,&^,^^^}fffffffffffff~~ffff",
"ffff~~ffffffff{e4!^%6nv/43u#))))@}544443se:,^^,^^$8fffffffffffff~~ffff",
"ffff~~ffffffff8$343e;jjv^4##))))):t44444$}+^^,^^^tffffffffffffff~~ffff",
"ffff~~fffffffff2#33444[jc^/#w))))=]5444/>#^^,^^^:fffffffffffffff~~ffff",
"ffff~~ffffffffff]!43333!^v^$e)))))12444,+,^,^^^~8fffffffffffffff~~ffff",
"ffff~~ffffffffff8//3433443//#)))))@$44ey^^^^,^^tffffffffffffffff~~ffff",
"ffff~~fffffffffff8e43444344/d))))))5>4+,^,^^^^}fffffffffffffffff~~ffff",
"ffff~~ffffffffffffte44344444;#))))))e/,^^^,^+~2fffffffffffffffff~~ffff",
"ffff~~fffffffffffff]!4444444#_@)))))#:y^,^^^+]ffffffffffffffffff~~ffff",
"ffff~~fffffffffffff8]$444444>e@)d)d)w$^^^,,^:8ffffffffffffffffff~~ffff",
"ffff~~fffffffffffffff//4444444b@))))d#$+^^^~2fffffffffffffffffff~~ffff",
"ffff~~fffffffffffffff8e4545454$+d))))@~+^^^:ffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffft/4444544,@ddd)d~},^:8ffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffff]!554545#+))))d;}~+tfffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffff8$345455/+dd)d)d#}:ffffffffffffffffffffff~~ffff",
"ffff~~ffffffffffffffffff8}>454555=+)d)d@]tffffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffff2e554555>^)dd)d$28fffffffffffffffffffff~~ffff",
"ffff~~ffffffffffffffffffff]e555455e#d)d)@]8fffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffffft]#55555>,d)ddd=2fffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffff8}>$/55{5>@dd)dd#}fffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffff8${t/}{555#+dd)dd=8ffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffff2}{{{}>{{{>;d)dd)@}ffffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffff]>5{{>}>{5{>=@)ddd~8fffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffff$5{{5y}$>{{{>$+ddd#}fffffffffffffffffff~~ffff",
"ffff~~ffffffffffffffffff2/{{{~^+}${{{{{^d)dd~2ffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffffft>{{/&^^+]}{5{{$#ddd@]ffffffffffffffffff~~ffff",
"ffff~~fffffffffffffffff8}5{>^,^+,~}${{5{,@ddd;2fffffffffffffffff~~ffff",
"ffff~~fffffffffffffffff8}5{$&,^^^${$}{{{}+dddd$fffffffffffffffff~~ffff",
"ffff~~fffffffffffffffff]}{{$y+^+~53#}>5{{,@ddd=2ffffffffffffffff~~ffff",
"ffff~~fffffffffffffffff}5{{+y,^^}3=#$$>{{},+dd@$ffffffffffffffff~~ffff",
"ffff~~fffffffffffffffff}{{:y^,,~>'31%~}>{{>;ddd=2fffffffffffffff~~ffff",
"ffff~~ffffffffffffffff2}{>^,,+^>3'3;~^^}5{{=;dd=$fffffffffffffff~~ffff",
"ffff~~ffffffffffffffff]/>,y+^^$+u''33[v]}]{{@=dd=8ffffffffffffff~~ffff",
"ffff~~ffffffffffffffff}>+y+^+:$x,u''3m6c:}>{@;ddd}ffffffffffffff~~ffff",
"ffff~~fffffffffffffff2}{^^^^^]<((b3''!&c^>}{}+ddd~8fffffffffffff~~ffff",
"ffff~~ffffffffffffffft/>&^,^~s(((j*''!!,;4]}>;=dd#}fffffffffffff~~ffff",
"ffff~~fffffffffffffff}>:|^+~-(((h(,'''''''#>}{~,dd~8ffffffffffff~~ffff",
"ffff~~ffffffffffffff8}{+^^~:((i(((l*'''''';{>>>+,d;}ffffffffffff~~ffff",
"ffff~~ffffffffffffff8}$&^^:h((((((ju'''''';28}}{&=d@2fffffffffff~~ffff",
"ffff~~fffffffffffffft$y,,~:(((((((&''''''';ff8}>:+dd}fffffffffff~~ffff",
"ffff~~ffffffffffffff}yy+^:h((((((lb'''''';+fff8}}y=d:2ffffffffff~~ffff",
"ffff~~fffffffffffff8s|,,~}j((((((lb''''''+$ffff8}^|==]ffffffffff~~ffff",
"ffff~~fffffffffffff{b&^+]2^((((((l_'''u''e8fffff8~_|=:8fffffffff~~ffff",
"ffff~~fffffffffffffe_j^$8f~l((((xj*''u''u{fffffff2m_j+2fffffffff~~ffff",
"ffff~~ffffffffffff81_y~8fftl(xxxxj*''''';8ffffffff{b_^}fffffffff~~ffff",
"ffff~~ffffffffffff2s_12ffff~yx(xxlm''u'*tfffffffffftsh1fffffffff~~ffff",
"ffff~~fffffffffffft-vtfffff2~xxxxlm'''ueffffffffffffts&2ffffffff~~ffff",
"ffff~~fffffffffff8^&]ffffffftvxxx%m'u*m8fffffffffffff]%:ffffffff~~ffff",
"ffff~~fffffffffff2%~fffffffff21|llbuu[2ffffffffffffff8~:ffffffff~~ffff",
"ffff~~fffffffffff2t8ffffffffff8}:^1:tfffffffffffffffff88ffffffff~~ffff",
"ffff~~ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff~~ffff",
"ffff~~ffffffffffffffffffffffffffffffffffffffffffffffffffff2:y$ff~~ffff",
"ffff~~fffffffffffffffffffffffffffffffffffffffffffffffffff8|2t~ff~~ffff",
"ffff~~ffffffffffffffffffffffffffffffffffffffffffffffffffftctffff~~ffff",
"ffff~~fffffffffffffffffffffffffffffffffffffffffffffffffff866}fff~~ffff",
"ffff~~ffffffffffffffffffffffffffffffffffffffffffffffffffff~y2fff~~ffff",
"ffff~~fffffffffffffffffffffffffffffffffffffffffffffffffff8n]82ff~~ffff",
"ffff~~ffffffffffffffffffffffffffffffffffffffffffffffffffffy6%]ff~~ffff",
"ffff~~ffffffffffffffffffffffffffffffffffffffffffffffffffffffffff~~ffff",
"ffff^%~~~~~~~~$ffffffffff$~~~~2fffffffff$~~~~2ffffffff2~~~~~~~~~|~ffff",
"ffff]^~~~~~~~~:ffffffffff$~~~~2fffffffff$~~~~2ffffffff2~~~~~~~~~~tffff",
"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff",
"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff",
"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff",
"ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"};
