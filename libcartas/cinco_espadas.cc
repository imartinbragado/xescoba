/* IMBHeader:  1.0.0
 * Programa:   cinco_espadas.cc 
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
const char * cinco_espadas_xpm[] = {
"70 110 65 1",
" 	c None",
".	c #020204",
"+	c #5B85A0",
"@	c #C4C4C4",
"#	c #444444",
"$	c #85A2BC",
"%	c #356E96",
"&	c #848484",
"*	c #646565",
"=	c #8294A0",
"-	c #242424",
";	c #6A4440",
">	c #627684",
",	c #E4E4E4",
"'	c #A4A4A4",
")	c #9A9B9B",
"!	c #5F2724",
"~	c #B3B4B4",
"{	c #7693A8",
"]	c #708594",
"^	c #D5D4D4",
"/	c #8E9BA7",
"(	c #663C3C",
"_	c #427495",
":	c #766469",
"<	c #675758",
"[	c #520F0B",
"}	c #555455",
"|	c #958B8A",
"1	c #AAAAAC",
"2	c #867472",
"3	c #8A8B8C",
"4	c #5D5D5D",
"5	c #909396",
"6	c #131314",
"7	c #353534",
"8	c #F4F4F4",
"9	c #5A656C",
"0	c #567C94",
"a	c #571C15",
"b	c #745551",
"c	c #647B8E",
"d	c #5B8CB0",
"e	c #BBBBBC",
"f	c #9CA3A6",
"g	c #779DB9",
"h	c #728B99",
"i	c #7C7B7C",
"j	c #CCCCCC",
"k	c #6B6C6C",
"l	c #4A7E9C",
"m	c #60302E",
"n	c #FEFEFC",
"o	c #4D4D4C",
"p	c #2D2D2C",
"q	c #ECECEC",
"r	c #DADADC",
"s	c #1C1C1C",
"t	c #3C3C3C",
"u	c #6E4C4B",
"v	c #775E5C",
"w	c #717D84",
"x	c #A39B98",
"y	c #737374",
"z	c #AEADAC",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnn8'33333333333333^nnnnnnnnn'333333333^nnnnnnnn^33333333333333'8nnnn",
"nnnn)433333333333333j88888nnn8'&3&3&&3&3jnnnnn888@3&&3&&&&3&&&&&4)nnnn",
"nnnn3&nnnnnnnnnnnnnnnn8nnnnnnnnnnnnnnnnnnnnnnnnnn8nnnnnnnnnnnnnn|3nnnn",
"nnnn338^ii1nnnnn8q8nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn)3nnnn",
"nnnn338)7pknnnn8z|x^nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn8j1eqnnnnnnnnf3nnnn",
"nnnn3&8y~nnnnnnju!()nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn^v(uxnnnnnnnn'3nnnn",
"nnnn3&8p.p^nnnnj([!xnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn@(a!xnnnnnnnn13nnnn",
"nnnn|&qr~-*nnnn^u[!znnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnr;[!1nnnnnnnnz38nnn",
"nnnn338nn@}nnnnru[mennnnnnnnnnnnnnnnnnnnnnnnnnnnnnnru[!~nnnnnnnnz|nnnn",
"nnnn3&r7@1ennnn,:[(@nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn,v[(@nnnnnnnnz38nnn",
"nnnn3&8@&jnnnnnq2!vrnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnq2aurnnnnnnnnz5nnnn",
"nnnn33qnnnq@z)=h*v<h=/zjqnnnnnnnnnnnnnnnnnnnnn8,^e~'*b<fe@^,nnnnz&nnnn",
"nnnn33qnn,5=${d+c49__%l+3^nnnnnnnnnnnnnnnnnnnqf==hd0>kk___0]),nnz3nnnn",
"nnnn3&8nnqz////54}k&={3=frnnnnnnnnnnnnnnnnnnn,5=$={h4#4c00+h=jnn13nnnn",
"nnnn3&8nnnnnnn8@*yf~8888nnnnnnnnnnnnnnnnnnnnnnq,,,,e9yfz,,rrqnnn13nnnn",
"nnnn3&8nnnnnnnnj5yzennnnnnnnnnnnnnnnnnn@nnnnnnnnnnnj&y'ennnnnnnn13nnnn",
"nnnn3&8nnnnnnnnj)i'ennnnnnnrj^^@r^r@qzqoeneqnnnnnnnj'i1ennnnnnnn13nnnn",
"nnnn3&8nnnnnnnn@#k1ennnnnnnno@}i}1}~483o'13innnnnnn@4k'ennnnnnnn'3nnnn",
"nnnn3&8nnnnnnnnepk)~nnnnnnnjky#@1**'&5zoy'4&nnnnnnnepy1~nnnnnnnn138nnn",
"nnnn3&8nnnnnnnne7yxennnnnnnnnnnnnnnnnnnnnnnnnnnnnnne7k)ennnnnnnn'3nnnn",
"nnnn3&8nnnnnnnnepykznnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnepyiznnnnnnnn'3nnnn",
"nnnn3&8nnnnnnnnepiyznnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~pykznnnnnnnn13nnnn",
"nnnn3&8nnnnnnnneo&i~nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnet&i~nnnnnnnn'3nnnn",
"nnnn3&8nnnnnnnne))k~nnnnnnnnjrn^8nnnnnnnnnnnnnnnnnne35kznnnnnnnn1&nnnn",
"nnnn3&8nnnnnnnn@3i&@nnnnnnnnz^n~^@er,j@,rnnnnnnnnnne'3&@nnnnnnnn13nnnn",
"nnnn3&8nnnnnnnn~74&ennnnnnnn1^n&1i&z1&^7nnnnnnnnnnne#4&ennnnnnnn'&nnnn",
"nnnn3&8nnnnnnnn~-*3ennnnnnnn5~ii)iy~i*5}@nnnnnnnnnn~p43ennnnnnnn13nnnn",
"nnnn3&8nnnnnnnnzp4kennnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~-*yennnnnnnn'&nnnn",
"nnnn3&8nnnnnnnnz-k|ennnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~-kiennnnnnnn13nnnn",
"nnnn3&8nnnnnnnn~o&~@nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnzti1@nnnnnnnn'&nnnn",
"nnnn3&8nnnnnnnne'))@nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~&)'@nnnnnnnn'3nnnn",
"nnnn3&8nnnnnnnnez'3ennnnnnnnnnnnnnnnnnnnnnnnnnnnnnnee'3ennnnnnnn1&nnnn",
"nnnn3&8nnnnnnnn~*&5@nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~i35@nnnnnnnn'3nnnn",
"nnnn3&8nnnnnnnn~3izjnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~ky'jnnnnnnnn'&nnnn",
"nnnn3&8nnnnnnnne^)1jnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnne@)zjnnnnnnnn'&nnnn",
"nnnn3&8nnnnnnnnee&)jnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnej3'jnnnnnnnn'3nnnn",
"nnnn3&8nnnnnnnnzk&zjnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnz3i'jnnnnnnnn'&nnnn",
"nnnn3&nnnnnnnnn'py1jnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'p&zjnnnnnnnn'3nnnn",
"nnnn3&8nnnnnnnn'-kzjnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'-k1jnnnnnnnn'&nnnn",
"nnnn3&nnnnnnnnn'7k1jnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn1pk1jnnnnnnnn'3nnnn",
"nnnn3&8nnnnnnnnz431jnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnz}&1jnnnnnnnn'&nnnn",
"nnnn3&8nnnnnnnn~&35jnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnzy3)jnnnnnnnn'3nnnn",
"nnnn3&8nnnnnnnn~z)3jnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~z5)jnnnnnnnn'&nnnn",
"nnnn3&nnnnnnnnn~~x4@nnnnnnnnnnnnnnnnnnnnnnnnnnnrenn~1)*@nnnnnnnn'3nnnn",
"nnnn3&8nnnnnnnne^1kjnnnnnnnnnnnnnnnnnnnnnnnnnnn)]rnej'*jnnnnnnnn'&nnnn",
"nnnn3innnnnnnnn~r'kjnnnnnnnnnnnnnnnnnnnnnnnnnnnfg~n~r'kjnnnnnnnnx3nnnn",
"nnnn3&8nnnnnnnn~^5kjnnnnnnnnnnnnnnnnnnnnnnnnnnn)$)nerx*jnnnnnnnn'&nnnn",
"nnnn3&nnnnnnnnnr'y)8nnnnnnnnnnnnnnnnnnnnnnnnnnnfd=n@~i3,nnnnnnnn'&nnnn",
"nnnn3&8nnnnnnnnn^',nnnnnnnnnnnnnnnnnnnnnnnnnnnn1d]nnei^nnnnnnnnn'&nnnn",
"nnnn3&nnnnnnnr1zz11')5333'z'5''33333)'3333351z5i+c^e1'|i@nnnnnnn)3nnnn",
"nnnn3&nnnnnnn5r,r~z3}7s-*@r54~eosss-ie}--psp&5}}94um!aaa:,nnnnnn)&nnnn",
"nnnn3&nnnnnn~k&)'x'3'iii3k3&&))|5k&*k3))553)i&&*}:m[[[[[urnnnnnn53nnnn",
"nnnn3&nnnnnnn1y**}i5''~'e1ze)&5z5453)k*4o)3'1~'k>9&2vu(m&8nnnnnn33nnnn",
"nnnn33nnnnnnnnrre5^rrrrrrrrrrrrrrrrrrrrrrrrrrrr/_]nq@'^jqnnnnnnn33nnnn",
"nnnn33nnnnnnnnnri&~nnnnnnnnnnnnnnnnnnnnnnnnnnnn)%cnri&~nnnnnnnnn33nnnn",
"nnnn33nnnnnnnnnxkz@rnnnnnnnnnnnnnnnnnnnnnnnnnnn=_=n'kz@rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn5&~@rnnnnnnnnnnnnnnnnnnnnnnnnnnn/+fn3&~@rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn|3~jrnnnnnnnnnnnnnnnnnnnnnnnnnnn/h@n53~jrnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn3i)~rnnnnnnnnnnnnnnnnnnnnnnnnnnne3qn3i)~rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn)))1rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn)))1rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn')&3rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn')&3rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn'~kyrnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'~kyrnnnnnnnn33nnnn",
"nnnn33nnnnnnnnnzx}}rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnzx}}rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn1zo7rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn1zo7rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn1)}7rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn1)}7rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn~z&4rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~z&4rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn~i11rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~i11rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn1'~@rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn1'~@rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn~f3|rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~f3|rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn')y*rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn')y*rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn)|''rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn)|''rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn'f1frnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'f1frnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn1~k}rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn1~k}rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn)'}7rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn)'}7rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn54o7rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn54o7rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn'5o7rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'5o7rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn)iotrnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn)iotrnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn1&i&rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn1&i&rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn5y1)rnnne1ni3nnnnnnnnnnnnnnnnnnnnnnn5y1)rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn53i}rnn,7&'&iennn^,n^8n^n,53n,rnn^8n53i}rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn|&4trnn3ii}&i&nn*1t55p8tk#4ynok'3~5n|&4trnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn3i47rn~*#}4i&in^.nn,'.n4^n&1n14&z6zn3i47rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn)'*trn,149eii@n,6,qo5.8}^n&)1t*ye^}n)'*trnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn')}7rnnneenz~nnnj&~@'3r3~n@5n&~)zejn')}7rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn'~}ornnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'~}ornnnnnnnn33nnnn",
"nnnn33nnnnnnnnnz'y)rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnz'y)rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn1zi1rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn1zi1rnnnnnnnn33nnnn",
"nnnn33nnnnnnnnn'f**rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'f**rnnnnnnnn33nnnn",
"nnnn33nnn,1///f&k44ffff)~nnnnnnnnnnnnnnnnnnnn,1///f&k44ffff)~nnn33nnnn",
"nnnn33nnne]+l%%_9}]+dg${3qnnnnnnnnnnnnnnnnnnne]+l%%_9}]+dg${3qnn33nnnn",
"nnnn33nnnnrz/h]]<k9]]=1@qnnnnnnnnnnnnnnnnnnnnnrz/h]]<k9]]=1@qnnn33nnnn",
"nnnn33nnnnnnnnn^u!&nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn^u!&nnnnnnnnn33nnnn",
"nnnn33nnnnnnnnnem[28nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnem[28nnnq@^nn33nnnn",
"nnnn33nnnnnnnnnz![v,nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnz![v,nnq)5#jn33nnnn",
"nnnn33nnnnnnnnn'a[b,nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn'a[b,nn')n,8n33nnnn",
"nnnn33nnnnnnnnn|a[;rnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn|a[;rnn57@,nn33nnnn",
"nnnn33nnnnnnnnnia[(^nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnia[(^nn^76t^n33nnnn",
"nnnn33nnnnnnnnn~vu&8nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn~vu&8nnn,5},n33nnnn",
"nnnn33nnnnnnnnnn,r8nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn,r8nnn@kkk8n33nnnn",
"nnnn33nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn^&i~nn33nnnn",
"nnnnio3333333333333i4444y8nnnn'333333333^nnn^k4444i3333333&33333}3nnnn",
"nnnn~i3333333333333i4444y8nnn8'333333333^nnnj*4444y333333333333&3jnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn",
"nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn"};
