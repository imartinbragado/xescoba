/* IMBHeader:  1.0.0
 * Programa:   cuatro_copas.cc 
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
const char * cuatro_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #130507",
"+	c #8E8A85",
"@	c #9C0204",
"#	c #F4C91E",
"$	c #CF874A",
"%	c #8D4937",
"&	c #E04C3A",
"*	c #A9A8A6",
"=	c #4E4A48",
"-	c #8E664B",
";	c #AC8B6E",
">	c #FEEA04",
",	c #EAA840",
"'	c #C8C7C5",
")	c #A86734",
"!	c #676665",
"~	c #AE9254",
"{	c #500304",
"]	c #D0AA91",
"^	c #E4C9B2",
"/	c #CD0406",
"(	c #D4BAA3",
"_	c #764731",
":	c #B6B6B4",
"<	c #917866",
"[	c #D9D8D7",
"}	c #915A37",
"|	c #4D3232",
"1	c #A89780",
"2	c #B69B8B",
"3	c #765642",
"4	c #B8A99D",
"5	c #DAC6B2",
"6	c #2C2A29",
"7	c #E32A21",
"8	c #CA7869",
"9	c #8C2D2D",
"0	c #E8E8E7",
"a	c #F48B29",
"b	c #F76E1E",
"c	c #F1501D",
"d	c #702728",
"e	c #2D0607",
"f	c #AD0C0D",
"g	c #711313",
"h	c #F83911",
"i	c #F00D0D",
"j	c #AD312C",
"k	c #F29840",
"l	c #9A9896",
"m	c #AE774F",
"n	c #C89B7F",
"o	c #E3DACD",
"p	c #D46024",
"q	c #F7B734",
"r	c #F55C2C",
"s	c #777674",
"t	c #F4D61B",
"u	c #5D5D5B",
"v	c #FEFEFC",
"w	c #703B24",
"x	c #8E1819",
"y	c #561A19",
"z	c #3A393A",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvv0s!!!!!!!!!!!!!!!!!!!'vvvvvvvvvvvvvvvvvv'!!!!!!!!!!!!!!!!!!us0vvvv",
"vvvvs6!!!6sssssssssssssss'vvvvvvvvvvvvvvvvvv'+ssssssssssssssss!!6svvvv",
"vvvvu!vvs6vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv0vvvvvvvvvvvvvuuvvvv",
"vvvvu!v'u6vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv0vvvvvvvvvvvvvvvvv!uvvvv",
"vvvvu!0s*6vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv!uvvvv",
"vvvvu!+:+60vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv0000000000vvvvvvvv!uvvvv",
"vvvvu!u...s['''''5'''''o0vvvvvvvvvvvvvvvvv0[''5^^[(55[^'''[0vvvv!uvvvv",
"vvvvu!vv+64(^^^^(((5^5o54:ovvvvvvvvvvvvvv[:(((^5^((5^5^^^5((0vvv!uvvvv",
"vvvvu!vvls5((^((]^^^^^55((4[vvvvvvvvvvvvv:5(^(((]](5^^^5(((('vvvuuvvvv",
"vvvvu!v0:((((]],](((^((((]l[vvvvvvvvvvvvv:;n((]]],((((5(((41'vvv!uvvvv",
"vvvvu!vv4;1n]]]((^(5(((n1+lvvvvvvvvvvvvvv[1+;;;2]]((]4n21+14ovvv!uvvvv",
"vvvvu!vv:11+;+;11111;;+11~4vvvvvvvvvvvvvv0111111l1+l;l11111*vvvv!uvvvv",
"vvvvu!vv[21111112111l11111'vvvvvvvvvvvvvvv*1111111111111111:vvvv!uvvvv",
"vvvvu!vv01111111121111111*0vvvvvvvvvvvvvvv'l1;1111211;11111[vvvv!uvvvv",
"vvvvu!vvv:11;1111211;1111:vvvvvvvvvvvvvvvv021+11112111;l11*vvvvv!uvvvv",
"vvvv!!vvv[l;111111;l;1111ovvvvvvvvvvvvvvvvv:1;111111+;1111:vvvvv!uvvvv",
"vvvvu!vvvv*;+11111+~;l11*vvvvvvvvvvvvvvvvvv0l1;111111;1;110vvvvv!uvvvv",
"vvvvu!vvvv[1111111111111[vvvvvvvvvvvvvvvvvvv'l11111111111'vvvvvv!uvvvv",
"vvvvu!vvvvv4111111111;1:vvvvvvvvvvvvvvvvvvvvv*11111111114vvvvvvv!uvvvv",
"vvvvu!vvvvvv*1111111111vvvvvvvvvvvvvvvvvvvvvv0l11121l;1l0vvvvvvv!uvvvv",
"vvvvu!vvvvvv0l111211+10vvvvvvvvvvvvvvvvvvvvvvvol11111;l0vvvvvvvv!uvvvv",
"vvvv!!vvvvvvv[l11l;11[vvvvvvvvvvvvvvvvvvvvvvvvv'+1l;++[vvvvvvvvv!uvvvv",
"vvvvu!vvvvvvvvl<+1+s4vvvvvvvvvvvvvvvvvvvvvvvvvv03-+<-3vvvvvvvvvv!uvvvv",
"vvvvu!vvvvvvvv2w---w:vvvvvvvvvvvvvvvvvvvvvvvvvvv__3-_-vvvvvvvvvv!uvvvv",
"vvvvu!vvvvvvvv:w3%3_'vvvvvvvvvvvvvvvvvvvvvvvvvvv3_}}_svvvvvvvvvv!uvvvv",
"vvvvu!vvvvvvvv:w-)-_'vvvvvvvvvvvvvvvvvvvvvvvvvvv_3))_-vvvvvvvvvv!uvvvv",
"vvvvu!vvvvvvvv2w-)}_(vvvvvvvvvvvvvvvvvvvvvvvvvv0%3)}3}0vvvvvvvvv!uvvvv",
"vvvv!!vvvvvvvv;_}}-_2vvvvvvvvvvvvvvvvvvvvvvvvvv'_}}}}_[vvvvvvvvv!uvvvv",
"vvvvu!vvvvvvv03%)})_-vvvvvvvvvvvvvvvvvvvvvvvvvv<w}))-w2vvvvvvvvv!uvvvv",
"vvvvu!vvvvvvv4__}})__'vvvvvvvvvvvvvvvvvvvvvvvv5__}}}-w-0vvvvvvvv!uvvvv",
"vvvvu!vvvvvv03w}}}}3w<vvvvvvvvvvvvvvvvvvvvvvvv<w3}%%}_w1vvvvvvvvuuvvvv",
"vvvvu!vvvvvv1ww)}}}}__4vvvvvvvvvvvvvvvvvvvvvv*ww})))}3w_'vvvvvvv!uvvvv",
"vvvvu!vvvvv'__}})p))3_3[vvvvvvvvvvvvvvvvvvvv'3_3)))))m3w-0vvvvvv!uvvvv",
"vvvvu!vvvv0+<<~n~;;;~<<2vvvvvvvvvvvvvvvvvvvv';<;;;$;;;;;+ovvvvvvuuvvvv",
"vvvvu!vvvvvo5'55(55555[0vvvvvvvvvvvvvvvvvvvvv00[^^'55^[ovvvvvvvvuuvvvv",
"vvvvuuvvvvvv*'['['['[[[[[[[[[[[[[[[[[[[[[[[[[o[[[[[[[['['''''''[uuvvvv",
"vvvvuuvvvv+l:*:::::::*:::::::::::::::::::::::::::::::***ll++++l:=uvvvv",
"vvvvu!vv'+:::::::::::::::::::::::::::::::::::*::::*:***ll+++++l:=uvvvv",
"vvvvuuv'l*:::::*::''''':::::::::::::::::'::*:::*:::::**lll++s+l:uuvvvv",
"vvvvu!v*::::*:::*'0'::4:***:*:*:*:*:*::[^4*::::::::::***ll++++l:=uvvvv",
"vvvvuul:::*::::::''.ee{y+:'''::'':''':'[kml''::::*:::*l*ll++++l:=uvvvv",
"vvvvuu*:::::*::::':.z++{=:0[['[0['[0[['o5+:0[['*::*::**lll++++l:=uvvvv",
"vvvvuul*:::::::::[:.=4;{3'xxfj[7&i]chcb'k8[qq##+*:::***lll++++l:u=vvvv",
"vvvvu!*::::::*:::':ee{{gsnj48/:7i98rnnrnkm(,(5t!l*:::**ll+++s+l:=uvvvv",
"vvvvuu::*::*:::::':e6ulgw[jfj/l7x!'bhbc~km[qq#tu+:::****ll++++l:uuvvvv",
"vvvvuul::::::*:::'4e3:0g9)x*8/l79*]h2]r;k$(q*5>!+*:::**lll++++l:=uvvvv",
"vvvvu!s::::::::::'*eedd{|}@xf/s79ln7crb;,m2q##>u+:::****ll++++l:=uvvvv",
"vvvvuu'::*:::*::::l=||d|u+ww=9!%3l2)%=-*,ms<-=<!l*:::**ll+ls++l:=uvvvv",
"vvvvuu'l:::::::*::*+s+s+l*++++lll**l++*na-sl+++l*:::***lll++++l:u=vvvv",
"vvvvuuv*:*::::::::::*::::::*::::*::*:*:*s!l**::::::::***ll++++l:=uvvvv",
"vvvvuuvv+::*::::::::::*:::::::::::::::*****:::::::::***lll++++l:uuvvvv",
"vvvvusvvv*[sl:*:*:::::::*:::*:::::::::::*:::::::*:::::***l*lll*:=uvvvv",
"vvvvu+vvv+l:::::::*:*:::::*:::*:*::*::::::::::::::::::::::::::*:uu0vvv",
"vvvvu+v'+:::::::::::::::::::::::::::::::::::*:::*::::::::::::::'uuvvvv",
"vvvvu+'l::::*::*:'''''::*:::*::::*:::*::*::'::*:::*::':::::::::'uuvvvv",
"vvvvu+*::*::::::'0'::*l*::::::*::::::::::[[['*::::::[[:**:*::::'uu0vvv",
"vvvvuz:::::::*::[l..eey+:':'::''::::''':'0r&p+*:'':'[q~l:''::::'uuvvvv",
"vvvvuu*:::*:::::[l.=!!!*00[':[00[':[0[['[o^];+:00[''0qm*0[['*::'uu0vvv",
"vvvvuu::*:::::::'l.ulll[2ydg<0@j@f;07ii7'rc7hm'^bban[q~'##tt+*:'u!vvvv",
"vvvvuu:::::*::::[+..eeu'%w4%w[@x<fj4&48inr7-pc'bp-$a:q~:#'[>sl:'uuvvvv",
"vvvvuu:::::::*::[+.6=!s'<gg%<[@=:pj'&ihi8rj+$c:b3l5alq~[#t#>!+:'uu0vvv",
"vvvvuu::*:::::::[+.!:''o-<;9x'@%[jj8i;ni<&j*aclb$[qk+q~5#*'>!+:'uuvvvv",
"vvvvu=::::*:::::'+.yyyy:wg}9d:@f7/d<iiii-&%l$&!8baa)+,~4ttt>!+:'uuvvvv",
"vvvv=z:::::*::*::+zzz||s+_w|!'@zd|u+39=93-3+;}s+s}=u+~s<+s=+!*:'uu0vvv",
"vvvv=zl:*:::::::**+s+s+l*+++*:@ws+l*l++llll**+**l++l**lll+++l*''uuvvvv",
"vvvv=u*::::*::::::::*:**::*::*ssl::::::*:::*::*:*:*::*:::*:*:::'u!0vvv",
"vvvv=sv+:::::*::::*:::::::::::***::*:::::*:::::::::::::::::::::'uuvvvv",
"vvvv=uvv*l:::::*::::::::::::*:::::::*:::::::*:::::::::*::::::::'uuvvvv",
"vvvv=!vvv':s**::::::*:::*:*::::::*::::*:::::::*::*:*:::::*:::::'uu0vvv",
"vvvvuuvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv0[0[0[[[[vvvvvvvvuuvvvv",
"vvvvuuvvvvvo'::::::::::'0vvvvvvvvvvvvvvvvvv[::4('5(]5'5::::0vvvvuuvvvv",
"vvvvuuvvv:4455^^(](^5(^^42'0vvvvvvvvvvvvvv4:((55((](5(5^^5(4:vvvuuvvvv",
"vvvvuuvv'(5(((((](^^^^^55(]4vvvvvvvvvvvvv04^(((((]](^^^5((((([vvuuvvvv",
"vvvvuuvv:]((((]],]((5(((((4lvvvvvvvvvvvvv0;2](]],](^((((((]2l0vvuuvvvv",
"vvvvuuvv[+;2n]]]5(^(^((n1++'vvvvvvvvvvvvvv*;+;;12]]](]4211+1:vvvuuvvvv",
"vvvvuuvv0111+;;1111l;1+12110vvvvvvvvvvvvvv:111111l1ll;111121'vvvuuvvvv",
"vvvvuuvvv111~11112111111112vvvvvvvvvvvvvvvo111111111111111120vvvuuvvvv",
"vvvvuuvvv:1111111111111111:vvvvvvvvvvvvvvvvl1;1111111111111*vvvvuuvvvv",
"vvvvuuvvv011;1111211;111120vvvvvvvvvvvvvvvv'11;111121;l1111'vvvvuuvvvv",
"vvvvuuvvvv*l;111111+11111*vvvvvvvvvvvvvvvvv01+111111+1;11120vvvvuuvvvv",
"vvvvuuvvvv[;+11111~;;+111[vvvvvvvvvvvvvvvvvv';;11111~1+~l1:vvvvvuuvvvv",
"vvvvuuvvvvv*~11111l11111*vvvvvvvvvvvvvvvvvvv0l11111111111*vvvvvvuuvvvv",
"vvvvuuvvvvv0l111111111110vvvvvvvvvvvvvvvvvvvv[11111111~11[vvvvvvuuvvvv",
"vvvvuuvvvvvv'1111211111'vvvvvvvvvvvvvvvvvvvvvv:111111l;1:vvvvvvvuuvvvv",
"vvvvuuvvvvvvv:l11211;l:vvvvvvvvvvvvvvvvvvvvvvvv:111111+:vvvvvvvvuuvvvv",
"vvvvuuvvvvvvvv41111+;4vvvvvvvvvvvvvvvvvvvvvvvvvv+111;;1vvvvvvvvvuuvvvv",
"vvvvuuvvvvvvvv[s+;l<s0vvvvvvvvvvvvvvvvvvvvvvvvvv13s+s34vvvvvvvvvuuvvvv",
"vvvvuuvvvvvvvv0_3--3}vvvvvvvvvvvvvvvvvvvvvvvvvvv4w}}3w'vvvvvvvvvuuvvvv",
"vvvvuuvvvvvvvvv__}3_-vvvvvvvvvvvvvvvvvvvvvvvvvvv:w3}}_'vvvvvvvvvuuvvvv",
"vvvvuuvvvvvvvvv3_)-_<vvvvvvvvvvvvvvvvvvvvvvvvvvv]w-)-_'vvvvvvvvvuuvvvv",
"vvvvuuvvvvvvvv0_3))_-vvvvvvvvvvvvvvvvvvvvvvvvvvv1w)}-w]vvvvvvvvvuuvvvv",
"vvvvuuvvvvvvvvo%3}}}30vvvvvvvvvvvvvvvvvvvvvvvvvv<%}}}_+vvvvvvvvvuuvvvv",
"vvvvuuvvvvvvvv4w})}}w'vvvvvvvvvvvvvvvvvvvvvvvvv5__)))_30vvv[[vvvuuvvvv",
"vvvvuuvvvvvvv0-_}})-w<vvvvvvvvvvvvvvvvvvvvvvvvv+w}}})3w4vvvs!vvvuuvvvv",
"vvvvuuvvvvvvv2w_}}%}__'vvvvvvvvvvvvvvvvvvvvvvv'ww}%%%}w3ov[.6z!vuuvvvv",
"vvvvuuvvvvvv[3w3)}}}3w-0vvvvvvvvvvvvvvvvvvvvv0-w_})))}_wsv0=z+!vuuvvvv",
"vvvvuuvvvvv0<w_})))}-_w+vvvvvvvvvvvvvvvvvvvvv<w_-)))))-ww2v!s:*vuuvvvv",
"vvvvuuvvvvv43%-m))))m-}3[vvvvvvvvvvvvvvvvvvv0<3-))))})m--*v!=+vvuuvvvv",
"vvvvuuvvvvv041;$~$;8~;1(vvvvvvvvvvvvvvvvvvvvvv[:422~224:[vvu=[vvuuvvvv",
"vvvvuuvvvvvvvv0oo[[oo0vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv:'vvvuuvvvv",
"vvvv=6uuuuuuuuuuuuuuuuuus0vvvvvvvvvvvvvvvvvv:uuuuuu=uuuuuuuuuuuu6uvvvv",
"vvvvl=uuuuuuuuuuuuuuuuuus0vvvvvvvvvvvvvvvvvv:uuuuuuuuuuuuuuuuuuuu*vvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
