#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca própria de funções e adicionálos da mesmo forma, por exemplo.

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, "");
	printf("Primeiro Programa.\n");//Mostra qualquer tipo de valor de texto no programa
	printf("O número é %d.\n", 5);//Mostra qualquer tipo de valor de texto no programa
	printf("%s está a %d milhas \ndo sol.\n", "Venus", 67);//Mostra qualquer tipo de valor de texto no programa
	printf("A letra %c ", 'J');//aspas unicas são apenas para um caractére
	printf("pronuncia-se %s%c%c", "Jota", '.', '\n');//aspas duplas são para dois ou mais caracteres
	system("PAUSE");//Puxa qualquer tipo de comando no computador
	return 0;//retorna um valor após execultado os comandos. podemos colocar variáveis com valores, por exemplo.
}
