/*
26. Escreva um programa que tenha a seguinte saída:

Treinamente em programação.
Linguagem C.

a)com uma única instrução de impressão.
b)com três instruções de impressão.
c)dentro da moldura.
*/

#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	char *previus_locale = setlocale(LC_ALL, NULL);
	
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
		
	//Opção A)
	printf("Treinamento em programação.\nLinguagem C.");
	printf("\n\n");
	
	//opção B)
	printf("Treinamento em programação.");
	printf("\n");
	printf("Linguagem C.");
	printf("\n\n");
	
	setlocale(LC_ALL, previus_locale);
	
	//Opção C)
	printf("\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
	printf("\n\t\xBA ");
	setlocale(LC_ALL, "");
	printf("Treinamento em programação. ");
	setlocale(LC_ALL, previus_locale);
	printf("\xBA");
	printf("\n\t\xBA Linguagem C.                \xBA");
	printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
	printf("\n\n");
	

	system("PAUSE");
	return 0;
}
