/*16_Precedencia_entre_operadores

Operadores un�rios (que operam sobre um unico operando) tem preced�ncia sobre os 
operadores bin�ros, significando que operadores de incremento e decremento t�m
preced�ncia sobre operadores aritim�ticos:

x = a * b++; ::Nesse caso, o b++ ser� executado primeiro, equivalendo a algo como:

x = a * (b++);

A preced�ncia informa que a opera��o p�s-fixada ++ ser� executada antes da multiplica��o,
n�o que a opera��o b + 1 == b++ ser� realizada. neste caso, o valor apenas se tornar� 1 e
o multiplica��o ser� executada depois, para ai sim atribiir o valor a x.

para executar o incremento com o operando primero, podemos fazer isso:

x = a *++b;::Dessa forma, o incremento ser� atribuido a B, para ent�o executar o opera��o
de multiplica��o e revelar o valor de x.
*/
