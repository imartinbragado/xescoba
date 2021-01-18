/* IMBHeader:  1.0.0
 * Programa:   sota_bastos.cc 
 * Directorio: xescoba-1.2.1/libcartas 
 * Fecha:      Sun Apr 15 16:44:39 CEST 2001 
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
const char * sota_bastos_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #030305",
"+	c #89854C",
"@	c #B1C684",
"#	c #A6A958",
"$	c #4A4847",
"%	c #984954",
"&	c #B98B1A",
"*	c #CBA990",
"=	c #EBE8E4",
"-	c #A9A79B",
";	c #D8C991",
">	c #88674E",
",	c #9D9746",
"'	c #ADB68C",
")	c #DAD28C",
"!	c #666559",
"~	c #A86776",
"{	c #B2878D",
"]	c #887741",
"^	c #8A8A8A",
"/	c #E5CC8F",
"(	c #79774E",
"_	c #BCA787",
":	c #86765C",
"<	c #530F09",
"[	c #B19B39",
"}	c #5B2A25",
"|	c #D3CCC2",
"1	c #BCB9B2",
"2	c #B8B45A",
"3	c #C9BAA1",
"4	c #FEFEFC",
"5	c #9B8B7A",
"6	c #29292B",
"7	c #71463F",
"8	c #833B3D",
"9	c #A67A40",
"0	c #B29A86",
"a	c #3E372C",
"b	c #695B3D",
"c	c #585753",
"d	c #955B5F",
"e	c #B1788D",
"f	c #959781",
"g	c #663930",
"h	c #C7C6B6",
"i	c #581C17",
"j	c #BAA223",
"k	c #CA9A9A",
"l	c #9F8644",
"m	c #9A6650",
"n	c #DEB89C",
"o	c #B18C3E",
"p	c #DAD7D2",
"q	c #C49B3C",
"r	c #7A694F",
"s	c #B9A758",
"t	c #977837",
"u	c #D9AA96",
"v	c #7B796B",
"w	c #755C4A",
"x	c #C5C77C",
"y	c #BDB78B",
"z	c #A09A87",
"4444444444444444444444444444444444444444444444444444444444444444444444",
"4444444444444444444444444444444444444444444444444444444444444444444444",
"4444444444444444444444444444444444444444444444444444444444444444444444",
"4444444444444444444444444444444444444444444444444444444444444444444444",
"4444=-^^^^^^^^^p444444444-^^^^p44444444p^^^^-444444444p^^^^^^^^^z44444",
"4444-c^^^^^^^^^p44444444=-^^^^p44444444p^^^^z444444444p^^^^^^^^^cz4444",
"4444^^44hp441^=4444444444444444444444444444444444444444444444444^^4444",
"4444^^=v.-4|6f!4444444444444444444444444444444444444444444444444^^4444",
"4444^^4p.-4!cp.=444444444444444444444444444444444444444444444444^^4444",
"4444^^4p.-46cp.-444444444444444444444444444444444444444444444444^^4444",
"4444^^4p.-46cp.-444444444444444444444444444444444444444444444444^^4444",
"4444^^4p.-4!cp.=444444444444444444444444444444444444444444444444^^4444",
"4444^^4h.z41$z$==pp=44444444444444444444444444444444444444444444^^4444",
"4444^^=^^^|4h^1j[]vfh4444444444444444444444444444444444444444444^^4444",
"4444^^444444=hjjj(((^p44444444444444444444==||=44444444444444444^^4444",
"4444^^444444p[jj&((((-=4444444444444444444'#22,f21=4444444444444^^4444",
"4444^^444444'[jj,r(((^p444444444444444444|#++,,#@x2=444444444444^^4444",
"4444^^44444=sjjjl((((^p444444444444444444p$b+!r+,x@x444444444444^^4444",
"4444^^44444=[](j[((((f=444444444444444444fa]t&jol2x#p44444444444^^4444",
"4444^^44444=2]b+j,(((f=444444444444444444$a+!vtc]s,x'44444444444^^4444",
"4444^^44444ps,rb[[(((-444444444444444444=ab>$clcalq#,=4444444444^^4444",
"4444^^44444=ss]$l[((v'=44444444444444444=$r[]rqlll>+-44444444444^^4444",
"4444^^44444=s[!a,,((v1444444444444444444hvrq&>]oql+c(p4444444444^^4444",
"4444^^44444=2#:$,[:(v|444444444444444444zzrq&tt[q95cv-4444444444^^4444",
"4444^^44444=3ss]+[((vp44444444444444444411roo~mtq[(c#^4444444444^^4444",
"4444^^4444443220+f((+|444444444444444444=4=5o&el[&rb#f4444444444^^4444",
"4444^^444444h222sf((^p444444444444444444444=^5ss_q&+#2=444444444^^4444",
"4444^^444444ps22#(((^=4444444444444444444444-lllosql22p444444444^^4444",
"4444^^444444=y2*s+((f=44444444444444444444=fr9&&t2*r+(=444444444^^4444",
"4444^^444444=y22#(((f=444444444444444444=p(:t&&&t9r(((=444444444^^4444",
"4444^^44444443y2#+((-=4444444444444444p5vroqo&&&lw$(++=444444444^^4444",
"4444^^4444444|yy'+((-=444444444444444hz33>]sq&&&jrv+!f=444444444^^4444",
"4444^^4444444p322v(v'444444444444444|v;/ne{9]tmr+yyhzv=444444444^^4444",
"4444^^4444444=hy#((v1=44444444444444fyun////;;*3;//;)'-444444444^^4444",
"4444^^4444444=hy'+((144444444444444|f;ek/////////////;+-44444444^^4444",
"4444^^44444444|y@f(+h4444444444444=fh;k0x/;u;x////////;-p4444444^^4444",
"4444^^44444444p1y+(+h44444444444441__0@@;/k~0@//)/kk;/;3-4444444^^4444",
"4444^^44444444=1@^(^'_|4444444444=^0_70h;//n'@)/x3ek//;)y4444444^^4444",
"4444^^444444444hy,(--ll'=4444444=z0**7>;;///x;x/;'3*////;h444444^^4444",
"4444^^444444444p'-^+f5tlt(f4==4=50uke0wx////////))|l*////-444444^^4444",
"4444^^444444444=p^(wt&&&&9_;-^v5kkkwp=r;/////un/;;yr0///;-=44444^^4444",
"4444^^4444444444pvbbt&&&&&5/;*n/;;5-4=:;////;e{;/x-c0/);h1444444^^4444",
"4444^^4444444444|-rbt&&&&9q/nek//zz444e;/////n0;;yfcy/;;-4444444^^4444",
"4444^^4444444444='fz3hppy!v'/ku/3f=4445*k////)y/n!bb5/;^|4444444^^4444",
"4444^^4444444444=0r'44444=p-^:^05p4444zk~u//////3!9&o*-_44444444^^4444",
"4444^^4444444444=3:344444444=|1h=444445nun/////3,9&&&0-=44444444^^4444",
"4444^^44444444444pfp44444444444444444=5x/)//;/;+]9o&o:=444444444^^4444",
"4444^^44444444444=|444444444444444444=w';/y@x;;+rtto+h4444444444^^4444",
"4444^^4444444444444444444444444444444=rv:::^z00z::rl=44444444444^^4444",
"4444^^44444444444444444444444444444443g8gg7gbr:rww>|444444444444^^4444",
"4444^^444444444444444444444444444444=><<<<<<<i}gii}p444444444444^^4444",
"4444^^444444444444444444444444444444_i<<<<<<<<<<<<<d=44444444444^^4444",
"4444^^444444444444444444444444444444g<<<<<<<<<<<<<<i|44444444444^^4444",
"4444^^44444444444444444444444444444h<<<<<<<<<<<<<<<<:44444444444^^4444",
"4444^^444444444444444444444444444440<<<<<<<<<<<<<<<<}|4444444444^^4444",
"4444^^44444444444444444444444444444{<<<<<<<<<<<<<<<<i04444444444^^4444",
"4444^^4444444444444444444444444444=7<<<<<<<<<<<<<<<<<g4444444444^^4444",
"4444^^4444444444444444444444444444_<<<<<<<<<<<<<<<<<<ip444444444^^4444",
"4444^^44444444444444444444444444440<<<<<<<<<<<<<<<<<<<:444444444^^4444",
"4444^^4444444444444444444444444444-<<<<<<<<<<<<<<<<<<<>=44444444^^4444",
"4444^^4444444444444444444444444444h<<<<<<<<<<<<<<i<<<<m444444444^^4444",
"4444^^4444444444444444444444444444=g<<<<<<<<<<<<<<i<<<>=44444444^^4444",
"4444^^4444444444444444444444444444|i<<<<<<<<i<<<<<<<<<>=44444444^^4444",
"4444^^4444444444444444444444444444-<<<<<<<<<<<<<<<<<<<5444444444^^4444",
"4444^^44444444444444444444444444441}<<<<<<<<<<<<<<<<<}=444444444^^4444",
"4444^^44444444444444444444444444444-}i<<<<i7i<<<<<<<i:4444444444^^4444",
"4444^^44444444444444444444444444444p%%8g88{=*gii<<<<>=4444444444^^4444",
"4444^^444444444444444444444444444441%%%%%~p44{8%8888=44444444444^^4444",
"4444^^444444444444444444444444444443%%%%%e=44=%%%%%%=44444444444^^4444",
"4444^^44444444444444444444444444444p%%%%%e=444~%%%%%=44444444444^^4444",
"4444^^44444444444444444444444444444=%%%%%~=444~%%%%%=44444444444^^4444",
"4444^^44444444444444444444444444444=%%%%%~p444{%%%%~=44444444444^^4444",
"4444^^44444444444444444444444444444=%%%%%dp444|%%%%~444444444444^^4444",
"4444^^44444444444444444444444444444=%%%%%dp444=~%%%e=44444444444^^4444",
"4444^^44444444444444444444444444444=%%%%%{=444=~d>>5444444444444^^4444",
"4444^^44444444444444444444444444444=dddmm34444=+:>rr=44444444444^^4444",
"4444^^44444444444444444444444444444=:rr:rp4444=+r:::=44444444444^^4444",
"4444^^44444444444444444444444444444=:::r:p4444=::r:rh44444444444^^4444",
"4444^^44444444444444444444444444444=(r](rp4444=+:r:(h44444444444^^4444",
"4444^^44444444444444444444444444444=::r::44444=+::>rh44444444444^^4444",
"4444^^44444444444444444444444444444=::rr:44444=::(::h44444444444^^4444",
"4444^^44444444444444444444444444444=:r:(544444=+rr:rp44444444444^^4444",
"4444^^44444444444444444444444444444=:>]r-44444=:::::h44444444444^^4444",
"4444^^44444444444444444444444444444=:l55|44444p55__0-44444444444^^4444",
"4444^^44444444444444444444444444444=__*_p4444p__*_____4444444444^^4444",
"4444^^44444444444444444444444444444=____p444443_s___'p4444444444^^4444",
"4444^^44444444444444444444444444444=____=44444p*__00p44444444444^^4444",
"4444^^444444444444444444444444444441s__*=44444p_0q*0|44444444444^^4444",
"4444^^4444444444444444444444444444|__0_3=44444=*__*_y|=444444444^^4444",
"4444^^444444444444444444444444444;*0s0_|444444p__k__q___|=444444^^4444",
"4444^^4444444444444444444444444=|0__*034444444=_s_0__0_0__h44444^^4444",
"4444^^4444444444444444444444444n_0___3=4444444=y0____s___0_34444^^4444",
"4444^^444444444444444444444444y____y=4444444444*________s___3444^^4444",
"4444^^44444444444444444444444=__s_3p444444444444p)pp4=1__0*__=44^^4444",
"4444^^44444444444444444444444=__*h=44444444444444444444=======44^^4444",
"4444^^444444444444444444444444===4444444444444444444444444444444^^4444",
"4444^^4444444444444444444444444444444444444444444444444h^44-v^14^^4444",
"4444^^444444444444444444444444444444444444444444444444h$-$4=6$44^^4444",
"4444^^444444444444444444444444444444444444444444444444!c|.=46c44^^4444",
"4444^^4444444444444444444444444444444444444444444444446cp.-46c44^^4444",
"4444^^4444444444444444444444444444444444444444444444446c|.-46c44^^4444",
"4444^^444444444444444444444444444444444444444444444444!cp.=46c44^^4444",
"4444^^444444444444444444444444444444444444444444444444=6^$446614^^4444",
"4444^^44444444444444444444444444444444444444444444444441f=44-=44^^4444",
"4444v$^^^^^^^^-4444444444-^^^^p444444444-^^^^p44444444|^^^^^^^^^c^4444",
"44441v^^^^^^^^z444444444=-^^^^p44444444=-^^^^p44444444p^^^^^^^^^^|4444",
"4444444444444444444444444444444444444444444444444444444444444444444444",
"4444444444444444444444444444444444444444444444444444444444444444444444",
"4444444444444444444444444444444444444444444444444444444444444444444444",
"4444444444444444444444444444444444444444444444444444444444444444444444"};