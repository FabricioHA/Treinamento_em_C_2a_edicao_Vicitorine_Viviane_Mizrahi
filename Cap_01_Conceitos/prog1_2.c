#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca pr�pria de fun��es e adicion�los da mesmo forma, por exemplo.

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, "");
	printf("Primeiro Programa.\n");//Mostra qualquer tipo de valor de texto no programa
	printf("O n�mero � %d.\n", 5);//Mostra qualquer tipo de valor de texto no programa
	printf("%s est� a %d milhas \ndo sol.\n", "Venus", 67);//Mostra qualquer tipo de valor de texto no programa
	printf("A letra %c ", 'J');//aspas unicas s�o apenas para um caract�re
	printf("pronuncia-se %s%c%c", "Jota", '.', '\n');//aspas duplas s�o para dois ou mais caracteres
	system("PAUSE");//Puxa qualquer tipo de comando no computador
	return 0;//retorna um valor ap�s execultado os comandos. podemos colocar vari�veis com valores, por exemplo.
}
