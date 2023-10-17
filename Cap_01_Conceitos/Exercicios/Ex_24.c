/*
24. Reescreva o programa que desenha uma moldura na tela para que ele apresente uma
moldura simila, mas com quatro caracteres de largura e quatro e altura.


*/
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	system("cls");//Limpar a tela
	//Desenhando moldura
	printf("\n\n");
	printf("\n\t\xC9\xCD\xCD\xBB");
	printf("\n\t\xBA  \xBA");
	printf("\n\t\xBA  \xBA");
	printf("\n\t\xC8\xCD\xCD\xBC\n\n");

	system("PAUSE");
	return 0;
}
