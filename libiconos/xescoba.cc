/* IMBHeader:  1.0.0
 * Programa:   xescoba.cc 
 * Directorio: xescoba-1.2.1/libiconos 
 * Fecha:      Sun Apr 15 16:44:31 CEST 2001 
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
char * xescoba_xpm[] = {
"66 84 65 1",
" 	c None",
".	c #14191D",
"+	c #91897F",
"@	c #474C40",
"#	c #DCC6AA",
"$	c #8D5150",
"%	c #C18F6E",
"&	c #50292B",
"*	c #6B6D65",
"=	c #2B302D",
"-	c #685144",
";	c #8F6F50",
">	c #D0AB7F",
",	c #B3A5A9",
"'	c #B18C62",
")	c #B07163",
"!	c #F5E5E1",
"~	c #685F4E",
"{	c #E1AF8A",
"]	c #513B3F",
"^	c #ECC894",
"/	c #331C1E",
"(	c #937D5F",
"_	c #AB997D",
":	c #D5B993",
"<	c #41413B",
"[	c #753B3B",
"}	c #807C7A",
"|	c #6B616C",
"1	c #5B5D54",
"2	c #3B3535",
"3	c #F1D6AD",
"4	c #A38F9B",
"5	c #524445",
"6	c #906051",
"7	c #C89C69",
"8	c #DFD4E2",
"9	c #1D2224",
"0	c #999A8F",
"a	c #6F2E36",
"b	c #B17F63",
"c	c #FEFAEC",
"d	c #33282C",
"e	c #E5BB8A",
"f	c #8D737D",
"g	c #A4635B",
"h	c #D6C8D9",
"i	c #C3AFB8",
"j	c #B8AFB6",
"k	c #6B5363",
"l	c #8F7E88",
"m	c #57504C",
"n	c #7A7071",
"o	c #C99D94",
"p	c #EDD9DF",
"q	c #A99AA6",
"r	c #CABAC5",
"s	c #958BA0",
"t	c #764440",
"u	c #EFCABA",
"v	c #513038",
"w	c #A0704F",
"x	c #7B5F40",
"y	c #7C4E43",
"z	c #79636F",
"}0s=......9=9=9.92<<9.=99<5<|}n,,~22*}.<@***=999999..99=99..99..9.",
"*0+=...9..999...9===9...9=<@|}}q,nv@|1=@1*1*=99=99...99=9..9.....9",
"ns+=......9=9....99=9.===22@1n}qj(2~12<<1*119.9d.99..99=9...9...9=",
"}0+=....99.=9....99..9@}|@2]1nl0,+5*m=<=@1<@=9.99..9...99.......9<",
"}0+=...999999..99999==10}|<<1nl4,(;}m11<<<<@2=/..9.9.9..9......9=<",
"}s}9..999..=9...=99=@@@}}n@5|n+4,((}~}*@===m@2299.9......9.9..9=<@",
"}++=999=9..9999.99=2m@<|*nm5zn+4,((;1}*m===@5=299.99..99......9=<<",
"*0}=.9.99..99=9.99=<@<=*m}m]~zl_>+n;~*nm29922=d9.999..........==@<",
"}s0@<@.9..9..=<99==@@md}1||]|(+4j+;n*(*<d9/==d9299.999........9===",
"ns01*19...999==999==<<=n~~~]zl4_j'~~~x1]d=d9/999=99...........9=9=",
"}0,1*1999.9.999.99=9===}~|~<xll4,'m5~x1@]<=d9/999=.9..99.......999",
"lqj**@99999.9999999.9=2n~*1]-n(+__m5~*m@-m<9999999999.9......999==",
"}q,n*1=.999999.999=99=<n|n|]5zf+,_@]~~]5@m2/./99=99999.....9999===",
"+sq***@9.999=999=====9@*m*~<5zn_,_5vm-5m22d..9.99999999.99.99999=9",
"l+s*ns}=.<=9=9.9======@*@|k]]zn+_+<2552]d99/9999=9=99999.999==99=9",
"~nq}}00==@<999.999=9=9m*<~m<]n;+_(]<]299/9.99..999999999.999==99=9",
"~-0l*s*2<1@999.9999.==<n<1-<]fz44(]2]/9/9./...99=9=9.99999.9=99.99",
"nml}**<==@@9999999999=<n5~~]5n644;]/2/..9999.99=99=9.99999.999.=99",
"nmzn|19=2@@<=999999.9=2*@~x]5nz4bf]//./.dd.99992=9=999=2<=99999=9=",
"z5~n*1=@@**1<99999.9992}mn~]]kzl+(]/9/..229.=99@<99.9=@*1@@@=9==99",
"nm~f*|=<1*+}@=999.999=2}mn*2]-kfbl]//9/.2299==9<=9.99@1}*111<===99",
";|~l~*<=@1}}1<99999999<+mn;2]-zf+l]./9..9=99=99=9.=9=@1*1@@1<999.9",
"lz*+|*@<<@1*1<9=9==9==5+m}x2]-zf4(]/99.99999====9=@<<<<=<9=@=99..9",
"}~~4n}11<<=2@29=9==99=@l1nn255xzq(2/d/99==99.=<<<@*1@<===.9<999999",
"z-n0**~*@=@<=====25=221(1(x2]]fz_nv./99=2=.=2=@1<@*1<=999.9=9===99",
"*-n+*1<@2=11<mm<@@m<2dm+~}~d5-nz_xd./d2m==9=<<1@==@@2999999..92@==",
"n-}+n<===@**<@~*1@2=2=m+1(~&]m;fqxd//d2@9d9<@1~m<9=<=9.2=..99=2=d=",
"(1l+}5d<@@**11~n~<=9221}5+~2]5nlok//d=]5=d9<~~1@29===992d..=m~m99d",
"}~++}m2@*11n}~11mmm22dmn5(~]5-n(qkvv]m||<2d2-m@-29=d99==9..@+0(29=",
"(~}+}~21}*1*~@m~1~1=dd5~@(5]~zzz;-5kmk|m~m52@-5*m55d999.99.<*}+m99",
"+*+}n~=m*}~~1<1n*~@d22-n-+52xz-m]]kz]]]dm|1v5~-(*m@=/9..9292@1*199",
"+;+}|~9<@1@~n}(n*~*mm]1}~+m5m-vv]]kk//2v]zn]5x~x-<29.9..=<<<@m}199",
"(f}+*mm5@mm1-1n;nn}n~2-}-(-]vvv[vv5k&/&&v]--/2m*mdd/..=2m@m*mm*~99",
"l(((|52<<@<m55n(}(n*md1f~lt]&&&vvd]5]d&/][]5&25-]-5=d.911@*}~@~m.2",
"f(fnz5=2=]<<22~***~5<d~}~l]&//&&v&v][]&/&&v]]2vm=1x~12.<<<@*@2-5.|",
";nn~}k9d9=22dd5m]5<dd2~f~f]d//d&d/&t5[&&/&d&]&5*]mn}*1<=2=<@<m~m2}",
"-kzm}1./9==ddd]2255d2]*;~nv/&&][v&]kw6y]&&&v]25+(}++}}*@==2<@*n<m}",
"2-n|fm.=dd9=/=]2d<]2]<nn~n&//]tkkt$fo%6tavt;y]5(0jj,j0*1<2225n(5z}",
"25}|}@9d99.dd2]=d22=]2~|~nd/d]k66$6go%w666;,65];}_jjj0}@1@2<5~}1f+",
"22nmn5..9d9==<</ddddddm-kz&//vyz66gw%%o{^>oex[];~1}}*001@<2@55-<nl",
"]2|mnm9d.d9ddd2222dd]2~5|n//&tk66$$)o{eeuueot/-(xm(}**00*2m<1]2]*+",
"<2n|}<.99d99=922v2d22d|~;z&/vkyyt[$g)bbbbo>%t&t;5~_+~~00*<=2]221m}",
"2dmm}1=9d99=2=2<2ddd22fl4x//&6$$[aa[$))$a[$6[tx';;'n~~+0~2d2dv]~2@",
"]<m<+q}m=dd=29=d=d9dd2+_,6v/&66$[aaa$oo$a&&y;bw7>_''(x+_5=2/=2-mmm",
"d5|@l+0+299d22=2dd9/2v+,>;y[[$$[[a[[)uu)a&[gb%b7^>:3>+(,~5~m5~n}*1",
"=2~mn1*}m2d99=d=d<dd<5+:q;kyaggg%))b%uu{)b>o7{>e>{:^^:j:,;*nmn+>,l",
"]<k1(m~*}*1299.9<|@<~m(ho6y[aggb{o%%o{{e{{u{b7%77777>3#:j}~x2-1nx5",
"=]mmn@~*_+0(**|}n0n-*5n:_zy[[gg))g$$gg)g)){{b%'%b7%77::#:;~-d2<252",
"2<1k}2<*_}0(}(n,|n0s+]|ibk6y[g))$$$aaaa$g$)%)%wb;''%'7>>:;~-dd2555",
"25mmn22-0~~~*}n01ns++5nil5t[[gg)$aaaaaag$$g))'b'w'b('%%>:(-52<@=2<",
"d]m-nv<x+~5~x~flm1z~n]->b5[][ggg[a$$$aaaa[$%7>>e777'77w'>>---@n<=<",
"v-nx;<5x+xm-m~+4}n}+_-~,']a][6gg$aaaa[[aaa$7^333^^^7e>bw':((x@(m2@",
"-;'4';(++;@]]*:#j#:#3_+>+[va[$66$$$[[)%b$[$7^^333^^b>{%77e>_'}++=<",
"_>>:##e#7_x-(,333!!333##:;t-[[$t[$g$$$b%6t67^^^e{{{b7^e^^^e##::_22",
"e^^^^^3^##_':3p3!33!3!33#($x[v[&t$y$$6%>6t'{eee>%77{{ee^^e#^:^3j5]",
"7>>77:^3#3:,#!#83j:!3#{i'-t6y[[&atygoo{e;t>e>e{7777{{>{e{^^3>:!:52",
"%>7'7ee^^####38#:__i_(;ktttx6$ya[a[ggbbbxw>>{7>7%%777>{{>ee^:::!;&",
"7{{{^3^^33##83#r#r>4fzkt-ty6$$6$[aa[ttty;b%'7'7'%7b%7%7''77e:e{3(t",
"{eee3!33u!!!3h88p!poz$kx-yx66$g$g$$$ttyw'o(wbw%wb76w7b7bb'7>ee>e7'",
"eee^3^^^!!!#jjr#pphrqz[kyy$wgggggg$g6$wo::''ww7w67xw''%''77>ee>>%'",
"^^e^^e::3:_++00444l4,stmky66ggggg)gggx)rei'_;;>w;7b;'''7'''7>{{7b;",
"^eee::>r:jqjrhrj0s|k4qf$]t6w)g))))))g;4uh>,_;;>xx'%xw7;'''%'7>{';6",
"e::e::#:rhp!!!!!p80nl,qf-t$wgg)g))));f>!p:#:_+7;x('-x7;w7('''7>gtt",
"^::::#h#phijq0,rr8hqq,io46ty$)))b)bwgb#!!!c3!#:';'%y;'xx%6'bb7>y&]",
">:>>rrh8qzfn|n1n}}*mkzl,iofy[$ggg)g;lorhirj,q,j:i>>'77;x'6w7g77y&&",
">:>,j88j|fsq,qs0slk2d2]5sqo'zt[[yt$boq4sq4q+llq4::#:ee7%%w6'g%'t//",
"7_>:r!i|5ir8!88p8hs|km]vv|so,'k]&atzlb4,rrrhrrhr#i^^3^^e{b6ww7b-&&",
"7(_:#8}m}phi8rhhp!rqssll|zzf4o4f$k6g4i8!!p!p88ppur:eee^ee7wg67%w;6",
"_'_rr0kqihskzl*ns0lznflssslll44%s)f4rphr,,qsll4qh#8#>>eee{%wb%77_o",
">>jhh0n!hl|2|qn*f}k2d22]]kkzzzzzzkkl44fn|nllz|ffqi#3>'7{{e77%o%{_%",
":i4,irj!j]zsqhhjrjlm]]2dd2dd&&vvvdvzzk|ss0jri,iiq,,##''77>{{7%%%%'",
"#>1|}hhjsdlhr8!88prs}n||kkkk55]m]k|l4,rh888!8h8p!hqr3'('%77{o%b%b'",
"#r~m20,j}|jp}*rss,q|nl}sssqsslsllsrp8hhrjqs4sls4i88!#_:''7{{{b)bb%",
"#iqs<||4qrhqm2*1mz|d252@m||||znn*}qj0ss}|mk|zkkkzqhh>>:>7>77{%)bbb",
"r4rhln<msrikmkss}l}222=dd==22v2v251|1|*n}zn4qss4n},s+::e^e{7{7)b)b",
"4|nssjldmzfk}0h8hhrf|||m]<]2]2v2<|n}}qjrhrj88hh!rnfl,p^^^^^e>%bb)'",
"4k2<msjz]dmziqqhrrhslss}}}lllfnnqr888888hj4q4ssrrs4rp!3^^^^^{%'')b",
"q4n|d2llzk]zhs@sn|}|mm||*z*flllljhhrj,qqs}5m]]]}jrhh,o#^e^^^^#{,'w",
"4,,iz2kn44f|4n2k|<|5=92d<22]55kk}}}*n**nnn]m]52nir,4fseu^e^^^3^eob",
"zf48jsz|kf4kvm|sjs,sk]<]22ddddd2||||}ffsq,l4ss|sqnzflru^eee^^ee:>(",
"|2kqjqq,m/zzk5s,!hh8,}s}*n||k|zlq,iirhhh8hjrslk|||4ippu#{^ee{e{^e7",
"fk]mnnsizd]]fnfnj,0j0}ss}}s}ss,rh8888hiiqsnn<mmzqqhrr,>:>{{{77>:::",
"j,}zlk2kf|k5f|]2|k@||<<<m1m1m|nsls4ssfnzk5]52nsrj44lfl%>7%%>7>7e>:",
"nqqjhq5<|nl|z]d5k|]@kdd=9=ddd2<k]t5kk|k|fnmkks4slkkzlq_'%b)777>e>:"};
