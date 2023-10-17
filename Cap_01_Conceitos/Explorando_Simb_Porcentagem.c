#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca própria de funções e adicionálos da mesmo forma, por exemplo.

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caractéres especiais na execução do programa
	
	int reajuste = 10;
	printf("O reajuste foi de %d%%. \n", reajuste);// Aplicação do simbolo porcentagem na impressão.
	
	system("PAUSE");
	return 0;
}
