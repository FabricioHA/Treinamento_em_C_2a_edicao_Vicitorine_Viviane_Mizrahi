#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca pr�pria de fun��es e adicion�los da mesmo forma, por exemplo.


/*
Exercicio 3 - resolu��o					
*/

main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caract�res especiais na execu��o do programa
	system("cls");//Limpar a tela
	int a=1; b=2; c=3;
	printf("Os n�meros s�o: %d%d%d, a, b, c, d);
	printf("\n\n");
	system("PAUSE");
}

/*
Resposta: As variaveis foram declaradas erroneamente, em vez de usar virgula para
separa-las uma vez que todas s�o do mesmo tipo, usou-se ";", quando deveria ser usado 
apenas no final
No printf, n�o foi fechado as aspas "" do texto impresso e foi inserido uma variavel
n�o declarada anteriormente (referente a "d").
*/
