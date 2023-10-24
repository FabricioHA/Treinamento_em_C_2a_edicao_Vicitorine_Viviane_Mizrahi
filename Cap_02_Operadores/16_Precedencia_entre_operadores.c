/*16_Precedencia_entre_operadores

Operadores unários (que operam sobre um unico operando) tem precedência sobre os 
operadores bináros, significando que operadores de incremento e decremento têm
precedência sobre operadores aritiméticos:

x = a * b++; ::Nesse caso, o b++ será executado primeiro, equivalendo a algo como:

x = a * (b++);

A precedência informa que a operação pós-fixada ++ será executada antes da multiplicação,
não que a operação b + 1 == b++ será realizada. neste caso, o valor apenas se tornará 1 e
o multiplicação será executada depois, para ai sim atribiir o valor a x.

para executar o incremento com o operando primero, podemos fazer isso:

x = a *++b;::Dessa forma, o incremento será atribuido a B, para então executar o operação
de multiplicação e revelar o valor de x.
*/
