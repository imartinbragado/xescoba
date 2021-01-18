/* IMBHeader:  1.0.0
 * Programa:   as_espadas.cc 
 * Directorio: xescoba-1.2.1/libcartas 
 * Fecha:      Sun Apr 15 16:44:37 CEST 2001 
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
const char * as_espadas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #040404",
"+	c #4F84A8",
"@	c #454545",
"#	c #246898",
"$	c #C4C4C4",
"%	c #5F6468",
"&	c #85A4BC",
"*	c #5E7482",
"=	c #838484",
"-	c #252524",
";	c #724E4C",
">	c #796561",
",	c #4F0F09",
"'	c #7B94A8",
")	c #747574",
"!	c #511915",
"~	c #E4E4E4",
"{	c #6D95AF",
"]	c #676564",
"^	c #555556",
"/	c #5A2524",
"(	c #688498",
"_	c #A4A4A4",
":	c #580F0D",
"<	c #949494",
"[	c #635B56",
"}	c #39759C",
"|	c #6B757D",
"1	c #D4D3D4",
"2	c #8A8A8C",
"3	c #6C6C6C",
"4	c #5C5D5D",
"5	c #333333",
"6	c #F4F4F4",
"7	c #1A1A19",
"8	c #B4B4B4",
"9	c #653734",
"0	c #584240",
"a	c #4D7C9C",
"b	c #316E97",
"c	c #887484",
"d	c #7A6C6B",
"e	c #5F1B1E",
"f	c #765A56",
"g	c #859CAF",
"h	c #598CB1",
"i	c #7F8C96",
"j	c #3C3D3D",
"k	c #4D4D4C",
"l	c #CCCCCC",
"m	c #8DABC4",
"n	c #708EA1",
"o	c #9C9C9C",
"p	c #427EA4",
"q	c #2C2C2C",
"r	c #5B7E94",
"s	c #7C7C7C",
"t	c #ECECEC",
"u	c #729CB8",
"v	c #FEFEFC",
"w	c #BBBBBC",
"x	c #0C0C0C",
"y	c #ACACAC",
"z	c #DBDCDC",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvv6_222222222222221vvvvvvvvv_2222222221vvvvvvvv122222222222222_6vvvv",
"vvvvo4222222222222221vvvvvvvv6_2222222221vvvvvvvv1222222222222224ovvvv",
"vvvv22v6_vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22wqqvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22v^qvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22v^qvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22v^qvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22v4qvvvv6v6vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vk-vvzo==<tvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv228sso$3ff[5yvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvz]fee9;%~vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvv8fe:,,ed_vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvt%f,,,::;]tvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vv6^[!:!::9dwvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvs0e:,,:!f)~vvvvvvvvvvv6zzvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvz%f,,,,:/dyvvvvvvvvv1_s%^_vvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvw]f,,,:,>s6vvvvv6l<3*nu=s6vvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvto]9,,,:9d$vvvvzy||{+{g%8vvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvt<>!,,,ef26vtw|*(}a+'|_tvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvv1]>:,::;dzz<*rbb}p')<tvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvv83;:::/]2s(rb##+(|86vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvy[;,!f[j(ab#}r*)16vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvt<>0;^]^(b#}*)y~vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvv~=4[cd4(a(%<~vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvv~<j^2c^3^|$tvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvv1i%(|k^7q^^2~vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvv6l3*+an=7531$)ovvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvv68%ah++n@42szy8)lvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvv683{h++(%@s%|<3l_26vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvv$3'{hhn|8]3q^3s1ls8vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vv6w|gguun|wts)4^)s<18s~vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vv1]g&m&g3lvvw3y<=3)<w=o6vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vt=sm&mi)16vv62_1<s)ow$3lvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22v8%ug&s<zvvvvv1sly43_$_226vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv226sigi|ytvvvvvvv_2<5k)112s8vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vo4%=lvvvvvvvvv~s3xx]<<2wszvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vtl1tvvvvvvvvvvv$35.53swy3o6vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvt2%.x3sw=j31vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvv1)@xk)__-%=tvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvv6_377])8=538vvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvv~sk.73<l^3)~vvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvv$3q.538_^3o6vvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvv62].x3sw=@)lvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvv13kx^)<_5s=tvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvv_37^o)y4_28vvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvv~s%]$o=3yyszvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvv$)<11)])2)o6vvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvt22$w23@_o3lvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvz)o3j333)<stvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvv6_)jx@3s8y=8vvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvv~=4.x4=_s])zvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvw3q.53<k-)o6vvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvv62]x.434=2)lvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvz3@.73<ly<=tvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvv_%7.k38wl=8vvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvv~=^.x]syz_)1vvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvw3q.^3o$2so6vvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvv6<%7%o)822)lvvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvv1)]=12<_so=tvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv_)yt1)w22syvvvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvts_z~<2w_ys1vvvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv$)yy2)<)loo6vvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv6<=3k33^11)$vvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv1)]@4s=w$_stvvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv6y3]<y)<yz28vvvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv~=<$~ys)8$s1vvvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvw)16~s3k$_o6vvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv6<o~v$3@8z)$vvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvz381~=)lzys6vvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv8s=<o3lo8=yvvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvt=]5@)s3$8)zvvvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv$35.q]swz<<6vvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv<]x.^)=$l)$vvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv1)@.x])s8_=tvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv6y37.@3_wwsyvvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv~s%77]=l82)zvvvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv$)]j@3w122o6vvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv6<=3@3s<=l)$vvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvz)=4]ss8y3s~vvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv68)=<y)8_73yvvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv~2<wlo=8jk)zvvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv$sw8_syyq]<6vvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv6<<8_oszs4)$vvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvz3$zl2<8]%s~vv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv8=ttz)8o5)yvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv~=8t6ys8@s)tv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvlsl6ts_3ss6v22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv6<otvl)3)26v22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvz)l6t=3]y6v22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvy)ll_33lvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvt<s3)^%6vv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv6z$wtvvv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvw4kov22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv]-~v22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv3qtv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv3qtv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv3qtv22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv]-$v22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv3@$v22vvvv",
"vvvv22vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv22vvvv",
"vvvvsk2222222222222s4444)6vvvv_2222222221vvv134444s2222222222222^2vvvv",
"vvvv8s2222222222222)4444)tvvv6_2222222221vvvl%[444)222222222222221vvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
