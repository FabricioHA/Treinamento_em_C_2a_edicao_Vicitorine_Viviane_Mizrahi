#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca pr�pria de fun��es e adicion�los da mesmo forma, por exemplo.

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caract�res especiais na execu��o do programa
	
	int lapis=45, borrachas=2345, canetas=420, cadernos=8, fitas=13050;
	printf("\nOBJETO      %12s", "C�DIGO");
	printf("\nLapis       %12s", "WOR");//Espa�amento de 12 backspace
	printf("\nBorrachas   %12s", "ASO");//Espa�amento de 12 backspace
	printf("\nCanetas     %12s", "KPX");//Espa�amento de 12 backspace
	printf("\nCadernos    %12s", "FJI");//Espa�amento de 12 backspace
	printf("\nFitas       %12s\n\n", "TYE");//Espa�amento de 12 backspace 
	
	system("PAUSE");
	return 0;
}
