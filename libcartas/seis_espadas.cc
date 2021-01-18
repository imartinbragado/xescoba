/* IMBHeader:  1.0.0
 * Programa:   seis_espadas.cc 
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
const char * seis_espadas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #050507",
"+	c #5B85A0",
"@	c #C4C4C4",
"#	c #454544",
"$	c #85A2B9",
"%	c #366E96",
"&	c #858584",
"*	c #666565",
"=	c #A4A4A4",
"-	c #252524",
";	c #8C9399",
">	c #B4B4B4",
",	c #68433E",
"'	c #E5E5E4",
")	c #737374",
"!	c #979694",
"~	c #5F2723",
"{	c #7592A7",
"]	c #D4D4D5",
"^	c #AAAAAC",
"/	c #675758",
"(	c #447695",
"_	c #6F8593",
":	c #683D3C",
"<	c #8E9CA7",
"[	c #BBBBBC",
"}	c #52100C",
"|	c #555455",
"1	c #867572",
"2	c #9B8C8A",
"3	c #796468",
"4	c #AFAEAC",
"5	c #F4F4F4",
"6	c #353534",
"7	c #5D666E",
"8	c #141414",
"9	c #9CB0C0",
"0	c #547C98",
"a	c #745553",
"b	c #591C15",
"c	c #647B8E",
"d	c #5C8CB1",
"e	c #818D95",
"f	c #779CB9",
"g	c #DADADC",
"h	c #9CA3A7",
"i	c #62302F",
"j	c #CBCBCC",
"k	c #6B6C6B",
"l	c #6D4C4A",
"m	c #9C9D9D",
"n	c #758B97",
"o	c #7C7B7C",
"p	c #4A7E9C",
"q	c #826E6C",
"r	c #5D5D5D",
"s	c #FEFEFC",
"t	c #785D5C",
"u	c #4C4C4C",
"v	c #2D2D2C",
"w	c #EDEDEC",
"x	c #3C3C3C",
"y	c #707D86",
"z	c #8B8A8C",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssss5=zzzzzzzzzzzzzz]sss55555w=zzzzzzz;m]ssssssss]zzzzzzzzzzzzzz=5ssss",
"ssssmrzzzzzzzzzzzzzzj5www''''gmzzzzzzz!m]sssss55w@zzzzz&&zz&&&z&rmssss",
"sssszzssssssssssssssss55sssssssssssssssssssssssss5s5sssssssssssszzssss",
"ssssz&5s')mssssss55ssss5sssssssssssw5ssssssssssssssss5ssssssssssmzssss",
"sssszz5]v@sssssw^2!]ss5wsssssssssw>2=gsssssssssssss5j^[wsssssssshzssss",
"ssssz&w#x]5ssssjl~:mssswsssssssssjai:!sssssssssssss]3:lmssssssss=zssss",
"sssszzj.yxossssj:}~!ss5w5ssssssssj:b~msssssssssssssj:b~!ssssssss4zssss",
"ssssz&j.^o.ssss]l}~4ss5wsssssssss],}~4sssssssssssss],}~^ssssssss^z5sss",
"ssssz&w-4ovssssgl}i[ss5wsssssssssgl}~[sssssssssssssgl}~>ssssssss4;5sss",
"ssssz&w=|u@ssss'3}:jss5wsssssssss'3}:@sssssssssssss'a}:@ssssssss4zssss",
"sssszz5ssssssssw1~agss5w5ssssssssw1~tgssssssssssssswqblgssssssss4zssss",
"ssssz&wsssw@4men7trn;<4[wsssw@4mee7trn;<4@wssssw]@>^*a/h[@]'ssss^zssss",
"sssszz5ss';{$fd+c/7(%%pn9ws';{$fd+c/7(%%p_e]ssg[${dpc37((%0_m'ss^zssss",
"ssssz&wssw^m<<<;r|kn<{e;[wsw^m<<<;r|kn<{{;hgs5][9<n_r#rc0c+nejss4zssss",
"sssszz5sssss555@*)=455w'5sssss555@*k=>5555ssss5w''w[7y=^wgggwsss^zssss",
"ssssz&5ssssssssj!)^[ss5wsssssssssj!o^>sssssssssssssj&km[ssssssss^zssss",
"ssssz&wssssssssjm)=[ss5w5ssssssssjm)=[sssssssssssssj^o^[ssssssss^zssss",
"ssssz&5ssssssss@#)4[ssswsssssssss[#)4[sssssssssssss@r)=[ssssssss^zssss",
"ssssz&5ssssssss[vkm>ss5wsssssssss[vkm>sssssssssssss[v)=>ssssssss^z5sss",
"ssssz&5ssssssss[6km[ssswsssssssss[6km[sssssssssssss[vkm[ssssssss^zssss",
"ssssz&5ssssssss[6)k4ss5wsssssssss[6)k4sssssssssssss[6)o4ssssssss^zssss",
"ssssz&5ssssssss>v))^ss5wsssssssss>v))^sssssssssssss[v)k4ssssssss^zssss",
"ssssz&5ssssssss>|&o>ss5w5ssssssss[u&o>sssssssssssss>x&o>ssssssss=zssss",
"ssssz&5ssssssss@mmk>ssswsssssssss[=m)>sssssssssssss[z!k4ssssssss^&ssss",
"ssssz&5ssssssss[zo&@ss5wsssssssss[zo&@sssssssssssss@hz&@ssssssss^zssss",
"ssssz&5ssssssss>6r&[ss5wsssssssss>6|&[sssssssssssss>#r&[ssssssss=&ssss",
"ssssz&5ssssssss>-*z[ss5w5ssssssss>v*z[sssssssssssss>-rz[ssssssss^zssss",
"ssssz&5ssssssss4-rk[ssswsssssssss4-rk[sssssssssssss>-*)[ssssssss=&ssss",
"ssssz&5ssssssss>-k2[ss5wsssssssss4-kz[sssssssssssss>-ko[ssssssss^zssss",
"ssssz&5ssssssss4#&>@ssswsssssssss>#&>@sssssssssssss46o^@ssssssss=&ssss",
"ssssz&5ssssssss[=mm@ss5wsssssssss[=mm@sssssssssssss[&!=@ssssssss=zssss",
"ssssz&5ssssssss[4mz[ss5wsssssssss[4=z[sssssssssssss[[=z[ssssssss^&ssss",
"ssssz&5ssssssss>k&!@ss5wsssssssss>*&!@sssssssssssss>oz!@ssssssss=zssss",
"ssssz&5ssssssss>&o^jssswsssssssss>&o^jsssssssssssss>kohjssssssss=&ssss",
"ssssz&5ssssssss[]m^jss5wsssssssss@jm4jsssssssssssss[@!4jssssssss=&ssss",
"ssssz&5ssssssss[[&mjss5wsssssssss>@&mjsssssssssssss[jz=jssssssss=zssss",
"sssszz5ssssssss4k&4jss5wsssssssss^k&4jsssssssssssss4zo=jssssssss=&ssss",
"ssssz&sssssssss=-)=jss5wsssssssss=-)=jsssssssssssss=6&>jssssssss=zssss",
"ssssz&5ssssssss=-k>jss5wsssssssss=-k>jsssssssssssss=-*^jssssssss=&ssss",
"ssssz&5ssssssss^6)=jss5wsssssssss^6)=jsssssssssssss=vk^jssssssss=zssss",
"ssssz&5ssssssss4rz^jss5wsssssssss4rz^jsssssssssssss4|&^jssssssss=&ssss",
"ssssz&sssssssss4&z!jss5wsssssssss4&z!jsssssssssssss4)zmjssssssss=zssss",
"ssssz&5ssssssss>4mzjss5wsssssssss>4mzjsssssssssssss>4;mjssssssss=&ssss",
"sssszosssssssss>>mrjssswsssssssss>>mrjsssssssssssss>^mrjssssssss=zssss",
"ssssz&5ssssssss[]=kjss5wsssssssss[]=kjsssssssssssss[j^*jssssssssh&ssss",
"sssszosssssssss>g=kjss5wsssssssss>g=kjsssssssssssss>g=kjssssssss=&ssss",
"ssssz&5ssssssss>g;kjss5wsssssssss>g;kjsssssssssssss[gm*jssssssss=&ssss",
"ssssz&sssssssssgm)m5ss5wsssssssssgm)m5sssssssssssss@>oz'ssssssss=&ssss",
"ssssz&5sssssssss]='sss5wssssssssss]='sssssssssssssss>o]sssssssss=&ssss",
"ssssz&ssssssssssssssss5wssssssssssssssssssssssssssssssssssssssssm&ssss",
"ssssz&ssssssssssssssss5wssssssssssssssssssssssssssssssssssssssssm&ssss",
"ssssz&ssssssssssssssss5wssssssssssssssssssssssssssssssssssssssss!zssss",
"ssssz&ssssssssssssssss5wsssssssssssssssssssssssssssssssssssssssszzssss",
"sssszzssssssssssg>ssssswssssssssssg>ssssssssssssssssg>sssssssssszzssss",
"sssszzsssssssssgoo>sss5wsssssssssgoo>ssssssssssssssgo&>5sssssssszzssss",
"sssszzsssssssssm)>[gssswsssssssssm)>[gsssssssssssssh)4[gsssssssszzssss",
"sssszzsssssssssz&[@gssswsssssssssz&[@gsssssssssssssz&[jgsssssssszzssss",
"sssszzsssssssss;z>jgss5wsssssssss;z>jgsssssssssssss;z>@gsssssssszzssss",
"sssszzsssssssssz)m>gssswsssssssssz)m>gssssssssssssszom[gsssssssszzssss",
"sssszzsssssssss!mm^gss55sssssssss!mm^gsssssssssssss!mm=gsssssssszzssss",
"sssszzsssssssss=!&zgss55sssssssss=!&zgsssssssssssss=!&zgsssssssszzssss",
"sssszzsssssssss=>k)gssswsssssssss=[k)gsssssssssssss=[k)gsssssssszzssss",
"sssszzsssssssss4m||gss55sssssssss^=||gsssssssssssss^=||gsssssssszzssss",
"sssszzsssssssss^4u6gssswsssssssss=^u6gsssssssssssss^^u6gsssssssszzssss",
"sssszzsssssssss^m|6gss55sssssssss^m|6gsssssssssssss^m|6gsssssssszzssss",
"sssszzsssssssss>4orgssswsssssssss44orgsssssssssssss44orgsssssssszzssss",
"sssszzsssssssss>o^^gss55sssssssss>&^^gsssssssssssss>&^^gsssssssszzssss",
"sssszzsssssssss^=>@gssswsssssssss^=>@gsssssssssssss^=>@gsssssssszzssss",
"sssszzsssssssss>=z;gss55sssssssss4=z;gsssssssssssss4=z;gsssssssszzssss",
"sssszzsssssssss=!)*gssswsssssssss=!k*gsssssssssssss=!k*gsssssssszzssss",
"sssszzsssssssssm;==gss55sssssssssh!==gsssssssssssssh!==gsssssssszzssss",
"sssszzsssssssssmm==gssswsssssssssmm==gsssssssssssssmm==gsssssssszzssss",
"sssszzsssssssss^>)ugss55sssssssss^>k|gsssssssssssss^>k|gsssssssszzssss",
"sssszzsssssssssm=uxgssswsssssssssm=|6gsssssssssssssm=|6gsssssssszzssss",
"sssszzsssssssss!*u6gss55sssssssss!ru6gsssssssssssss!ru6gsssssssszzssss",
"sssszzsssssssssm!u6gssswsssssssss=!uxgsssssssssssss=!uxgsssssssszzssss",
"sssszzsssssssssmouxgss55sssssssssmouxgsssssssssssssmouxgsssssssszzssss",
"sssszzsssssssss=oo&gssswsssssssss^oo&gsssssssssssss^oo&gsssssssszzssss",
"sssszzsssssssssm)^mgss55sssssssssm)=mgsssssssssssssm)=mgsssssssszzssss",
"sssszzssssssssszzo|gssswssssssssszzo|gssssssssssssszzo|gsssssssszzssss",
"sssszzsssssssss;&r6gss55ssssssssszzr6gssssssssssssszzr6gsssssssszzssss",
"sssszzsssssssssz)rxgssswsssssssssz)rxgsssssssssssssz)rxgsssssssszzssss",
"sssszzsssssssss==rxgss55sssssssss==rxgsssssssssssss==rxgsssssssszzssss",
"sssszzsssssssss=m|6gssswsssssssss=m|6gsssssssssssss=m|6gsssssssszzssss",
"sssszzsssssssss=[|ugss55sssssssss=[|ugsssssssssssss=[|ugsssssssszzssss",
"sssszzsssssssss4m)mgssswsssssssss4m)mgsssssssssssss4m)mgsssssssszzssss",
"sssszzsssssssss^4)^gss55sssssssss^4)^gsssssssssssss^4)^gsssssssszzssss",
"sssszzsssssssss==*kgssswsssssssss==*kgsssssssssssss==*kgsssssssszzssss",
"sssszzsss'^<<<=&)rrhhm<mjss'^<<<h&)rrhhhhm>sssg@^<h&)rrhhhhm>ssszzssss",
"sssszzsss[_+(%%(7|_+df${>ss[n+p%%(7|_+df${ewsw]9d(%(7|_+df${ewsszzssss",
"sssszzssssg>;n_c|37+_;^[5sss]4;n_c|37+_;^@wssswj9n_c|37+_;^@wssszzssss",
"sssszzsssssssss]lizsss55sssssssss]lizssssssssssssss]lizssss]@wsszzssss",
"sssszzsssssssss@i}15ss5wsssssssss@i}15sssssssssssss@i}15ssju!|wszzssss",
"sssszzsssssssss^b}t'ssswsssssssss^b}t'sssssssssssss^b}t'ssrxg-[szzssss",
"sssszzsssssssss^b}a'ssswsssssssss^b}a'sssssssssssss^b}a'ss|x]84szzssss",
"sssszzsssssssss2}}:gss55sssssssss2}}:gsssssssssssss2}}:gssjuk8[szzssss",
"sssszzsssssssssob}:]ss5wsssssssss&b},]sssssssssssssob}:]ssswkxwszzssss",
"sssszzsssssssss[tl&5sss5sssssssss[qt!5sssssssssssss[tl&5sss>|jsszzssss",
"sssszzssssssssss'g5sss55ssssssssssw'5sssssssssssssss'g5sssg[gssszzssss",
"sssszzsssssssssssssssss5sssssssssssssssssssssssssssssssssssssssszzssss",
"ssssouzzzzzzzzzzzzzorrrr)'w'''mzzzzzz&&o[g'sg&)krrozzzzzzzzzzzzz|zssss",
"ssss>ozzzzzzzzzzzzzorrrr)w555wmzzzzzzz&z@wws])*rrrozzzzzzzzzzzzzz]ssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"};
