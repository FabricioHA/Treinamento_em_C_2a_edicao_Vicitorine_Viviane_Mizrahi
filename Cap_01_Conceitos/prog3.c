#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca própria de funções e adicionálos da mesmo forma, por exemplo.

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caractéres especiais na execução do programa
	int num1 = 44; // variavel int
	int num2 = num1+20; //variavel int
	printf("\nO primeiro número é %d", num1); //exibe variavel num1
	printf("\nO segundo número é \"num1 + 20 \" = %d\n ", num2); //exibe variavel num2
	
	system("PAUSE"); //travar execução dos resultados na tela
	return 0;//Indica execução bem sucedida no programa, qualquer outro valor além deste indicaria erro no programa
}
