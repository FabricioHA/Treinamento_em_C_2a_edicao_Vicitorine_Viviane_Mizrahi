/*15_A expressão seguinte é obscura. coloque parênteses para tornala clara.

a = x < y ? x < z ? x : z : y < z ? y : z;

Confuso... Vamos lá :|

a = x < y ? (x < z ? x : z) : (y < z ? y : z);

Bem, vamos averiguar:
*/

#include <stdio.h> //Adicionar printf() e scanf()
#include <stdlib.h> //Adicionar system()
#include <locale.h> //Ajustar caracteres especiais
#include <conio.h> //Adicionar getch() e getche()
#include <windows.h> //Adicionar opções gráfias do Windows

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);//Maximizar tela
	setlocale(LC_ALL, ""); //Ajustar caracteres especiais
	system("cls"); //Limpar tela
	system("title Capitulo 2, exercício 15");
	system("COLOR 0A");
	
	int a=0, x=1, y=2, z=3;
	
	a = x < y ? (x < z ? x : z) : (y < z ? y : z);
	
	if(a == x) //Se 'A' for igual x, então...
	{
		printf("O valor da expressão a = x < y ? (x < z ? x : z) : (y < z ? y : z) é x = %i.\n\n", a);
	}
	else if(a == y) //Se 'A' for igual y, então...
	{
		printf("O valor da expressão a = x < y ? (x < z ? x : z) : (y < z ? y : z) é y = %i.\n\n", a);
	}
	else if(a == z) //Se 'A' for igual z, então...
	{
		printf("O valor da expressão a = x < y ? (x < z ? x : z) : (y < z ? y : z) é z = %i.\n\n", a);
	}
	else //Se eu tiver feito alguma "caquinha", então...
	{
		printf("Algo deu errado >:(");
	}
	
	system("PAUSE");//Congelar sistema
	return 0; //Retornar valor inteiro 0 se verdadeiro
}
