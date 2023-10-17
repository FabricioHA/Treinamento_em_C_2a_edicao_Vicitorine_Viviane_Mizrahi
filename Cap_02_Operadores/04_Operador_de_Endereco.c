/*
03. Operador de endereço

A linguagem C proporciona um operador que opera sobre o nome de uma variável e resulta o
seu endereço. Ele é referido como "&"

A memória do computador é dividida em bytes, que são numerados de 0 até o limite de
memória de sua máquina. Essa numeração atribuida a memória é chamada de "Endereço" aos
bytes. É dessa forma que o endereço é usado para localizar variáveis na memória.

Ou seja, quando declararmos, por exemplo, uma variável int n, e atribuiu o valor 2,
quando n for referida usará o valor 2. Mas se usarmos o &n, o resultado será o endereço
do primeiro byte (aquele menos significativo) ocupado por n.*/

#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
	
	int n;
	n=2;
	printf("valor=%d, endereço=%p\n\n", n, &n);
	
	system("PAUSE");
	return 0;
}

//Resultado: valor=2, endereço=000000000062FE4C
