/*
25. Escreva um Programa que contenha uma �nica linha para a impress�o da seguinte sa�da:
um
  dois
      tr�s
*/
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, "Portuguese"); //Ajusta caract�res especiais na execu��o do programa
	system("cls");//Limpar a tela
	
	printf("um\n  dois\n      tr�s\n\n");

	system("PAUSE");
	return 0;
}
