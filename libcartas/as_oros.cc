/* IMBHeader:  1.0.0
 * Programa:   as_oros.cc 
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
const char * as_oros_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #0A0607",
"+	c #85890B",
"@	c #C2C71D",
"#	c #90352F",
"$	c #D58984",
"%	c #4C494C",
"&	c #A7AC0C",
"*	c #6F7004",
"=	c #5D6585",
"-	c #6B749C",
";	c #989C0E",
">	c #8E5D5F",
",	c #A7A9A3",
"'	c #E1E489",
")	c #C7C99A",
"!	c #888990",
"~	c #C76056",
"{	c #737AA5",
"]	c #6B6E94",
"^	c #794842",
"/	c #B0B50F",
"(	c #BABE1A",
"_	c #4C2321",
":	c #646C90",
"<	c #5A5E04",
"[	c #8A9096",
"}	c #F53B29",
"|	c #AD868C",
"1	c #B1B5AB",
"2	c #F9CAC7",
"3	c #50556D",
"4	c #565C78",
"5	c #967774",
"6	c #342929",
"7	c #CCA6A4",
"8	c #CF7971",
"9	c #914B46",
"0	c #F5A69F",
"a	c #FEEAE6",
"b	c #6F231C",
"c	c #F78C80",
"d	c #D2D734",
"e	c #2F1514",
"f	c #D3D68D",
"g	c #A49A9E",
"h	c #C2BBAA",
"i	c #AF5D64",
"j	c #F36153",
"k	c #EF4B3C",
"l	c #F67569",
"m	c #D49A94",
"n	c #745954",
"o	c #FBD8D3",
"p	c #73352E",
"q	c #B04F50",
"r	c #F7B7AF",
"s	c #90940B",
"t	c #4A3433",
"u	c #AF3226",
"v	c #FEFEFC",
"w	c #1B1717",
"x	c #AF7782",
"y	c #FA9A91",
"z	c #777B0E",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvag[!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!fvvvv",
"vvvvg=!![![![![![![![![![![![![![![![![![![![![![![![![![![![![!3!vvvv",
"vvvv!!=:]:-]]=]]:]-=]]-]{{{=]:======]:]]-:::---]-{==-]434==]:]==!!vvvv",
"vvvv!!:::::]::---{]{-:]-{-:===4=::::==:]-:=-]-{-{--==344:]==:]==![vvvv",
"vvvv!!=:::::::]]:-:--:---=44==4:]:====:-]==]--]-]:-=33=:=]:=:-:=!!vvvv",
"vvvv!!=-=%4:=::::--]---]433====]==:]]]:]==:--=:]::=434{]4=:=]-{=!!vvvv",
"vvvv!!:{:.4:=--:::-]--:=434::]]-]=]{]::]==-{{==]--:=4=:=:]]:-{-:[!vvvv",
"vvvv!!{{!.4:-]:]-]]--]=344==:=]-]:]{-]:]=:{{]::::-:=4==:]::-{{--!!vvvv",
"vvvv[!{-!.4:-:-:=]-]-:4%4:]]-]---]]{{:==]-:::===:-:==4=::-:-{{-{[!vvvv",
"vvvv![:4!.4:::-::]::-:44:::-:]-]--:!{]:--::]:::=:::==::=]{{{]=:]!!vvvv",
"vvvv!!==!.4--::--::]{44==::-::-]=:-!----:=:]::::=:=::=4:---=44==[!vvvv",
"vvvv!!=-%.3=---]]::--:==::-:::::::{{:::]:-:::---:==-::=--=:33=4=!!vvvv",
"vvvv[!---:-:---]-::-::===:---:::-{!-:--]{{]-:]]-:4:--:::==:34:=][!vvvv",
"vvvv![-------------::-:=--{------{!--]]]!-]=::=::4:::::===:=::--!!vvvv",
"vvvv!!-:::--:-{{{-:=::-:{--::-{{{{{-::--]4334=====::=::==:=:]]--[!vvvv",
"vvvv!!---::-::----::::-:---=:-{{--{{]]:=334=:========:===44]--{-!!vvvv",
"vvvv[!-----:::-]-{:-=::::-:=:{{:-{-{:=433==:==::=:==:::==4=---{{[!vvvv",
"vvvv!!------:-:-{{{-==]--::==--]{{-==4443=4::::=::=::::===:--{{{!!vvvv",
"vvvv[!-:--:-:--{![{{====4=4=--{{]]:4==444=:-::-::::::=====-{-{--[!vvvv",
"vvvv![-:---::--{{!{:4443334{{--{=]=4=n44=-]:-:---::::==:-----{--!!vvvv",
"vvvv![:--------!{{!=4=4=4=-{[{-{{:3n=3=:-----]--::::===:{-={--{:[!vvvv",
"vvvv!!-----:--{[{{-=4===4:-{[{{{]43=34=]]]{-]---::::=:=---=]--::!!vvvv",
"vvvv!!:----::--{{{=4=4:-=:-{[-:]-43n3=]]----]]---::=:==:::=]--::[!vvvv",
"vvvv[[------{{{{{4=:=44{{{!{=]-{-444n=]-{-]--:::::::-:::]{::]::-!!vvvv",
"vvvv!!-----{{{[{-4=:=4-{-{-::]-{-=434]]]-]:]-::-:::--:-:-{:=:::-!!vvvv",
"vvvv!!-{--{[{-{{:44==:{:4:-:-{1,g[5zz![g,1--:--:::::=:::{{]::::-![vvvv",
"vvvv[[----{{{{{-=4====-:=-,1)/;s+ssss;ss;;1f1g:::-=444=-{-]-]-]{!!vvvv",
"vvvv!!{:{{{[{{::==:4::--,f&;;;&&&;&&&&/&&&&;;/f,:=33::-{{{{-]-{{!!vvvv",
"vvvv![-:{-{{{:=:==:=::1)s;;&&;;&&s+s+ss;;&&&&&;&),34:::]{{!]]---[!vvvv",
"vvvv!!::::-:-:=::=44!)ss&&;&;&&&&;s&;&;ss+sss&&&&;)!:::]!{-:=:::!!vvvv",
"vvvv!!43==:::-:-:::1&s&;;&;&&&&;&;//&&&;/s&+;&&&&&;(1:-{!{]=4==4[!vvvv",
"vvvv![:=-:-----:4:1;;&;;&&&&&&&&&/&/&///&;s&;;s;&&&&&h!!{-===4==!!vvvv",
"vvvv![=-:-:::-{:=)s;;&&&&&&&&&&&&&&&&&&&/&&/s&;(&&&&&&){{:=4=::=[!vvvv",
"vvvv!!:::::=---!,s&;&;&;&&&&&&&&&/;&;&&&&/&&&&/(&&&&&&&1!:4==::=!!vvvv",
"vvvv![=:-:-:{-{fs&;&&;&&&&&&&&/&;z+++ss&&&&&&&/&&&&&&&&&f43:=:=:!!vvvv",
"vvvv!!--::----)s&;;&&&&&&&&&&&&sz;&&&/&;&&&&&&/&&&&&&&&&&h=::]]-![vvvv",
"vvvv!!------{,;;;&&;&&&&&&&&&&/z;&&&&/;&&&&&&&&&&&&&&&&&&(,=::=-!!vvvv",
"vvvv!!-=-{:{!h;&;&&&&&&&&&&&&&&z&&&&&&;&&/&&&&&&&&&&&&&&;&f::=={!!vvvv",
"vvvv!!-:-{{[)+&;&&&&&&&&&&&&&&&+((&&@(&&&/&&&&&&&&&&&&&&&;/h=={-[!vvvv",
"vvvv[!-{{[{[&&;&;&&&&&&&&&&&&&&+/;;(&ss&&(&&&&&&&&&&/&/&&;&@[:]-!!vvvv",
"vvvv!!-{{-{)s&;&&&&&&&&&&&&&&&&+;;s(*;+;&/&&&&&&&&&&&&&//&;(h-]-!!vvvv",
"vvvv!!-:--[,&;;&&&&&&&&&&&&&&&&+&@/(;@+;&(&&&&&&&&&&&&&&/&;/@g--![vvvv",
"vvvv[!----,;&;&&&&&&/&&&&&/&&&&+((&&&&+;&/&&&&&&&&&&/&&&s;&;(1]-!!vvvv",
"vvvv!!::-{);;;&&&&&&&&&&&&&&&&&+/&;;;&s&//&&&&&&/&&&&&++&(/;/':-!!vvvv",
"vvvv![-:{{/&&&&&&&&&&&&&&&&&&&&z(&&&/@;;;;&&&&&&&&&/&&s/&s&s/d:-[!vvvv",
"vvvv!!{-{1s&;;&&&&&/&&/&&&&&&&+s@&/(@(;+&&&&&&&&&&&&&&;++&(;;(1{!!vvvv",
"vvvv!!--=gs;&&&&&/&&/&&&&&&&&sz@/&/(&&&ss&&&&&&/&&&&/&&&&&/&;(,{[!vvvv",
"vvvv![{==[+&&&&&/&&&&&&&&&&&;z/@;&&&&&&s+&&&&&&&&/&&&&&+s&/&;(,-!!vvvv",
"vvvv!!:4=!s&&&&&&/&&&&&&&&&&*;@(/&&&&;;&+&&&&;&&&&&/&&&+&&&&;(;][!vvvv",
"vvvv!!=::zs&&&&&/&&&&&&&&&&;+/d/&&&&&//&&+&&&&/&&&&&&&&s&;(&;(;=!!vvvv",
"vvvv[!-::{;&&&&&&&&&&&&&&&&+;((&&&&&&&&&&s;/&&/&&&/&&&&;;&(&;([][!vvvv",
"vvvv![::-+;&&&&&&&&&&&&&&&;z&@&&&&&&&&&&&s+&&&&/&&/&&&&&(/(/;(;-!!vvvv",
"vvvv!!=--!;&&&&&&&&&&&&&&&+;(/&&&&&&&&&/&;z&&&&/&&&&/&&&&&&/;(g=[!vvvv",
"vvvv![-{:[;&&&&/&&&&&&&&&;z&(&&&&&&&&&&&/;*&&&&(&&&&&&&&&//&s@,:!!vvvv",
"vvvv!!-::,;&;&&&&&&&&&&&&+;/(&&&&&&&/&&&&&*/&&&(&&&/&&&&///;s@,-[!vvvv",
"vvvv![=::,;&&&&&&&&&&&&&/s(//&&&&&&&&&&&&+*&&&/(&&&&&&&&&//s;d,=!!vvvv",
"vvvv!!:=::/&&;&&&&&&&&&&&s(&;s&&&/&&&&/&s;s&&/@/&&/&/&&////z(d::!!vvvv",
"vvvv![==::f;&&&&&&&&&&;;;/&&&;s;&&&&&&&&+&s&(@/;&&&&&&&&&/&z@'==![vvvv",
"vvvv![=:-:,&&&&&&&&&&&&/(/&&&;;;;&&&&&&;;&&/@@&&&&&&&&&///s;d,=:!!vvvv",
"vvvv!!=::-[/&&&&&&&&/;&&&&&&&&;&(/&&&&&;z///&&&&&&&/&&&///*@d[==!!vvvv",
"vvvv![=:::]1&&;&&&/&&;&&&&&&&&&/@&&&&&s<;@&&&&&&&&&&&/&//;s@)-=4[!vvvv",
"vvvv!!=::::[/&&&&&&&&&//&&&&&&&;ssssz**;@//&&&&;s&&&&///&*@d[]==!!vvvv",
"vvvv![=::=::h&&&&&&&&&;;&;&&&&&sss+++;&&@/&&&;;&&&&&&///+;d):--=[!vvvv",
"vvvv!!:-::==:(&&&/&&&&&&&;;;;;;ss&//(///(&&;;;/&&&&&&//&z@':]{{:!!vvvv",
"vvvv!!-{::::],&&&&&&&&&&&&//&;;&(/&&&&&;;&;s/&&&&&/&//&*(d,--{-][!vvvv",
"vvvv!!{--==]]])&&&&&&&&&&&;&;///&&&&&&&&&///&&&&&&&//&z&d)=-{{]-!!vvvv",
"vvvv![-=:==:]:-)&&&&&&&&&&&&&&&&&&&&&&&&/&&&&&&&////&z&d'---{{--[!vvvv",
"vvvv!!====:--:]!1&&&&&&&/&&/&&/&/&&&&&&&&&&&&&&////&*&@)!{{-=4=:!!vvvv",
"vvvv![==:==:---:])&&&/&&&&&&&&&&&&&&&&&&&&&&//////;z/df=-::33=4=!!vvvv",
"vvvv!!:----:----:-h/&&&&//&/&/&/&&&&&&&&&/&/&///&++(d)--:=:34==:![vvvv",
"vvvv!!--::--:-]---]1@&;&&/&/&/&&&/&&&/////////&s*&@dh==:==:4=::-!!vvvv",
"vvvv![-:------{---]=[)(&;;&&/&//&&&/&&&/////&+z;@df[:::==:==::--!!vvvv",
"vvvv!!--:::-::{{{-:=::,f(&;;;&&&&&&&////&&szz&@d',===::=4=4-]--{!!vvvv",
"vvvv!!---:-:::-]-{=]=:-],'@/&;;;s&;;;;s++s;@@d',=:=:==:==4=---{-![vvvv",
"vvvv!!{-----::::{{{-==]--:,1'@@(//////((@@d'hg:==:=:::::=4=-{-{{!!vvvv",
"vvvv![-----:-:-{{{{-:=:]====:{11,g;s[s;g,,:-::::::=:::====:--{{{!!vvvv",
"vvvv!!-:--::--:{[[{-4444333={--{=:====434--:-:--:::::==::--{{{--[!vvvv",
"vvvv![:-------{{{{!:4=434=:{!{-{--44=44=--]-]---::::===:{-:{--{:![vvvv",
"vvvv![:----9}}}kkkkkjjjjlllllcccccyyy000rrrr552ooooaaaavavv----:!!vvvv",
"vvvv!!--:--q}}}}kkkkkjjjjjlllllccycyy0000rr76t22ooooaaaavvv]--::!!vvvv",
"vvvv!!----:q}}}}kkkjjjjjllllccccccyyy000rrrrw>22ooaoaaavavv]-::-!!vvvv",
"vvvv!!-----q}}}}ubk}ujjqpqll#^qcc$9nc00xi|r7.n57oo151!aavvv:=:--![vvvv",
"vvvv[!-----i}}}}#.#_.jbe#ej9w~_ci6>.^0tnm.|x.n%w2|.5t6avavv=]::-!!vvvv",
"vvvv![----{q}}}}}b.kkk.qepl9.i8cwpc80^.m0.n%w2|.!.g)w,aavvv]:::-!!vvvv",
"vvvv!!{---{i}}}kkbekjb.##jljw.~9.$cy$._05.>6n2nwn.og.havavv-]--{[!vvvv",
"vvvv![{:{{!q}}}uub.uq_eljqq~~.^^.cyi$.x0tt$.x7w5].onw!aavvv]---{!!vvvv",
"vvvv!!:=-:{q}}}.b}.ekk.e_l9e9_lcwet$y^t>wm7.tt5o7w.!.oavavv:=-]][!vvvv",
"vvvv!!====:q}}}}}kqkkjk~ljlj~lclc8cyy0$m0rr77r22ooro)aaavvv=====!!vvvv",
"vvvv[!44==]q}}}}kkkkjjjjjllllcccccyyy000rrrr2222oooaaaavavv==4=4[!vvvv",
"vvvv!!:---=>qqiiqiiii~ixixxxxxxx|||x|||||g|gmgg7,gg,,11h111=4=::!!vvvv",
"vvvv!!=::-:=---:=:4-:=--::----{{{]:4=::::]]::]:=]]]]:]{{-:44=::=[!vvvv",
"vvvv[!:::]:={-{-=:4-==--]-{{{{{{{]43=:4=:]::]]]:=:=::-{{{=-!-{{=!!vvvv",
"vvvv!!:--:--]-{:=-3{{{]--{-{{{{{-]:44]]=]]]]-]]]]]]]]{{{:=--.]{][!vvvv",
"vvvv!!-]:]--{{{=-----:-{{{{{-{-{:===4=]=::]:]{--]]-]{{{:=4:!wg]-!!vvvv",
"vvvv!!-:-{:{{!-:::=::=-{{-{-]]]]4:=]=4-]]]{-{{{{]]{-{{:===:!w[:-[!vvvv",
"vvvv!!]:-{-{{-:==--:-{{----::]-===:=]]-]]:----]:{{{{{:4==:=[wg]-!!vvvv",
"vvvv!!--{{{[{-=---:]-:::-::::--4::=={:::]-{]-{-{----:=::4==!w[--[!vvvv",
"vvvv!!-{{{{{-:::4-{:=:-::--:--]==]=]-]:]]-]:]:]::]::=4=4===[w3[]!!vvvv",
"vvvv!!----{--::----:-:--:-{{{=:4=:{-]]-=::]-==]::]:=====:=={4g--[!vvvv",
"vvvv![--{-:{{:::{-]---{--:-{{4==={{]:]]]:]-::====::=4::::=::-{]-!!vvvv",
"vvvv{%[![[[[![[!!!!!!![!![[![!!!!!!!!!!!!!!![!!!!!!!![![[[![!!!!3!vvvv",
"vvvv1{!!!!!!!!!!![![!!!![!!!!!!!!!!!!!!![!!!!!!![!!!!!!!!!!!![!!!fvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
