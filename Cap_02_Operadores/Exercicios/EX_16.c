/*16_Escreva uma expressão lógica que resulte 1 se o ano for bissexto e 0 se não for.
Um ano é bissexto se for divisível por 4, mas não por 100. Um ano também é bissexto se 
for divisível por 400
*/

#include <stdio.h> //Adiciona printf() e scanf()
#include <stdlib.h> //Adiciona system()
#include <locale.h> //Ajusta caracteres especiais
#include <conio.h> //Adiciona getch() e getche()
#include <windows.h> //Adiciona opções graficas do windows

#define typeof(var) _Generic( (var),\
char: "char",\
int: "integer",\
float: "float",\
char *: "string",\
void *: "pointer".\
default: "undefined")

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);//Maximizar janela
	setlocale(LC_ALL, ""); //Ajustar caracteres especiais
	system("cls");//Limpar tela
	system("title Capitulo 2, Exercício 16"); //Titulo da janela
	system("COLOR 0A"); //Adicionar 
	
	int ano, x, tipoVar;
	
	do
	{
		printf("\nAi mané, digitai um ano ai (:    ");
		scanf("%i", &ano);
		tipoVar = typeof(ano);
		
		if(tipoVar == "integer")
		{
			x = 0;
		}
		else
		{
			x = 1;
		}
	}while(x != 0);
	
	printf("\nChegou até aqui é ? :)    ");
	
	system("PAUSE"); //Congelar tela
	return 0; //Retornar valor inteiro 0 se verdadeiro
}
