#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca pr�pria de fun��es e adicion�los da mesmo forma, por exemplo.


/*
Exercicio 4 - resolu��o					
*/

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caract�res especiais na execu��o do programa
	system("cls");//Limpar a tela
	// \t � referente ao TAB, \n � referente ao ENTER, os dois referentes ao teclado
	//a)
	printf("\n\tBom dia Shirley.");
	printf("\n\n");
	
	//b)
	printf("Voc� j� tomou caf�? \n");
	printf("\n\n");
	
	//c)
	printf("\n\nA solu��o n�o existe!\nN�o insista.");
	printf("\n\n");
	
	//d)
	printf("Duas\tlinhas\tde\tsa�da\nou\numa");
	printf("\n\n");
	
	//e)
	printf("%s\n%s\n%s\n","um","dois","tr�s");
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
//Resposta: Sim, executa :)
