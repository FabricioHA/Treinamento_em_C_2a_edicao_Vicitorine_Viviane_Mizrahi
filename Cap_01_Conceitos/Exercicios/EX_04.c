#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca própria de funções e adicionálos da mesmo forma, por exemplo.


/*
Exercicio 4 - resolução					
*/

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caractéres especiais na execução do programa
	system("cls");//Limpar a tela
	// \t é referente ao TAB, \n é referente ao ENTER, os dois referentes ao teclado
	//a)
	printf("\n\tBom dia Shirley.");
	printf("\n\n");
	
	//b)
	printf("Você já tomou café? \n");
	printf("\n\n");
	
	//c)
	printf("\n\nA solução não existe!\nNão insista.");
	printf("\n\n");
	
	//d)
	printf("Duas\tlinhas\tde\tsaída\nou\numa");
	printf("\n\n");
	
	//e)
	printf("%s\n%s\n%s\n","um","dois","três");
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
//Resposta: Sim, executa :)
