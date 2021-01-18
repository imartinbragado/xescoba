/* IMBHeader:  1.0.0
 * Programa:   siete_oros.cc 
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
const char * siete_oros_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #101010",
"+	c #888C04",
"@	c #C1C72D",
"#	c #E6E995",
"$	c #A8AD0B",
"%	c #C7CA87",
"&	c #AAAAAC",
"*	c #B6BC0D",
"=	c #F6F7DC",
"-	c #D7D8A7",
";	c #A9AC33",
">	c #E8E8C6",
",	c #8A8A8C",
"'	c #DCDCDC",
")	c #D4D85A",
"!	c #989D04",
"~	c #AEB30D",
"{	c #DDE08F",
"]	c #B8BB4D",
"^	c #C4C65F",
"/	c #4E4E4C",
"(	c #A0A508",
"_	c #EFF0D4",
":	c #EEF0B1",
"<	c #F8F9EF",
"[	c #DEDFAD",
"}	c #A6AC1E",
"|	c #A2A520",
"1	c #BDC22A",
"2	c #B0B444",
"3	c #CBCF42",
"4	c #C8C8C8",
"5	c #707070",
"6	c #2E2E2C",
"7	c #808404",
"8	c #4A4A4C",
"9	c #BDC16C",
"0	c #1E1E1C",
"a	c #9F9F9F",
"b	c #606060",
"c	c #818181",
"d	c #BEBEBC",
"e	c #CFD170",
"f	c #DCE06B",
"g	c #B2B3AC",
"h	c #CFCFCE",
"i	c #7A7A7C",
"j	c #3A3A3C",
"k	c #969694",
"l	c #909404",
"m	c #D0D295",
"n	c #E2E2C7",
"o	c #BEC244",
"p	c #C3C741",
"q	c #E9E9B3",
"r	c #F2F2E8",
"s	c #FEFEFC",
"t	c #B8BC30",
"u	c #E8E8E8",
"v	c #161614",
"w	c #565654",
"x	c #262624",
"y	c #666664",
"z	c #C9CA7A",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssra,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,hssss",
"ssssab,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,w,ssss",
"ssss,,ssssssssssssssssssssssssssssssssssssssssssssssssssssssssss,,ssss",
"ssss,,ssssssssssssssssssssssssssssssssssssssssssssssssssssssssss,,ssss",
"ssss,,ucccdsssssssssssssssssssssssssssssssssssssssssssssssssssss,,ssss",
"ssss,,gx60kssssss=>--->=ssssssssssssssssssssssssssssssssssssssss,,ssss",
"ssss,,'<s5nssss>]|(!(((}][sssssssssssssssssss>%2;|;]z>ssssssssss,,ssss",
"ssss,,ssrjsss_2!(((!!!!!($2_sssssssssssssssn2(((!!!!$(2[ssssssss,,ssss",
"ssss,,ssccss[|((}$$$$$$!(($$[ssssssssssss<9!|(|$(~$!!!$$^<ssssss,,ssss",
"ssss,,ssjns[!(($$$$(!($$(~$$$[ssssssssss<2((($$$$$$$$($$$]=sssss,,ssss",
"ssss,,sn8s_|(|$$$$l!$($$$$$$$$_sssssssss]|$$$$$(+l($$($$$$o<ssss,,ssss",
"ssss,,s44s2(($$$$$l$$$$$$($$$$tssssssssm!($$$$$l$$(($$$$$$}essss,,ssss",
"ssss,,sss[!}$$$$$~!!$l$$$$$$$$(#ssssss=|($$$$$$!$~$$$$$$$$$$=sss,,ssss",
"ssss,,sss](($$$$$$!~$!(~$$$$$((ossssss%(($$$$$$l((!(~$$$$$$$esss,,ssss",
"ssss,,ssr|$($$$$$$!$$$($$$$$(!$$=ssss<;($$$$$$$($(!$$$$$$$!$~sss,,ssss",
"ssss,,ss>!($$$$($!$$~(l$$$$$$!~(qssss_!($$$$$$$!~~$!$$$$$(!$$_ss,,ssss",
"ssss,,ss-($$$$$$$+*$$$l$($$$$!$${ssss[|$$$$$($+~$~(l$($$$$!$(#ss,,ssss",
"ssss,,ssm$$$$$$$l~~$$$$!$$$$$(~(#ssssm($$$$$$!(*$$$(($$$$$!$({ss,,ssss",
"ssss,,ss-($$$$$$l~$$$$$l$~$$$$~(#ssssm($$$$$$l*$$$$$l$$$$$$*${ss,,ssss",
"ssss,,ssn($($$$((~$$$$$+$~$$$~~(qssss-$($$$$$l~$$$$$+$~$$$$~(#ss,,ssss",
"ssss,,ssr}$$$$$!~!($$$!l~~$$$~$$=ssss>}($$$$(~($$$$(+$~$$$$~(_ss,,ssss",
"ssss,,sss](($$(~$(($$$!~*$$$$~!3ssssss;$($$($$!!$$$!(1~$$$~$~sss,,ssss",
"ssss,,sss[$$$$$$$$((!7(~$$($$~!#ssssssz$$$$($$$$$$(l~$$$$$~!fsss,,ssss",
"ssss,,sss<2$$$($((!!!$~((($$~!@sssssss_$$$$$$$$!l++~$$(($$$$=sss,,ssss",
"ssss,,ssss>$$$$$$($$$$$$$$$~$$:sssssssse$$$$((!!$$~~(($$~~lfssss,,ssss",
"ssss,,sssss-$$$$$$$$$$$$$$~((#sssssssss<o($$$$$~$$$$$$$$~l3<ssss,,ssss",
"ssss,,ssssss-$$$$$$$$$$$~~!(#sss=>--->rs=t$$$$$$$$$$$$~~!@=sssss,,ssss",
"ssss,,sssssssqt($~~$$~~~!!1:ssn]|!!!((}][<^($~$~$$$~~~(!3<ssssss,,ssss",
"ssss,,sssssssss{o(((((((p#ss_2!|(}!(!!!!}2qnt(($$$$$!!t#ssssssss,,ssss",
"ssss,,sssssssssss=q{f#q=sss-|(($$$$$$$!(($~-s:et~~~t):<sssssssss,,ssss",
"ssss,,ssssssssssssssssssss[|(($$$$(l($~(~$$$-sssssssssssssssssss,,ssss",
"ssss,,sssssssssssssssssss_|(($$$$l!$(($$$$$$$>ssssssssssssssssss,,ssss",
"ssss,,sssssssssssssssssss;($$$$$$l~~$$$$$$$$$tssssssssssssssssss,,ssss",
"ssss,,ssssssssssssssssss'(($$$$$$!!$!$$$$$$~$$[sssssssssssssssss,,ssss",
"ssss,,ssssssssssssssssss2($$$$$$$!~$!$$$$$$$((psssssssssssssssss,,ssss",
"ssss,,sssssssssssssssss<|(($$$$$$!$((($$$$$(!$}=ssssssssssssssss,,ssss",
"ssss,,sssssssssssssssss>!$$$$$$$!$~*(l$$$$$$!~(:ssssssssssssssss,,ssss",
"ssss,,sssssssssssssssss-($$$$$($+*$$$!$($$$$!$({ssssssssssssssss,,ssss",
"ssss,,sssssssssssssssssm($$$$$$l~$$$$(!$$$$$(~${ssssssssssssssss,,ssss",
"ssss,,sssssssssssssssss-$($$$$$l~$$$$$l$$$$$$~(#ssssssssssssssss,,ssss",
"ssss,,sssssssssssssssssn($($$$((~$$$$$+$~$$$~~(:ssssssssssssssss,,ssss",
"ssss,,sssssssssssssssssr$($$$$(~!($$$!!~~$$$$~(=ssssssssssssssss,,ssss",
"ssss,,ssssssssssssssssss]$($$(~$(!$$$!~*$$$$~!3sssssssssssssssss,,ssss",
"ssss,,ssssssssssssssssss[$$$$$$$$$(!7!$$$($~~!#sssssssssssssssss,,ssss",
"ssss,,ssssssssssssssssss<2$$$((((!!!$*$!$$$~(1ssssssssssssssssss,,ssss",
"ssss,,sssssssssssssssssss_$$$$$$($$$$($$$$~($:ssssssssssssssssss,,ssss",
"ssss,,ssssssssssssssssssss-$$$$$$~$$$$$$$~((#sssssssssssssssssss,,ssss",
"ssss,,ssssssssssss=>--->rss{$$$$$$$$$$$~~!$#ssssssssssssssssssss,,ssss",
"ssss,,ssssssssss>]|(!(((}][s>t$$$$$$~~~!!1:sss>%2;|;]z>sssssssss,,ssss",
"ssss,,ssssssss_2!(((!!!!!((2><[o$(($(((p#<ssn2(((!!!!$(2[sssssss,,ssss",
"ssss,csssssss[|((}$$$$$$!(($$[<<=q{f{q=<ss<9!|(|$(~$!!!$$^<sssss,,ssss",
"ssss,,ssssss[!(($$$$(!($$(~$$$[ssssssssss<2((($$$$$$$$($$$]=ssss,,ssss",
"ssss,,sssss_|(|$$$$l!$($$$$$$$$>sssssssss]|$$$$$(+l($$($$$$o<sss,,ssss",
"ssss,,sssss2(($$$$$l$$$$$$$$$$$tssssssssm!($$$$$l$$(($$$$$$}esss,,ssss",
"ssss,,ssss[!$$$$$$~!!$l$$$$$$$~(#ssssss=|($$$$$$!$~$$$$$$$$$$=ss,,ssss",
"ssss,,ssss](($$$$$$!*$!(~$$$$$((ossssss%(($$$$$$l((!(~$$$$$$$ess,,ssss",
"ssss,,sssr|$($$$$$$!($$($$$$$(!$$=ssss<;($$$$$$$($(!$$$$$$$!$~ss,,ssss",
"ssss,,sss>!($$$$($!(~*(l$$$$$$!~(qssss_!($$$$$$$!~~$!$$$$$(!$$_s,,ssss",
"ssss,,sss-($$$$$$$l*$$$l$($$$$!$${ssss[|($$$$($+~$~(l$($$$$!$(#s,,ssss",
"ssss,,sssm$$$$$$$l~$$$$$!$$$$$!~(#ssssm($$$$$$!(*$$$(($$$$$!$({s,,ssss",
"ssss,,sss-($$$$$(l*$$$$$l$~$$$~~(#ssss-$$$$$$$l*$$$$$l$$$$$$*${s,,ssss",
"ssss,,sssn($($$$(($$$$$$+$~$$$$~(qssss-(($$$$$l~$$$$$+$~$$$$~(#s,,ssss",
"ssss,,sssr}$$$$$!~!($$$!l~~$~$~$$=ssss_$($$$$(~($$$$(+$~$$$$~(:s,,ssss",
"ssss,,ssss](($$(~$(($$$!~*$$$$~!3sssss<;$($$($$!!$$$!(1~$$$~$~ss,,ssss",
"ssss,,ssss[$$$$$$$$((!+!~$$($$~!#ssssssz$$$$($$$$$$(l~$$$$$~!fss,,ssss",
"ssss,,ssss<t$$$((((!!!(~$(($$~!@sssssss_$$$$$$$$!l++~$$(($$$$=ss,,ssss",
"ssss,,sssss>$$$$$(($$$$$($$$~$$:sssssssse$$$$((!!$$~~(($$~~lfsss,,ssss",
"ssss,,ssssss-$$$$$$$$$$$$$$~((#sssssssss<o($$$$$~$$$$$$$$~l3<sss,,ssss",
"ssss,,sssssss{$$~$$~$$$$~~~!(#sssssssssss=t$$$$$$$$$$$$~~!@=ssss,,ssss",
"ssss,,ssssssss>t($~$$$~~~!!1:ssssssssssssss^($~$~$$$~~~(!3<sssss,,ssss",
"ssss,,sssssssss<[o$((($!(p#sssssssssssssssss[t(($$$$$!!t#sssssss,,ssss",
"ssss,,sssssssssss<rq{{{q=sssssssssssssssssssss:-e^t~$@f_ssssssss,,ssss",
"ssss,,sssssssssss<-9;|}2o-=ssssssssssssssssssss<_[--[>ssssssssss,,ssss",
"ssss,,sssssssss=z|(((!!!((|z=ssssssssssssssss=m;!!!!($2zrsssssss,,ssss",
"ssss,,ssssssssn;!(((($$(!!((2[ssssssssssssssm!|(((!!l!!$}m<sssss,,ssss",
"ssss,,sssssss-|($$$$$$$$$((~$${sssssssssss<]!(($$$~~~((!$$]=ssss,,ssss",
"ssss,,ssssss>!(($$$$ll!($$$$$$}[sssssssss<2|($$$$(!!($$$$$$]<sss,,ssss",
"ssss,,sssss<|(($$$$(!$$($$$$$$$~=ssssssss9(($$$$(+($($$$$$$$^sss,,ssss",
"ssss,,sssss%($$$$$$!$$~(~$$$$$~(esssssssn!($$$$$(($~($$$$$$$$[ss,,ssss",
"ssss,,ssss<|($$$$$$!($!!$$$$$$$$$=ssssss;($$$$$$!$(!!~$$$$$$$tss,,ssss",
"ssss,,ssssm|($$$$$$($((!$$($$$((({sssss>|($$$$$$($$$l~$$$$$$($qs,,ssss",
"ssss,,ssss9($$$$$$$l~$*!($$$$$!(|3sssss%(($$$$$$!$(~(($$$$$!(()s,,ssss",
"ssss,,ssss;($$$$$$(!~~$!($$$$$(($tsssss2($$$$$$$l*~~!($$$$$!($os,,ssss",
"ssss,,ssss|$$$$($$l1$$$$!$$$$$(($~sssss|$$$$$($l~$$((!($$$$(($~s,,ssss",
"ssss,,ssss|$$$$$$(!~$$$$l($$$$(~~*sssss|$$$$$$$l*$$$$!$$$$$($~*s,,ssss",
"ssss,,ssss;($$$$$l~$$$$$!($~$$$$$*sssss;($$$$(!$$$~$$l($$$$$~$~s,,ssss",
"ssss,,ssss9($$$$$($($$$$l(~~$~$~!3sssss]($$$$$l~$$$$$l($~$$$~$1s,,ssss",
"ssss,,ssss-$($$$($$!($$(!$*($$~~!#sssss^$($$$($$!$$$$l(*$$$$~!fs,,ssss",
"ssss,,ssssr$($$(~$$(~$$+$~$$$$$$$=sssss>$($$(~$$!$$$((*~$$$$~!:s,,ssss",
"ssss,,sssssz$$$($($(l+7!*$(($$~!)ssssss<t$$$(~$$(((l7~$$($$~(1ss,,ssss",
"ssss,,sssssr~$$$$((($~$$$($$$~(~=sssssss-$$$(((((l!!~~((($$~!#ss,,ssss",
"ssss,,ssssss[$$$$$$$$$$$$$$$~((:sssssssss^$$$$$$(~$$$$$$$~~l)sss,,ssss",
"ssss,,sssssss-$$$$$$$$$$$$$~((#ssssssssss<t$$$$$$~$$$$$$~~!@&&ss,,ssss",
"ssss,,ssssssss[~$$~$$$$$~~$!~#ssssssssssssro$$$$$$$$$$$~$!@=y4ss,,ssss",
"ssss,,sssssssssrz$($$$$$(!()=ssssssssssssss<e$$$$$$$~~$l(fsn8uss,,ssss",
"ssss,,sssssssssss_{o~~~~p#=ssssssssssssssssss_e~((($((~f=ssa5<ss,,ssss",
"ssss,,ssssssssssssssssssssssssssssssssssssssssss_{{f{_<sssscdsss,,ssss",
"ssss,,ssssssssssssssssssssssssssssssssssssssssssssssssssssrydhhs,,ssss",
"ssss,,ssssssssssssssssssssssssssssssssssssssssssssssssssss'.vvks,,ssss",
"ssss,,ssssssssssssssssssssssssssssssssssssssssssssssssssssssssss,,ssss",
"ssssc/,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,w,ssss",
"ssssgi,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,hssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss",
"ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss"};
