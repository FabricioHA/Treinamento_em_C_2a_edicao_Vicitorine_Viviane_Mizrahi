/*16_Escreva uma express�o l�gica que resulte 1 se o ano for bissexto e 0 se n�o for.
Um ano � bissexto se for divis�vel por 4, mas n�o por 100. Um ano tamb�m � bissexto se 
for divis�vel por 400
*/

#include <stdio.h> //Adiciona printf() e scanf()
#include <stdlib.h> //Adiciona system()
#include <locale.h> //Ajusta caracteres especiais
#include <conio.h> //Adiciona getch() e getche()
#include <windows.h> //Adiciona op��es graficas do windows

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
	system("title Capitulo 2, Exerc�cio 16"); //Titulo da janela
	system("COLOR 0A"); //Adicionar 
	
	int ano, x, tipoVar;
	
	do
	{
		printf("\nAi man�, digitai um ano ai (:    ");
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
	
	printf("\nChegou at� aqui � ? :)    ");
	
	system("PAUSE"); //Congelar tela
	return 0; //Retornar valor inteiro 0 se verdadeiro
}
