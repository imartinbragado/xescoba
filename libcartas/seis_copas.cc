/* IMBHeader:  1.0.0
 * Programa:   seis_copas.cc 
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
const char * seis_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #050507",
"+	c #938374",
"@	c #CBC4BF",
"#	c #A6A3A1",
"$	c #4B4B4C",
"%	c #7E6254",
"&	c #C7A892",
"*	c #B38461",
"=	c #9D6439",
"-	c #7F4425",
";	c #E5E4E2",
">	c #C7BAB0",
",	c #815439",
"'	c #D7D4D2",
")	c #A4947F",
"!	c #9B7457",
"~	c #965527",
"{	c #BAB4AD",
"]	c #767371",
"^	c #DDC3AD",
"/	c #AA967D",
"(	c #DABBA0",
"_	c #B9A492",
":	c #BE9B80",
"<	c #D6AD8D",
"[	c #A09B91",
"}	c #8B644A",
"|	c #845C44",
"1	c #A9642E",
"2	c #E0CBB8",
"3	c #AB9B83",
"4	c #8D6C56",
"5	c #2A2A2A",
"6	c #713B21",
"7	c #575757",
"8	c #F5F4F4",
"9	c #131314",
"0	c #3B3B3C",
"a	c #744630",
"b	c #AD7343",
"c	c #8C7366",
"d	c #755443",
"e	c #9F8372",
"f	c #9D7C69",
"g	c #716C67",
"h	c #804D31",
"i	c #9C5C2E",
"j	c #CCCBCA",
"k	c #DDDBDA",
"l	c #B27C53",
"m	c #ECECEB",
"n	c #8B8A8C",
"o	c #C7B09F",
"p	c #B8ACA3",
"q	c #AEADAA",
"r	c #B38B6C",
"s	c #A16C3D",
"t	c #BEBCB8",
"u	c #AA6B3A",
"v	c #8D7C6D",
"w	c #9E8E7D",
"x	c #7B7B7C",
"y	c #FEFEFC",
"z	c #1E1E1C",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyy8#[#qqqq{q{q{q{q{q{q{;yyyyyyyyyyyyyyyyyy;{q{q{q{q{q{q{qqq#[[#8yyyy",
"yyyy#g#{{n#jjjjjjjjjjjjjjmyyyyyyyyyyyyyyyyyymjjjjjjjjjjjjjjj@tq[g[yyyy",
"yyyyn[yk0tyyy8y8y8y88yyyyyyyyyyyyyyyyyyyyyyyy88888m888888yyyyyyynnyyyy",
"yyyyn#;zqyyyyyyyyyyyy8yyyyyyyyyyyyyyyyyyyyy8yyy8yyyy8yyyyy8yyyyy[nyyyy",
"yyyy[#n.g]8yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy[nyyyy",
"yyyyn#75m.qyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy8m;;;mm;m8yyyyyyyy[nyyyy",
"yyyy[#]5y.]kj@@@@@@j@@jk8yyyyyyyyyyyyyyyyym'@@@2''^^22j@@@kmyyyy[nyyyy",
"yyyyn#t5j9[>22^2((^^^^2@p{kyyyyyyyyyyyyyyk{@((22(((^2^^22^>t;yyy[nyyyy",
"yyyy[#yqg3^((^((<^2222^^((p'yyyyyyyyyyyyy{(^((((<<(^222^^(((@8yy[nyyyy",
"yyyyn#ymp(((<<&<<((^^^(((o)'yyyyyyyyyyyyyt)_(<<<<<(((^(((<_#jyyy[wyyyy",
"yyyy[#yyqw)_&&<<(^(^((o:)+wyyyyyyyyyyyyyy')ww)w/&oo>oo_3w)w#;yyy[nyyyy",
"yyyyn#yy>3))ew))3/[)www))/{yyyyyyyyyyyyyym)/)w//))))ww)3333_8yyy[nyyyy",
"yyyy[#yy'3///)3/33//)3333)jyyyyyyyyyyyyyyy#3////)/33))/))33{yyyy[nyyyy",
"yyyyn#yym3//)/)3/33/))/)33myyyyyyyyyyyyyyyj//)/[3)33)/)3[)3'yyyy[nyyyy",
"yyyy[#yyy{[))//[/33))/)/[{yyyyyyyyyyyyyyyy83))))3/33)w))/3#8yyyy[nyyyy",
"yyyyn#yyyk)w))//[/))w/)3/kyyyyyyyyyyyyyyyyytww)))3))w))))/>yyyyy[nyyyy",
"yyyy[#yyy8_w)))/)ww)w/)/#yyyyyyyyyyyyyyyyyym/w)3//))r)w//[myyyyy[nyyyy",
"yyyyn#yyyyk))//333/)w//3kyyyyyyyyyyyyyyyyyyy@)/)/3/3/)//3jyyyyyy[wyyyy",
"yyyy[#yyyyyp/)3/3////)/tyyyyyyyyyyyyyyyyyyyy8p)3/333//))_yyyyyyy[nyyyy",
"yyyyn#yyyyy8#3)3/33/)[38yyyyyyyyyyyyyyyyyyyyy8[)3)33/))[myyyyyyy[nyyyy",
"yyyy[#yyyyyy;))3333)w3kyyyyyyyyyyyyyyyyyyyyyyyk[3)3)w))kyyyyyyyy[nyyyy",
"yyyyn#yyyyyyyk)/))ww)kyyyyyyyyyyyyyyyyyyyyyyyyytw)w)w+'yyyyyyyyy[nyyyy",
"yyyy[#yyyyyyyywvw)wcqyyyyyyyyyyyyyyyyyyyyyyyyyy;|4+v%%8yyyyyyyyy[nyyyy",
"yyyyn#yyyyyyyy#6}}%6{yyyyyyyyyyyyyyyyyyyyyyyyyymda~}a%yyyyyyyyyy[nyyyy",
"yyyy[#yyyyyyyy{6|,|a@yyyyyyyyyyyyyyyyyyyyyyyyyyyda~}acyyyyyyyyyy[nyyyy",
"yyyyn#yyyyyyyy{6|1|ajyyyyyyyyyyyyyyyyyyyyyyyyyy8h,ssh4yyyyyyyyyy[wyyyy",
"yyyy[#yyyyyyyy36=1}->yyyyyyyyyyyyyyyyyyyyyyyyyy;h,ii,|8yyyyyyyyy[nyyyy",
"yyyyn#yyyyyyyye-|~}-3yyyyyyyyyyyyyyyyyyyyyyyyyy@6|ii,h'yyyyyyyyy[nyyyy",
"yyyy[#yyyyyyym|h=i=a}yyyyyyyyyyyyyyyyyyyyyyyyyye6|i1|63yyyyyyyyy[nyyyy",
"yyyyn#yyyyyyyp6,~iuha'yyyyyyyyyyyyyyyyyyyyyyyyjaaiii}a}myyyyyyyy[nyyyy",
"yyyy[#yyyyyymd6|~~~,6c8yyyyyyyyyyyyyyyyyyyyyyyc6d~~h~d6)yyyyyyyy[nyyyy",
"yyy8[[yyyyyy)6a=i~~}aa{yyyyyyyyyyyyyyyyyyyyyy_66|i11~|6a@yyyyyyy[nyyyy",
"yyyyn#yyyyytha|iuu1i|6d'yyyyyyyyyyyyyyyyyyyyjda,s1111s,6%;yyyyyy[nyyyy",
"yyyyn[yyyymf}4**lll*r4}3yyyyyyyyyyyyyyyyyyyyt!se*llllle!e;yyyyyynnyyyy",
"yyyyn[yyyyy'>>>(<o<o(>@;yyyyyyyyyyyyyyyyyyyyym'j^(>>(@j'8yyyyyyynnyyyy",
"yyyynnyyyyyyy88m8m8888yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyynnyyyy",
"yyyynnyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyynnyyyy",
"yyyynnyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyymkkkkkkkkmyyyyyyyynnyyyy",
"yyyynnyyyym'@{{{{o{{{{@'myyyyyyyyyyyyyyyyymj{p{(>^<o(^>op{j8yyyynnyyyy",
"yyyynnyykppo^^^^<<(^^^^>_pkyyyyyyyyyyyyyy'p(((^^((<^^^^22^opkyyynnyyyy",
"yyyynnym{(^((^((<^^^^22^((_'yyyyyyyyyyyyy{((((<(&<<^^2^^(((({8yynnyyyy",
"yyyynnym3(((<<<<<((^^^(((o)'yyyyyyyyyyyyytw_o(<<<<(((((((<_[@yyynnyyyy",
"yyyynnyy[n)_&<&((^^^((o3)wwyyyyyyyyyyyyyyk))www/&o>>op_3)ww3;yyynnyyyy",
"yyyynnyyo))weww)/3))www))){yyyyyyyyyyyyyym)))//[)/ww))))33338yyynnyyyy",
"yyyynnyyj/3/)///33/)//33/)jyyyyyyyyyyyyyyy#3//)//333)/[)333{yyyynnyyyy",
"yyyynnyym3//)/33/333)/)/33myyyyyyyyyyyyyyyj//w/33)33//)/))3'yyyynnyyyy",
"yyyynnyyyq/)))/[/3/))/)/[{yyyyyyyyyyyyyyyym3/w/w3333))))/3[8yyyynnyyyy",
"yyyynnyyyk)w))//3[/ww/)3/kyyyyyyyyyyyyyyyyytw))/)/)www)/)/tyyyyynnyyyy",
"yyyynnyyyy_ww))/)w))w/))#yyyyyyyyyyyyyyyyyym/w/3)//))r)/)3myyyyynnyyyy",
"yyyynnyyyyk))//3//)))//3kyyyyyyyyyyyyyyyyyyy@))/333//))/3jyyyyyynnyyyy",
"yyyynnyyyyy{/)333////)/tyyyyyyyyyyyyyyyyyyyy8p)/)3333/))qyyyyyyynnyyyy",
"yyyynnyyyyy8#3)/333))[38yyyyyyyyyyyyyyyyyyyyy8[)3)33))/[;yyyyyyynnyyyy",
"yyyynnyyyyyym))/333)w3kyyyyyyyyyyyyyyyyyyyyyyyk[33//ww3;yyyyyyyynnyyyy",
"yyyynnyyyyyyyk)3/)ww)kyyyyyyyyyyyyyyyyyyyyyyyyy@n))w)+'yyyyyyyyynnyyyy",
"yyyynnyyyyyyyywvwwwcqyyyyyyyyyyyyyyyyyyyyyyyyyy;|%+v%|8yyyyyyyyynnyyyy",
"yyyynnyyyyyyyy36%4%6{yyyyyyyyyyyyyyyyyyyyyyyyyy8ad~|a4yyyyyyyyyynnyyyy",
"yyyynnyyyyyyyy{6,~|a@yyyyyyyyyyyyyyyyyyyyyyyyyyydai}a4yyyyyyyyyynnyyyy",
"yyyynnyyyyyyyyo6}=|ajyyyyyyyyyyyyyyyyyyyyyyyyyy8h,=sa4yyyyyyyyyynnyyyy",
"yyyynnyyyyyyyy36}1}->yyyyyyyyyyyyyyyyyyyyyyyyyy;h,i=,|8yyyyyyyyynnyyyy",
"yyyynnyyyyyyyye-i~}-3yyyyyyyyyyyyyyyyyyyyyyyyyy@6|ii,h'yyyyyyyyynnyyyy",
"yyyynnyyyyyyym|h=i=a}yyyyyyyyyyyyyyyyyyyyyyyyyye6|i1|63yyyyyyyyynnyyyy",
"yyyynnyyyyyyyp6d~iuha'yyyyyyyyyyyyyyyyyyyyyyyyjaaiii}a}myyyyyyyynnyyyy",
"yyyynnyyyyyymd6|~~~d6c8yyyyyyyyyyyyyyyyyyyyyyyc6di~h~d6)yyyyyyyynnyyyy",
"yyyynnyyyyyy)6a=i~~}aa{yyyyyyyyyyyyyyyyyyyyyy_66,i11~|6a@yyyyyyynnyyyy",
"yyyynnyyyyy>a6,i1u1i|6d'yyyyyyyyyyyyyyyyyyyyjd6|11111sd6%;yyyyyynnyyyy",
"yyyynnyyyym4,}flbuubf|,wyyyyyyyyyyyyyyyyyyyy{4}cbuuusu!}ckyyyyyynnyyyy",
"yyyynnyyyyy'__:::::::_o;yyyyyyyyyyyyyyyyyyyyy;j>oo__&o>'8yyyyyyynnyyyy",
"yyyynnyyyyyyym8;;;;;m8yyyyyyyyyyyyyyyyyyyyyyyyyyyy8yyyyyyyyyyyyynnyyyy",
"yyyynnyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyynnyyyy",
"yyyynnyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy;kk'kkkk;yyyyyyyynnyyyy",
"yyyynnyyyyykj>{{>po{{{>j;yyyyyyyyyyyyyyyyyyktpp>(^(&(>^op{t;yyyynnyyyy",
"yyyynnyy8tp&^^^((<(^^(^^p_t8yyyyyyyyyyyyy8{o((^^((<(^^(^2((ptyyynnyyyy",
"yyyynnyy@(^(((^(<(^2222^((oq8yyyyyyyyyyyy;p(((<(<<<(^22^^(((o'yynnyyyy",
"yyyynnyy{p(((<<<<<((^(((((&[yyyyyyyyyyyyym)3&((<<<(^(^^(((&3[8yynnyyyy",
"yyyynnyyjww/&&&<((^(^((_/nwjyyyyyyyyyyyyyy#)wwww_&oooop3)ww/pyyynnyyyy",
"yyyynnyy;)))www)33)[www)3/);yyyyyyyyyyyyyyt))))3)))))ww33333@yyynnyyyy",
"yyyynnyyy33)))//333/)))/3/[yyyyyyyyyyyyyyyk//))//)33////3)3#;yyynnyyyy",
"yyyynnyyy{3/)))3/33)3//[/3>yyyyyyyyyyyyyyy8[/)))33)33)))/3)_8yyynnyyyy",
"yyyynnyyyk3)w3)3)33/)))/)3;yyyyyyyyyyyyyyyy@/)/))333/))/)3[jyyyynnyyyy",
"yyyynnyyyyqr)))3333ww/)/3#yyyyyyyyyyyyyyyyym)ww))3))www))/3myyyynnyyyy",
"yyyynnyyyykww)))))w)w)/)3'yyyyyyyyyyyyyyyyyyt))/)3)/))w)//tyyyyynnyyyy",
"yyyynnyyyyy_w//33///))//qyyyyyyyyyyyyyyyyyyy8/))//33//)//#8yyyyynnyyyy",
"yyyynnyyyyy;)//3333)//)3;yyyyyyyyyyyyyyyyyyyy'3/3//3//)//kyyyyyynnyyyy",
"yyyynnyyyyyy'))//33/))[@yyyyyyyyyyyyyyyyyyyyyyt)/)333)w)tyyyyyyynnyyyy",
"yyyynnyyyyyyy{w3)33)w){yyyyyyyyyyyyyyyyyyyyyyyyq[/3/))){yyyyyyyynnyyyy",
"yyyynnyyyyyyy8q)3))rwqyyyyyyyyyyyyyyyyyyyyyyyyy8w)))ww[8yyyyyyyynnyyyy",
"yyyynnyyyyyyyyk4+)w+4myyyyyyyyyyyyyyyyyyyyyyyyyy3dc+ch{yyyyyyyyynnyyyy",
"yyyynnyyyyyyyymhd44d|yyyyyyyyyyyyyyyyyyyyyyyyyyy#6|~%6@yyyyyyyyynnyyyy",
"yyyynnyyyyyyyyyda,,a4yyyyyyyyyyyyyyyyyyyyyyyyyyyo6|~%a@yyyyyyyyynnyyyy",
"yyyynnyyyyyyyyyah=sacyyyyyyyyyyyyyyyyyyyyyyyyyyyp6}1|a@yyyyyyyyynnyyyy",
"yyyynnyyyyyyyy8a,==h%yyyyyyyyyyyyyyyyyyyyyyyyyyy/6=i}-pyyyyyyyyynnyyyy",
"yyyynnyyyyyyyy'h,~i,|;yyyyyyyyyyyyyyyyyyyyyyyyyy4h}~i-eyyyyyyyyynnyyyy",
"yyyynnyyyyyyyy_6}=i|6>yyyyyyyyyyyyyyyyyyyyyyyyy'-h=1sa,myyyykj;ynnyyyy",
"yyyynnyyyyyyym}-|~1}6eyyyyyyyyyyyyyyyyyyyyyyyyyv6,~iid6_yyyj$[7mnnyyyy",
"yyyynnyyyyyyy#6ai~~iaa@yyyyyyyyyyyyyyyyyyyyyyyj66}~h~|6dkyy70'ztnnyyyy",
"yyyynnyyyyyykh6|i~~id64myyyyyyyyyyyyyyyyyyyyy;%6h~11i|h6c8y70'zqnnyyyy",
"yyyynnyyyyy8c6a|111i}a6wyyyyyyyyyyyyyyyyyyyyyf6a4111114a6#y@$g9tnnyyyy",
"yyyynnyyyyy_dh4luuuub4hd'yyyyyyyyyyyyyyyyyyy8v|}su11=ss}}#yymg0mnnyyyy",
"yyyynnyyyyymp)rrr***r)/>yyyyyyyyyyyyyyyyyyyyy8'{p_:/::p>kyyyq$jynnyyyy",
"yyyynnyyyyyyy8m;kk'k;myyyyyyyyyyyyyyyyyyyyyyyyyyy8888yyyyyy't;yynnyyyy",
"yyyyx$nnnnnnnnnnnnnnnnnn#yyyyyyyyyyyyyyyyyyy'nnnnnnnnnnnnnnnnnnn7nyyyy",
"yyyytxnnnnnnnnn+nnnnnnnn#8yyyyyyyyyyyyyyyyyy'nnnnnnnnnnnnnnnnnnnn'yyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy",
"yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy"};
