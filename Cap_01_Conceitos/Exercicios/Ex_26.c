/*
26. Escreva um programa que tenha a seguinte sa�da:

Treinamente em programa��o.
Linguagem C.

a)com uma �nica instru��o de impress�o.
b)com tr�s instru��es de impress�o.
c)dentro da moldura.
*/

#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	char *previus_locale = setlocale(LC_ALL, NULL);
	
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
		
	//Op��o A)
	printf("Treinamento em programa��o.\nLinguagem C.");
	printf("\n\n");
	
	//op��o B)
	printf("Treinamento em programa��o.");
	printf("\n");
	printf("Linguagem C.");
	printf("\n\n");
	
	setlocale(LC_ALL, previus_locale);
	
	//Op��o C)
	printf("\n\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
	printf("\n\t\xBA ");
	setlocale(LC_ALL, "");
	printf("Treinamento em programa��o. ");
	setlocale(LC_ALL, previus_locale);
	printf("\xBA");
	printf("\n\t\xBA Linguagem C.                \xBA");
	printf("\n\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
	printf("\n\n");
	

	system("PAUSE");
	return 0;
}
