/* IMBHeader:  1.0.0
 * Programa:   rey_copas.cc 
 * Directorio: xescoba-1.2.1/libcartas 
 * Fecha:      Sun Apr 15 16:44:38 CEST 2001 
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
const char * rey_copas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #060506",
"+	c #568A82",
"@	c #ADC6C1",
"#	c #9C8A6B",
"$	c #37496C",
"%	c #B2A465",
"&	c #784A33",
"*	c #699F96",
"=	c #3B6A60",
"-	c #DDE6E4",
";	c #798882",
">	c #C5AA92",
",	c #A0955B",
"'	c #9EB6B2",
")	c #CFC876",
"!	c #A29888",
"~	c #6C6444",
"{	c #58483A",
"]	c #62978F",
"^	c #786C51",
"/	c #89A5A0",
"(	c #D0D4D4",
"_	c #FEFEFC",
":	c #92925F",
"<	c #9CA8A6",
"[	c #AC9A81",
"}	c #9E6236",
"|	c #445773",
"1	c #567B7A",
"2	c #B0A79C",
"3	c #787975",
"4	c #648B86",
"5	c #444889",
"6	c #2E2B2B",
"7	c #723E24",
"8	c #C3B85D",
"9	c #835538",
"0	c #5C574D",
"a	c #3A3A3E",
"b	c #957C6A",
"c	c #477972",
"d	c #1D1D1C",
"e	c #CDC8C3",
"f	c #C4B9AE",
"g	c #616A74",
"h	c #8DB0A9",
"i	c #5A5D66",
"j	c #9A5B2E",
"k	c #839592",
"l	c #B28E41",
"m	c #B39750",
"n	c #8A8A8C",
"o	c #BBC7C5",
"p	c #2D2C69",
"q	c #B4B7B6",
"r	c #877863",
"s	c #DBB89C",
"t	c #3A3B79",
"u	c #484949",
"v	c #48687B",
"w	c #8A6B52",
"x	c #DAD9D6",
"y	c #68787A",
"z	c #EAEAE9",
"______________________________________________________________________",
"______________________________________________________________________",
"______________________________________________________________________",
"______________________________________________________________________",
"____z<nnnnnnnnnnnnnnnnnnnx__________________xnnnnnnnnnnnnnnnnnnn<z____",
"____[innnnnnnnnnnnnnnnnnn(__________________(nnnnnnnnnnnnnnnnnnn0<____",
"____nn_na__ndaz_________________________________________________nn____",
"____nnqa6_-3n.!_________________________________________________nn____",
"____nn_06_z__.<_________________________________________________nn____",
"____nn_06___edxxefeffeexz_____________z2z__ez___________________nn____",
"____nn_06___32>fssssssesff________x<z_x!z_-u2_z(z_______________nn____",
"____nn_|6__0y#0>sssssesss2x_______xu:(%)xxx3ezxi-_______________nn____",
"____nnqd.!3...a[[msssf>[#[_________:3:::^,888,b!________________nn____",
"____nn_______f[#[!!!!#![!f_________(,88%:%8)%,;x________________nn____",
"____nn_______([[#!![[!![!x__________)8:{~,%:~r!_z_______________nn____",
"____nn________[#[![!l!#[[___________z[0^^^0{^~q_________________nn____",
"____nn________(#[#[##[![e____________(rm%8%%mrk_________________nn____",
"____nn_________[[![[[#!2z____________z,wrm#:%[qz________________nn____",
"____nn_________x[[![[![x______________q##,#~,[ee________________nn____",
"____nn__________e![![#e_______________e%ml>%[2x(z_______________nn____",
"____nn___________!b#b2_______________z>m#[%%%f(ox_______________nn____",
"____nn___________[&w92________________%#r[[m[eeq(z______________nn____",
"____nn___________2&j&f_______________(;rf#b%f(foez______________nn____",
"____nn___________[9}92_______________!no((!r2o2eee______________nn____",
"____nn___________w9j9b_______________<e(qo(q2e<e(qz_____________nn____",
"____nn__________x&jjj&z_____________z!e(gexx(enqxnz_____________nn____",
"____nn__________b7j9j7#_____________z!oq;f(xxq<!o3xz____________nn____",
"____nn_________279j}j97e____________-k<41'q((eq32y2-z___________nn____",
"____nn_________w&}jjj}&#___________zq<1c]/*<@<e!n3!g<-z_________nn____",
"____nn__________(>>[[f(____________xk/**]***//h<!g!'1;-_________nn____",
"____nn_____________________________q+**********/@3nh*4o_________nn____",
"____nn_____________________________/************'k;4**<z________nn____",
"____nn____________________________z]****]]]******]1]**<_________nn____",
"____nn____________________________(+***41|11++]*******/z________nn____",
"____nn____________________________h]***4gtttt5$v]*****'z________nn____",
"____nn___________________________-]]***155555555]*****@(________nn____",
"____nn___________________________@*]]**155t5t555]*****'o________nn____",
"____nn__________________________z]*+]**15v=c$t5g****]**@________nn____",
"____nn_________________________-]]]]***c5vcc$55;***]]**<-_______nn____",
"____nn_______________________z-h+*]*]**+5|c1t5i+*]*+]**/z_______nn____",
"____nn_______z__z2(z_______z-@+]**]****c|vc|t53]**]++**<z_______nn____",
"____nn___________q<2xz____z@]+]***]****+||vtti1]**]+**]/z_______nn____",
"____nn______zeq!2!#[[e(xx@]c+*]*****]**]55|p5|1*]*+]]]*<-_______nn____",
"____nn______xk!#mmlml#ikv+*]***]**]****'|5tp5$+***+*]**<z_______nn____",
"____nn______xk#,lllmlm!e/+*]**]]*]+]****$5pt|v]***+*+**@z_______nn____",
"____nn_______23lml,[2%#o/+****]**]4*****v5ptv+****]]**/<________nn____",
"____nn_______zn!%2((4k0/*]**]]]**+<*****1it$v]*]*]]]]*/o________nn____",
"____nn_________zzz_x4+1v=********v@****]]|$|c****]]]+]/(________nn____",
"____nn_____________-+4+]+]*]*****=*******]++****]+*]]*/-________nn____",
"____nn_____________-+]]+]**]****1c********]******c]h**<_________nn____",
"____nn_____________-+]+]***]***'y+*********]*****]3<@*o_________nn____",
"____nn_____________-]]]/******'ey]*]*********]+14yb[eq-_________nn____",
"____nn_____________zh+]q'***]/(_g]**********]c;:#bl#!<_z________nn____",
"____nn_______________-2k/**/@__-1**********h+;mmml%k*<__________nn____",
"____nn________________-_______z(1**]********4,mml,y41h__________nn____",
"____nn_______________z_z___z___q+****]*****/3l%,,yc++/__________nn____",
"____nn_________________________h]*]]******'/;r!nk1c]+'__________nn____",
"____nn________________________z]**********1;<6'/]kk*4o__________nn____",
"____nn________________________x+**]*******]ik0fk/h2@(___________nn____",
"____nn________________________h]*]]********/0yq3*hze_z__________nn____",
"____nn______________________z_]**]]***]*****303y4o______________nn____",
"____nn________________________***]]***]**]**;!i+]@z_____________nn____",
"____nn_______________________-***]***]]****]yo;++o______________nn____",
"____nn_______________________(]**+***]*****];qk++'______________nn____",
"____nn______________________z@***]**]]*]***]y!4]+h______________nn____",
"____nn_______________________'******]]*****]iic]+'z_____________nn____",
"____nn______________________-***]***]**]***]g;4]4o______________nn____",
"____nn______________________@]****]]+******]kk]+]zz_____________nn____",
"____nn_____________________z******]]]******]!k]]k_______________nn____",
"____nn_____________________-]]]***]]*******]!k]]hz______________nn____",
"____nn_____________________o]*****]****]]**]k!]+<_______________nn____",
"____nn_____________________@+****]+*]**+]**4yy]+@_______________nn____",
"____nn_____________________@]*****]****]**]4gy]+<_______________nn____",
"____nn_____________________@]***]]+****]]*];;4+4-_______________nn____",
"____nn_____________________@]****]]***+***+k;1]=x_______________nn____",
"____nn_____________________@*]***]*****]**]k;++=(_______________nn____",
"____nn____________________z/*****+**]*]]**]/;]+1x_______________nn____",
"____nn____________________-******+****+**]*/3]++(_______________nn____",
"____nn____________________o]]]***]****]]**]/3]14(z___z__________nn____",
"____nn___________________z/+]]***+****]***4k4]ck-z______________nn____",
"____nn___________________(+]]]**]+**]]]]**];;]c/z_____z_________nn____",
"____nn___________________@+]]]*]++]]]*]***];k+co__z_____________nn____",
"____nn___________________@+]]**++]]*******/kk+cqz_______________nn____",
"____nn___________________@+]]*]]+]]]*]**]]hk!]c-________________nn____",
"____nn_________________z-o1+]]]]+*]**]]**]'k<]c-________________nn____",
"____nn___________________zo]c+]++]]]]]**4]<kk]=-z_z_____________nn____",
"____nn____________________zzq;///h*]]]]]]+//4]4zz_______________nn____",
"____nn_____________________z[rba~(@@hhh*/]i<c]h-________________nn____",
"____nn____________________zou6b73_z_zzx'q<0n//o_________________nn____",
"____nn____________________zn6dwb<______z~i6<____________________nn____",
"____nn_______________z__z_2^6.0be______z2b~x_z__________________nn____",
"____nn__________________z!0#i{bbz_______2wa;____________________nn____",
"____nn________________zzyu3^n2qe_______(n^uaf___________________nn____",
"____nn_________________ez_z___z________z2[g6ix__________________nn____",
"____nn__________________________________x[#wrx__________________nn____",
"____nn___________________________________z##{e__________________nn____",
"____nn____________________________________[#bq__________________nn____",
"____nn____________________________________x^n2_________i...3<.dqnn____",
"____nn____________________________________zeex________z3e3i__6i_nn____",
"____nn__________________________________________________z3___60_nn____",
"____nn_________________________________________________zde___60_nn____",
"____nn_________________________________________________<.__z_60_nn____",
"____nn_________________________________________________!.n3-_6aqnn____",
"____nn__________________________________________________6dn__an_nn____",
"____3unnnnnnnnnnnnnnnnnn<___________________xnnnnnnnnnnnnnnnnnnn0n____",
"____q3nnnnnnnnnnnnnnnnnn!___________________(nnnnnnnnnnnnnnnnnnnn(____",
"______________________________________________________________________",
"______________________________________________________________________",
"______________________________________________________________________",
"______________________________________________________________________"};
