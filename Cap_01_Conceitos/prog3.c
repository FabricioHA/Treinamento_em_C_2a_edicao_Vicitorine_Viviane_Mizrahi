#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca pr�pria de fun��es e adicion�los da mesmo forma, por exemplo.

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caract�res especiais na execu��o do programa
	int num1 = 44; // variavel int
	int num2 = num1+20; //variavel int
	printf("\nO primeiro n�mero � %d", num1); //exibe variavel num1
	printf("\nO segundo n�mero � \"num1 + 20 \" = %d\n ", num2); //exibe variavel num2
	
	system("PAUSE"); //travar execu��o dos resultados na tela
	return 0;//Indica execu��o bem sucedida no programa, qualquer outro valor al�m deste indicaria erro no programa
}
