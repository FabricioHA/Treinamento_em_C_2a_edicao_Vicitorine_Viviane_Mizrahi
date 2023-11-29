/*13_Escreva expressões equivalentes sem usar o operador de negação (!)

a) !(i == j)
b) !(i + 1 < j - 2)
c) !(i < j && n < m)
d) !(i < 1 || j < 2 && n < 3)
*/

#include <stdio.h> // Adicionar printf() e scanf()
#include <stdlib.h> // Adicionar system()
#include <locale.h> // Ajustar caracteres especiais
#include <conio.h> // Adicionar getch() e getche()
#include <windows.h> // Adicionar opções graficas windows

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //maximizar tela
	
	setlocale(LC_ALL, "");//Ajustar caracteres especiais
	system("title Capitulo 2, Exercício 13"); //Titulo na janela de saída
	system("cls");//Limpar tela
	system("COLOR 0A"); //Cor de texto e fundo da janela de saída
	
	int  i=1, l=1, j=1, n=1, m=1;
	
	//a) !(i == j)
	//Exibindo com negação
	printf("\nExibindo com negação\na) !(i == j) é %s.\n\n", !(i == j)?"verdadeiro":"falso");
	//Exibindo formula equivalente
	printf("\nExibindo formula equivalente\na) i != j é %s.\n\n", i != j?"verdadeiro":"falso");
	system("PAUSE");
	
	//b) !(i + 1 < j - 2)
	//Exibindo com negação
	printf("\nExibindo com negação\nb) !(i + 1 < j - 2) é %s.\n\n", !(i + 1 < j - 2)?"verdadeiro":"falso");
	system("PAUSE");
	
	//c) !(i < j && n < m)
	//Exibindo com negação
	printf("\nExibindo com negação\nc) !(i < j && n < m) é %s.\n\n", !(i < j && n < m)?"verdadeiro":"falso");
	system("PAUSE");
	
	//d) !(i < 1 || j < 2 && n < 3)
	//Exibindo com negação
	printf("\nExibindo com negação\nd) !(i < 1 || j < 2 && n < 3) é %s.\n\n", !(i < 1 || j < 2 && n < 3)?"verdadeiro":"falso");
	system("PAUSE");
	
	return 0;
}
