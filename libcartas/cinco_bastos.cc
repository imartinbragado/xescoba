/* IMBHeader:  1.0.0
 * Programa:   cinco_bastos.cc 
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
const char * cinco_bastos_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #020204",
"+	c #958539",
"@	c #C7C4B7",
"#	c #B8A322",
"$	c #A3A38E",
"%	c #4D4436",
"&	c #9F9033",
"*	c #706542",
"=	c #B7B386",
"-	c #77754F",
";	c #897244",
">	c #C1B55C",
",	c #B7B7AB",
"'	c #989465",
")	c #E4E4E2",
"!	c #A1926C",
"~	c #AFA454",
"{	c #848465",
"]	c #D5D4D0",
"^	c #797460",
"/	c #C1BC7F",
"(	c #B9A646",
"_	c #938C65",
":	c #AD9926",
"<	c #B0A574",
"[	c #B79E18",
"}	c #797A50",
"|	c #CDCCC3",
"1	c #867B58",
"2	c #77653F",
"3	c #BFB67B",
"4	c #BFBCAB",
"5	c #8A8A8B",
"6	c #2C2827",
"7	c #59554E",
"8	c #221E1C",
"9	c #F4F4F3",
"0	c #373739",
"a	c #A49B65",
"b	c #584C39",
"c	c #665444",
"d	c #AAABA6",
"e	c #B5AD7B",
"f	c #968C46",
"g	c #796D46",
"h	c #726D44",
"i	c #8C7B3B",
"j	c #B2AA5D",
"k	c #BBAC52",
"l	c #DCDCD7",
"m	c #9E9D92",
"n	c #ECECEA",
"o	c #4E4B37",
"p	c #7B7C62",
"q	c #5E5C4E",
"r	c #939583",
"s	c #A99B51",
"t	c #B49C3C",
"u	c #B0AEA1",
"v	c #FEFEFC",
"w	c #43372D",
"x	c #BEA319",
"y	c #8F8D84",
"z	c #685C46",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvv9m55555555y]vvvvvvvvv$555y]vvvvvvvv]y555$vvvvvvvvv]y55555555m9vvvv",
"vvvvmq55555555y]vvvvvvvv9$555y]vvvvvvvv]y555$9vvvvvvvv]y55555555qmvvvv",
"vvvvy5v]{puvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv5yvm66^vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55v^,vvvvvvvvvvvvvvvvvvvvvvv)@99@)vvvvvvvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55v6.6]vvvvvvvvvvvvvvvvvvvvlyy9nyylvvvvvvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vl,6qvvvvvvvvvvvvvvvvvvv]!;@9v@;r]vvvvvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvv@7vvvvvvvvvvvvvvvvvvlr2ilv9);2rlvvvvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55n0@d@vvvvvvvvvvvvvvvvvnm}*!n99n!2}mnvvvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55v4{|vvvvvvvvvvvvvvvvvvup-1@vvv9@}-puvvvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvv|{-pulvvvv)u{-{|vvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvv|5}h<,nvvvvn=$h}5|vvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvlrp}-e@vvvvvv@=}}}rlvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvv)$}}-'=lvvvvvv]='h}p$nvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvv,}}-r/unvvvvvvn,/r}}p,9vvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvv@5}}{=/@9vvvvvv94//}}}5|vvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvv)r}}h'/,]vvvvvvvv],/_-}}r)vvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvnm}}}{=/,nvvvvvvvvn4/={}}}$nvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvv94}}}}j//4vvvvvvvvv9@//j}}}p49vvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvv9|{}}}y//,]vvvvvvvvvv],//{}-}{]9vvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvlr}}}-_//4nvvvvvvvvvvn,//r-}}}rlvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvv)m}}}-{=/=@9vvvvvvvvvvv@//e{-p}}m)vvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvv94p}}-p=//=lvvvvvvvvvvvv]=/3=p-}}p49vvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvv9@{}}}}j///4nvvvvvvvvvvvvn,///j-}}}{@vvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvlr-}}-}=//=|9vvvvvvvvvvvv9|=/>e}-}}-ylvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvnm}}}}-a>>>=)vvvvvvvvvvvvvvl=>//a-}-}pmnvvvvvvvvv55vvvv",
"vvvv55vvvvvvvv9up}}}-'>/>==9vvvvvvvvvvvvvv9,>>>>'-}}}pu9vvvvvvvv55vvvv",
"vvvv55vvvvvvvv,p}}}}}j>>>e|vvvvvvvvvvvvvvvv|e/>>j}}}}}p4vvvvvvvv55vvvv",
"vvvv55vvvvvvvl5}--{a~>>>>=)vvvvvvvvvvvvvvvvn=>>>>~a{}}-5]vvvvvvv55vvvv",
"vvvv55vvvvvv)y}---''j>>>>@vvvvvvvvvvvvvvvvv94>>>>j''h-}-r)vvvvvv55vvvv",
"vvvv55vvvvv)m-}}h'jha>>>e]vvvvvvvvvvvvvvvvvvle>>>'hj&h}}}m)vvvvv55vvvv",
"vvvv55vvvv9dp}}h+kj*fk>j49vvvvvvvvvvvvvvvvvv94jkk!*kk+--}^u9vvvv55vvvv",
"vvvv55vvv94{--}}ss'zfk>j]vvvvvvvvvvvvvvvvvvvv]j>kfz's!}-}^{4vvvv55vvvv",
"vvvv55vvv|{---hf(a7wikkenvvvvvvvvvvvvvvvvvvvvn=kk;wqajf--^^{@vvv55vvvv",
"vvvv55vv|5^-}hf#(16w^(j]vvvvvvvvvvvvvvvvvvvvvv]kk-w6i(#+---^5|vv55vvvv",
"vvvv55vly-----[(s%%fsk=nvvvvvvvvvvvvvvvvvvvvvvnek!+%os(#h--}^rlv55vvvv",
"vvvv559,p^}--ht(+bgsk~@vvvvvvvvvvvvvvvvvvvvvvvv|~ksgb{(th--}-p,9y5vvvv",
"vvvv559r^}}---:xac1s(=9vvvvvvvvvvvvvvvvvvvvvvvvn=(<1zsx:-}-^-^r955vvvv",
"vvvv55n5--}}-h:xfwikt]vvvvvvvvvvvvvvvvvvvvvvvvvvlt(iw+x:h-}}}^5n55vvvv",
"vvvv55n5^}--h+xx&bf#49vvvvvvvvvvvvvvvvvvvvvvvvvv94(+%:x[+h^---5)55vvvv",
"vvvv559m-}-h+[xxxttjnvvvvvvvvvvvvvvvvvvvvvvvvvvvvnk(:#xxx+h-}-m955vvvv",
"vvvv55v,^-h+[xxxxx~]vvvvvvvvvvvvvvvvvvvvvvvvvvvvvv]t#xxx[[+h^},v55vvvv",
"vvvv55v95h-[xxx[:s]9vvvvvvvvvvvvvvvvvvvvvvvvv9v9vvv|~:xx[x[g-5nv55vvvv",
"vvvv55vvva&[[[[#<lvvvvvvvvvvvvvvvvv99n)||@4u/33@lnvvlat[[x[&mvvv55vvvv",
"vvvv55vvvvnkte@]9vvvvvvvvvvvvvv9nl|@=eej(((#(t#t:$]9v9l@k~e)vvvv55vvvv",
"vvvv55vvvvvvn99vvvvvvvvvvvv9n]@4=ee>k>k~s(as;*:x[[(@nvv9nn9vvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvv9n]|@=e=>>>>>kk(-hf12bo:xxxx#/nvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvv9)]@,==3/>3>>>k>k(gw6wc7+:x[xx[[t]vvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvn]@4==//////3>>>>>>s2gzzzg1t(#[[xx[x|vvvvvvvvvv55vvvv",
"vvvv55vvvv9vvvn]@,,/@////==3//je>j~j11<s'~((([i;ii&&+3vvvvvvvvvv55vvvv",
"vvvv55vvvvnl]@,=ee3=e$=da{}{f{}-}}1$ask(ats#:i--hghhh,vvvvvvvvvv55vvvv",
"vvvv55v9]|<+1_'{}}}{}---}}}---}}}-}}{-}i;{-i-h------}uvvvvvvvvvv55vvvv",
"vvvv55vl{122h-h-}}}}}}}}--}}}}}-}-}-}------h---}}---{lvvvvvvvvvv55vvvv",
"vvvv55v9]4,mr{yy{{{}}}}}}}}}}-}}}}}}-}-}----------^pu9vvvvvvvvvv55vvvv",
"vvvv55vvvvnnn))ll|@@4@,,,duudmmmrrrr{{{{p}pp---^}}{,nvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvv99nnnnnn)))l]]]|4,udmmryd]9vvvvvvvvvvvv55vvvv",
"vvvv55vvvvv9nnvvvvvvvvvvvvvvvvvvvvvvvvvvvvv9v9)))nvvvvvv9nnvvvvv55vvvv",
"vvvv55vvvv)=s=@]9vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvn|/<~@vvvv55vvvv",
"vvvv55vvvm&[x[##$lvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv9,~[[x[[i)vv55vvvv",
"vvvv55v9_-g[x[[#:~|9vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv)=:[xxx[&hp4v55vvvv",
"vvvv55v,^}h+[xxx[#~lvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv9=txxx[x:-h-y)y5vvvv",
"vvvv55nm}--h+[xxx:#jnvvvvvvvvvvvvvvvvvvvvvvvvvvvvv@t#[xxx[gh}}p|55vvvv",
"vvvv5y)5----h+xx&o+(,9vvvvvvvvvvvvvvvvvvvvvvvvvvvljtz*xx:;h--^p,55vvvv",
"vvvv55n5-}}--g:#+wi(slvvvvvvvvvvvvvvvvvvvvvvvvvvve#tc7#xih}-}}^455vvvv",
"vvvv559r--}---:x~c1sk=9vvvvvvvvvvvvvvvvvvvvvvvvv]~k_2;(x+---^-p@55vvvv",
"vvvv559,p----gtk1b^tk~@vvvvvvvvvvvvvvvvvvvvvvvv)e((_czsxi-}-}pyl55vvvv",
"vvvv55vlr}}-}h[(sb%fskenvvvvvvvvvvvvvvvvvvvvvvv@j~!*w;jxfh}--p,955vvvv",
"vvvv55vv|5---gf#k16w-kj]vvvvvvvvvvvvvvvvvvvvvv9=ks787sk:----pdnv55vvvv",
"vvvv55vvv@{-}--f(a7w;kk=nvvvvvvvvvvvvvvvvvvvvv|jk(%w{~~----^mnvv55vvvv",
"vvvv55vvvv,{---;as'z!k>j]vvvvvvvvvvvvvvvvvvvvn3k>(21ss+---pm)vvv55vvvv",
"vvvv55vvvvnup}}-ikk*!kk>49vvvvvvvvvvvvvvvvvvv]e>kk*'kt--}^5]vvvv55vvvv",
"vvvv55vvvvv)m----&~*s>>>e]vvvvvvvvvvvvvvvvvv9@k>>kgf~1-}-p@9vvvv55vvvv",
"vvvv55vvvvvv)r}---'_kk>>>@vvvvvvvvvvvvvvvvvv)=>>>kaa}--}p4vvvvvv55vvvv",
"vvvv55vvvvvvv]5}}-{$~>>>>e)vvvvvvvvvvvvvvvv9|e>>>k<'}-}}d9vvvvvv55vvvv",
"vvvv55vvvvvvvv,p}}-}}k>3>=|vvvvvvvvvvvvvvvvn=>>>>'-}}}}r)vvvvvvv55vvvv",
"vvvv55vvvvvvvv9up}}--'>>/>49vvvvvvvvvvvvvvv]e3>3j1-}}}5]vvvvvvvv55vvvv",
"vvvv55vvvvvvvvvn$}}-}-~3>3e)vvvvvvvvvvvvvvv4=>/>{-}-}{|vvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvv]'}}}--=//=|vvvvvvvvvvvvvv)=//>'-}}}},9vvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvv@{}}}-~///,nvvvvvvvvvvvvv]=//>{}}}}m)vvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvv9,}}}-{e//=]vvvvvvvvvvvv9,///a--}}rlvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvv)m}}}-}=//@vvvvvvvvvvvv)=//a-}}}p@9vvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvlr}}}-'//,nvvvvvvvvvvv|=/=-}}}p49vvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvv9|{}}-_//=]vvvvvvvvvv94//u-}}}d)vvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvv94}}}-u//@vvvvvvvvvvl,//_-}-ylvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvnm}}}{=/,nvvvvvvvvv|//$-}}{|9vvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvlr}}-'/=]vvvvvvvvn4/e}}}{,vvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvv|{}}p//@9vvvvvvvl,/m-}}$nvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvv9,}}-r/unvvvvvvv|==}}}rlvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvn$}}-r=lvvvvvv94ep-}{|vvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvv]m}}}=@vvvvvv)=r-}{,9vvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvv|5}hm=nvvvvv|=}}}dnvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvv|{-{u)vvvv9@r-}$nvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvv9,}-}@vvvvnr-}rlvvvvvvvvvvvvvvvnyo%9v55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvvv)m}*!)9v9@gh{@vvvvvvvvvvvvvvvvp]vd9v55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvvvvlrhilvvve2},9vvvvvvvvvvvvvvvv7pvvvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvvvvv]!;@9v)!1,nvvvvvvvvvvvvvvvvvr.0^vv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvvvvvvlyynv@g49vvvvvvvvvvvvvvvvvvvd0ovv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvvvvvvvl@9vl@9vvvvvvvvvvvvvvvvvvv@dd{vv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv7..dvv55vvvv",
"vvvv55vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv55vvvv",
"vvvvpo55555555$vvvvvvvvvv$555y]vvvvvvvvv$555y]vvvvvvvv]y5555555575vvvv",
"vvvv,p55555555$9vvvvvvvv9$5555]vvvvvvvv9$555y]vvvvvvvv]y555555555]vvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv",
"vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv"};
