/* IMBHeader:  1.0.0
 * Programa:   siete_copas.cc 
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
const char * siete_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #020204",
"+	c #8E8378",
"@	c #CAC4C0",
"#	c #A6A3A1",
"$	c #4C4C4A",
"%	c #7E6254",
"&	c #C7A892",
"*	c #9D6438",
"=	c #B38461",
"-	c #7E4426",
";	c #E6E4E2",
">	c #C6BAB1",
",	c #815439",
"'	c #D7D4D2",
")	c #A7957D",
"!	c #965427",
"~	c #9B7457",
"{	c #BAB4AD",
"]	c #727274",
"^	c #DDC3AC",
"/	c #BB9C83",
"(	c #9D9486",
"_	c #DABBA0",
":	c #B9A493",
"<	c #AA9B83",
"[	c #8B644A",
"}	c #D5A987",
"|	c #A9642E",
"1	c #845C43",
"2	c #8D6C57",
"3	c #E0CBB8",
"4	c #575554",
"5	c #9C8474",
"6	c #2E2E2C",
"7	c #713B20",
"8	c #F5F4F4",
"9	c #73442D",
"0	c #AD7343",
"a	c #755442",
"b	c #8C7366",
"c	c #9D7C6B",
"d	c #AE8C6F",
"e	c #726B67",
"f	c #7F4D31",
"g	c #9C5C2E",
"h	c #8A8A8C",
"i	c #9D9A97",
"j	c #CDCBCA",
"k	c #DDDBDA",
"l	c #B27C53",
"m	c #EDECEB",
"n	c #FEFEFC",
"o	c #C8B19F",
"p	c #B8ACA2",
"q	c #9C8D7E",
"r	c #AEADAA",
"s	c #A16C3D",
"t	c #BDBBB8",
"u	c #AA6B39",
"v	c #8D7C6D",
"w	c #7C7C7C",
"x	c #5E5E5C",
"y	c #754C38",
"z	c #D7B091",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnn8#i#rrrr{r{r{r{r{r{r{;nnnnnnnnnnnnnnnnnn;{r{r{r{r{r{r{rrr#ii#8nnnn",
"nnnn#e#{@@jjjjjjjjjjjjjjjmnnnnnnnnnnnnnnnnnnmjjjjjjjjjjjjjjj@trieinnnn",
"nnnnhi@...wnn888n8888nnnnnnnnnnnnnnnnnnnnnnnn88888m88m888nnnnnnnihnnnn",
"nnnni#tir4{nnnnnnnnnn8nnnnnnnnnnnnnnnnnnnnnn8nnn8nnnnn8nnn8nnnn8i(nnnn",
"nnnni#8nn$8nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnihnnnn",
"nnnnh#nn@$nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn8m;m;;mmm8nnnnnnnni(nnnn",
"nnnni#nn$tmkj@@jj@@j@@jk8nnnnnnnnnnnnnnnnnm'@@@j3'^^3'j@@@k8nnnnihnnnn",
"nnnnh#n86t{>33^^__^^^^3@p{knnnnnnnnnnnnnn'{@__33^__^^^^33^>{;nnni(nnnn",
"nnnni#n{4^^__^__z^3333^^__p'nnnnnnnnnnnnn{_^____z}_^333^^___@8nnihnnnn",
"nnnnh#n8p____z}}}__^^^___o('nnnnnnnnnnnnnt(:_z}}}____^___zp#jnnni(nnnn",
"nnnni#nnrq)/&}}____^__o/dq(nnnnnnnnnnnnnn')qq(d):ooooo:<qqq#;nnnihnnnn",
"nnnnh#nn><((5qq()<i(qq(())pnnnnnnnnnnnnnnm))(d<<)()(qq()<</#8nnni(nnnn",
"nnnni#nn'<)))))<<<)<))<<<(jnnnnnnnnnnnnnnnp<)))))<<<))<))<<{nnnnihnnnn",
"nnnnh#nnm<<))<<)<<<))))))<mnnnnnnnnnnnnnnn@)<q)<<)<<<)()<)<'nnnni(nnnn",
"nnnni#nnnp<)d)<))<<)q))<<{nnnnnnnnnnnnnnnnm<)d)())<<)d<q)<#8nnnnihnnnn",
"nnnnh#nnnk(q)))<<))d)))<)knnnnnnnnnnnnnnnnnt()))<<)dq(d)))>nnnnni(nnnn",
"nnnni#nnn8rq)))))d(q))()#nnnnnnnnnnnnnnnnnnm)q)))))))))))<mnnnnnihnnnn",
"nnnnh#nnnn'))))<<<))q))<knnnnnnnnnnnnnnnnnnn@)))<<<)))))<jnnnnnni(nnnn",
"nnnni#nnnnnp))<)<<)))))tnnnnnnnnnnnnnnnnnnnn8p))<<<<))))#nnnnnnnihnnnn",
"nnnnh#nnnnn8#<)<)<<))<<8nnnnnnnnnnnnnnnnnnnnn8i)))<<)()<mnnnnnnni(nnnn",
"nnnni#nnnnnn;()<<<<)q<knnnnnnnnnnnnnnnnnnnnnnnki<<))d)iknnnnnnnnihnnnn",
"nnnnh#nnnnnnnk()))qd(knnnnnnnnnnnnnnnnnnnnnnnnn@q))q(+'nnnnnnnnni(nnnn",
"nnnni#nnnnnnnn(vq)qbrnnnnnnnnnnnnnnnnnnnnnnnnnn;1%+v%18nnnnnnnnnihnnnn",
"nnnnh#nnnnnnnn<7%2%7>nnnnnnnnnnnnnnnnnnnnnnnnnnmyyg192nnnnnnnnnni(nnnn",
"nnnni#nnnnnnnn{7,,19@nnnnnnkj{{{{ppo{{{j;nnnnnnnyy1[9bnnnnnnnnnnihnnnn",
"nnnnh#nnnnnnnno7[|19jnnn8t#&^^^__z_^__^^p:t8nnnnffu|y2nnnnnnnnnni(nnnn",
"nnnni#nnnnnnnn/7[|[->nnn>_^___^_z_^3333^__or8nn;f,*g,18nnnnnnnnnihnnnn",
"nnnnh#nnnnnnnn5-g![-/nnn{&___z}}}z__^^____:#nnn@-1!g,f'nnnnnnnnni(nnnn",
"nnnni#nnnnnnnm1y*g*9%nnnjhq<&&}z__^____:)q5jnnn57[g|17/nnnnnnnnnihnnnn",
"nnnnh#nnnnnnnp7,gguyfjnn;)))qqq()i<(((q(<));nnjy9g!g[9%mnnnnnnnnihnnnn",
"nnnni#nnnnnnma71!!!,7v8n8<)))))<<<<))))<)<<nn8b7ag!f!y7(nnnnnnnnihnnnn",
"nnnniinnnnnn(79gg!g[97{nn{<))))))<<)))))<)tnnp771g||g179@nnnnnnni(nnnn",
"nnnn(innnnn>y91guu|g[7a'nk<)d<)<)<<)q)))<<;n@a9,u||||s17%;nnnnnnihnnnn",
"nnnnhinnnnmc[2d=lll=d2[<nn#q())<<<))))(<)#nn@~s5=lllll5~5;nnnnnnhhnnnn",
"nnnnhinnnnnk>>__}ooz>>@;nnkdq)))))qd)d))<'nnnm'j^_>>_@j'8nnnnnnn(hnnnn",
"nnnnhhnnnnnnn8m88mm888nnnn8r)))<<)))()))rnnnnnnnnnnnnnnnnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnnnnnnnnnnnnnnk<))<<<<)))<<;nnnnnnnnnnnnnnnnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnnnnnnnnnnnnnnnj))))<<))))@nnnnnnmkkkkkkkkmnnnnnnnnhhnnnn",
"nnnnhhnnnnm'@{{>{o{{{{@'mnnnn{)<<<<)q({nnnmj{po>__oz_@>op{j8nnnnhhnnnn",
"nnnnhhnnk{:>^^__zz_^^^^>:pknnnr))))d)rnnn'p>__^^__z_^^^^3^opknnnhhnnnn",
"nnnnhhnm{^___^__z_^^^33^__:'nnk2+qqvbmnnn{______}}_^^33^____{8nnhhnnnn",
"nnnnhhnm<z__zz}}z__^^^___o('nnmaa22a1nnnntq:_z}}}z_______zp(@nnnhhnnnn",
"nnnnhhnniq(:&}}__^^^__o<dh(nnnny9,172nnnnk)qq(q<&ooo>&:<qq(<;nnnhhnnnn",
"nnnnhhnn{))(5qq()<)(qqq)<)pnnnnff**ybnnnnm))(d<)(()(q(()<<<<8nnnhhnnnn",
"nnnnhhnnj))))))<<<)))<<)<<jnnnmf,|*y[nnnnnr)<)))))<<))<)))<{nnnnhhnnnn",
"nnnnhhnnm<)))<<<)<<<)))<)<mnnnkfagg,,;nnnn@<)d)<<)<<))))<)<'nnnnhhnnnn",
"nnnnhhnnnp<)d()<)<))q)(<){nnnn:71*|19>nnnnm<)()(<)<<)q)))<<8nnnnhhnnnn",
"nnnnhhnnnk(q)))<<<)d))))<knnnm[-1!|[75nnnnnt(d)))<))d)))))tnnnnnhhnnnn",
"nnnnhhnnn8pq))())((dq)))#nnnn#7yg!!!99@nnnnm)q)))))(dq)))<mnnnnnhhnnnn",
"nnnnhhnnnn'))))<)))))))<knnnky71g!!ga72mnnnn@)))<<))<)))<jnnnnnnhhnnnn",
"nnnnhhnnnnnp)))<<<<))<)tnnn82771|||g1-7q8nnn8p))<<<<))))rnnnnnnnhhnnnn",
"nnnnhhnnnnn8#<<))<))))<8nnn#971||gggua7yjnnnn8<)))<<)()i;nnnnnnnhhnnnn",
"nnnnhhnnnnnn;))<<<))(<knnnn;)b2*g!gg*2b{8nnnnnki<<)<d));nnnnnnnnhhnnnn",
"nnnnhhnnnnnnnk()))(d(knnnnnnnmk3@{>>j;mnnnnnnnn@q))q(+'nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnn(vqqq2rnnnnnnnnnnnnnnnnnnnnnnnnnn;1%+c%%8nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnn/7[2%9>nnnnnnnnnnnnnnnnnnnnnnnnnn8yy119%nnnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnn{7a,,7jnnnnnnnnnnnnnnnnnnnnnnnnnnny9g[ybnnnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnp7[|[9@nnnnnnnnnnnnnnnnnnnnnnnnnnna,u|y2nnnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnn/7[|[->nnnnnnnnnnnnnnnnnnnnnnnnnn;ff*g,18nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnn5-g![f<nnnnnnnnnnnnnnnnnnnnnnnnnn@-1!g,f'nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnm1y*g*-[nnnnnnnnnnnnnnnnnnnnnnnnn857[g|17/nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnp7,gg|yyjnnnnnnnnnnnnnnnnnnnnnnnnjy9g!|[9%mnnnnnnnnhhnnnn",
"nnnnhhnnnnnnma71!!!,7v8nnnnnnnnnnnnnnnnnnnnnnnb7ag!f!y7(nnnnnnnnhhnnnn",
"nnnnhhnnnnnn)79ggg![97{nnnnnnnnnnnnnnnnnnnnnn:77,g||!179@nnnnnnnhhnnnn",
"nnnnhhnnnnnty71g|ugg17a'nnnnnnnnnnnnnnnnnnnnjy71*||||ua7%;nnnnnnhhnnnn",
"nnnnhhnnnnm2,[cl000ll1,qnnnnnnnnnnnnnnnnnnnn>2[~0uuss0~[bknnnnnnhhnnnn",
"nnnnhhnnnnnj::////d/:/{;nnnnnnnnnnnnnnnnnnnnnm@>oo&:&o>j8nnnnnnnhhnnnn",
"nnnnhhnnnnnnn8m;;;;mm8nnnnnnnnnnnnnnnnnnnnnnnnnnnn8nnnnnnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn;kk'kkkk;nnnnnnnnhhnnnn",
"nnnnhhnnnnnkj>{{>po{{{>j;nnnnnnnnnnnnnnnnnnktpp>>^_&_^>op{t;nnnnhhnnnn",
"nnnnhhnn8t:o_^^__z_^^_^^p:t8nnnnnnnnnnnnn8{o__^^__z_^^^^3^_ptnnnhhnnnn",
"nnnnhhnn@>____^_z_^3^33^__or8nnnnnnnnnnnn;p_____z}z_^33^____o'nnhhnnnn",
"nnnnhhnnto___z}}}z__^^____:#nnnnnnnnnnnnnm(/&zz}}zz___^___&<i8nnhhnnnn",
"nnnnhhnnjqq<&&}z__^^___:)q5jnnnnnnnnnnnnnn#(qqq):ooo>&p/(qq)pnnnhhnnnn",
"nnnnhhnn;))(qqq()<<(((q(<));nnnnnnnnnnnnnnt))))))(((q(q<<<<<@nnnhhnnnn",
"nnnnhhnnn<)))))<<)<)())<<<<nnnnnnnnnnnnnnnk<))))))<<))))<)<#;nnnhhnnnn",
"nnnnhhnnn{<))))))<<)))))))tnnnnnnnnnnnnnnn8i<)))<<)<<)())<):8nnnhhnnnn",
"nnnnhhnnnk<)q<)<<<<)d<(<<<;nnnnnnnnnnnnnnnn@)))))<</<))))<<jnnnnhhnnnn",
"nnnnhhnnnn#d)))<))))())))#nnnnnnnnnnnnnnnnnm(dq)))))qdq)()<mnnnnhhnnnn",
"nnnnhhnnnnkqd())<)qdqd))<'nnnnnnnnnnnnnnnnnnt)q))<))))d)))tnnnnnhhnnnn",
"nnnnhhnnnn8r())<<))))))<#nnnnnnnnnnnnnnnnnnn8)))<)<)))))<#8nnnnnhhnnnn",
"nnnnhhnnnnnk<)))<<<))<)<mnnnnnnnnnnnnnnnnnnnnk))<)<<<))))knnnnnnhhnnnn",
"nnnnhhnnnnnnj)<<)<<<)()jnnnnnnnnnnnnnnnnnnnnnn@))<<<<)q)tnnnnnnnhhnnnn",
"nnnnhhnnnnnnn{(<<<<)d({nnnnnnnnnnnnnnnnnnnnnnnnr))<)))({nnnnnnnnhhnnnn",
"nnnnhhnnnnnnn8p)))q)(p8nnnnnnnnnnnnnnnnnnnnnnnn8q)(dqq<8nnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnkb+)qvbmnnnnnnnnnnnnnnnnnnnnnnnnnn<av+by{nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnmya2[a%nnnnnnnnnnnnnnnnnnnnnnnnnnn#71!19@nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnny91,92nnnnnnnnnnnnnnnnnnnnnnnnnnno71ga9@nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnnfy|*y2nnnnnnnnnnnnnnnnnnnnnnnnnnnp7[|[-@nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnmff|*y[nnnnnnnnnnnnnnnnnnnnnnnnnnn)7*g[-pnnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnnkf1gg1,;nnnnnnnnnnnnnnnnnnnnnnnnnn~f[![-5nnnnnnnnnhhnnnn",
"nnnnhhnnnnnnnn:71*g19>nnnnnnnnnnnnnnnnnnnnnnnnnj-f*||9,mnnnnn;8nhhnnnn",
"nnnnhhnnnnnnnm[71!|[75nnnnnnnnnnnnnnnnnnnnnnnnn57,!g*a7:nnnn8x'nhhnnnn",
"nnnnhhnnnnnnn#7yg!!!99@nnnnnnnnnnnnnnnnnnnnnnn@77[!!f17aknnn@xnnhhnnnn",
"nnnnhhnnnnnnky71gg!ga72mnnnnnnnnnnnnnnnnnnnnn;%7y!||ggy7b8n8einnhhnnnn",
"nnnnhhnnnnn8b791||ug[-7qnnnnnnnnnnnnnnnnnnnnnv792||||u[99#nk$mnnhhnnnn",
"nnnnhhnnnnnp,f20uuuu02y1'nnnnnnnnnnnnnnnnnnn8c1[su|**|~[1<nr#n8nhhnnnn",
"nnnnhhnnnnnmp))d====d))>nnnnnnnnnnnnnnnnnnnnnn'{::/)//otknn$$]enhhnnnn",
"nnnnhhnnnnnnn8m;k'kk;m8nnnnnnnnnnnnnnnnnnnnnnnnnn8n88nnnnnnhhwinhhnnnn",
"nnnnw$hhhhhhhh+hqhhhhhhh#nnnnnnnnnnnnnnnnnnn'hhhhhhhhhhhhhhhhhhh4hnnnn",
"nnnn{whhhhhhhhhhhh+hhhhh#8nnnnnnnnnnnnnnnnnn'hhhhhhhhhhhhhhhhhhhh'nnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn"};
