/*
03. Operador de endere�o

A linguagem C proporciona um operador que opera sobre o nome de uma vari�vel e resulta o
seu endere�o. Ele � referido como "&"

A mem�ria do computador � dividida em bytes, que s�o numerados de 0 at� o limite de
mem�ria de sua m�quina. Essa numera��o atribuida a mem�ria � chamada de "Endere�o" aos
bytes. � dessa forma que o endere�o � usado para localizar vari�veis na mem�ria.

Ou seja, quando declararmos, por exemplo, uma vari�vel int n, e atribuiu o valor 2,
quando n for referida usar� o valor 2. Mas se usarmos o &n, o resultado ser� o endere�o
do primeiro byte (aquele menos significativo) ocupado por n.*/

#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
	
	int n;
	n=2;
	printf("valor=%d, endere�o=%p\n\n", n, &n);
	
	system("PAUSE");
	return 0;
}

//Resultado: valor=2, endere�o=000000000062FE4C
