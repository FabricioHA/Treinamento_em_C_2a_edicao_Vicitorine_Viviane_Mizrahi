#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca própria de funções e adicionálos da mesmo forma, por exemplo.

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caractéres especiais na execução do programa
	
	int lapis=45, borrachas=2345, canetas=420, cadernos=8, fitas=13050;
	printf("\nOBJETO      %12s", "CÓDIGO");
	printf("\nLapis       %12s", "WOR");//Espaçamento de 12 backspace
	printf("\nBorrachas   %12s", "ASO");//Espaçamento de 12 backspace
	printf("\nCanetas     %12s", "KPX");//Espaçamento de 12 backspace
	printf("\nCadernos    %12s", "FJI");//Espaçamento de 12 backspace
	printf("\nFitas       %12s\n\n", "TYE");//Espaçamento de 12 backspace 
	
	system("PAUSE");
	return 0;
}
