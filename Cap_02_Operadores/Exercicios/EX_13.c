/*13_Escreva express�es equivalentes sem usar o operador de nega��o (!)

a) !(i == j)
b) !(i + 1 < j - 2)
c) !(i < j && n < m)
d) !(i < 1 || j < 2 && n < 3)
*/

#include <stdio.h> // Adicionar printf() e scanf()
#include <stdlib.h> // Adicionar system()
#include <locale.h> // Ajustar caracteres especiais
#include <conio.h> // Adicionar getch() e getche()
#include <windows.h> // Adicionar op��es graficas windows

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //maximizar tela
	
	setlocale(LC_ALL, "");//Ajustar caracteres especiais
	system("title Capitulo 2, Exerc�cio 13"); //Titulo na janela de sa�da
	system("cls");//Limpar tela
	system("COLOR 0A"); //Cor de texto e fundo da janela de sa�da
	
	int  i=1, l=1, j=1, n=1, m=1;
	
	//a) !(i == j)
	//Exibindo com nega��o
	printf("\nExibindo com nega��o\na) !(i == j) � %s.\n\n", !(i == j)?"verdadeiro":"falso");
	//Exibindo formula equivalente
	printf("\nExibindo formula equivalente\na) i != j � %s.\n\n", i != j?"verdadeiro":"falso");
	system("PAUSE");
	
	//b) !(i + 1 < j - 2)
	//Exibindo com nega��o
	printf("\nExibindo com nega��o\nb) !(i + 1 < j - 2) � %s.\n\n", !(i + 1 < j - 2)?"verdadeiro":"falso");
	system("PAUSE");
	
	//c) !(i < j && n < m)
	//Exibindo com nega��o
	printf("\nExibindo com nega��o\nc) !(i < j && n < m) � %s.\n\n", !(i < j && n < m)?"verdadeiro":"falso");
	system("PAUSE");
	
	//d) !(i < 1 || j < 2 && n < 3)
	//Exibindo com nega��o
	printf("\nExibindo com nega��o\nd) !(i < 1 || j < 2 && n < 3) � %s.\n\n", !(i < 1 || j < 2 && n < 3)?"verdadeiro":"falso");
	system("PAUSE");
	
	return 0;
}
