#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca própria de funções e adicionálos da mesmo forma, por exemplo.


/*
Exercicio 3 - resolução					
*/

main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caractéres especiais na execução do programa
	system("cls");//Limpar a tela
	int a=1; b=2; c=3;
	printf("Os números são: %d%d%d, a, b, c, d);
	printf("\n\n");
	system("PAUSE");
}

/*
Resposta: As variaveis foram declaradas erroneamente, em vez de usar virgula para
separa-las uma vez que todas são do mesmo tipo, usou-se ";", quando deveria ser usado 
apenas no final
No printf, não foi fechado as aspas "" do texto impresso e foi inserido uma variavel
não declarada anteriormente (referente a "d").
*/
