/*
25. Escreva um Programa que contenha uma única linha para a impressão da seguinte saída:
um
  dois
      três
*/
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, "Portuguese"); //Ajusta caractéres especiais na execução do programa
	system("cls");//Limpar a tela
	
	printf("um\n  dois\n      três\n\n");

	system("PAUSE");
	return 0;
}
