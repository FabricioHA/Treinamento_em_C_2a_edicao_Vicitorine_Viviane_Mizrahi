/*15_A express�o seguinte � obscura. coloque par�nteses para tornala clara.

a = x < y ? x < z ? x : z : y < z ? y : z;

Confuso... Vamos l� :|

a = x < y ? (x < z ? x : z) : (y < z ? y : z);

Bem, vamos averiguar:
*/

#include <stdio.h> //Adicionar printf() e scanf()
#include <stdlib.h> //Adicionar system()
#include <locale.h> //Ajustar caracteres especiais
#include <conio.h> //Adicionar getch() e getche()
#include <windows.h> //Adicionar op��es gr�fias do Windows

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);//Maximizar tela
	setlocale(LC_ALL, ""); //Ajustar caracteres especiais
	system("cls"); //Limpar tela
	system("title Capitulo 2, exerc�cio 15");
	system("COLOR 0A");
	
	int a=0, x=1, y=2, z=3;
	
	a = x < y ? (x < z ? x : z) : (y < z ? y : z);
	
	if(a == x) //Se 'A' for igual x, ent�o...
	{
		printf("O valor da express�o a = x < y ? (x < z ? x : z) : (y < z ? y : z) � x = %i.\n\n", a);
	}
	else if(a == y) //Se 'A' for igual y, ent�o...
	{
		printf("O valor da express�o a = x < y ? (x < z ? x : z) : (y < z ? y : z) � y = %i.\n\n", a);
	}
	else if(a == z) //Se 'A' for igual z, ent�o...
	{
		printf("O valor da express�o a = x < y ? (x < z ? x : z) : (y < z ? y : z) � z = %i.\n\n", a);
	}
	else //Se eu tiver feito alguma "caquinha", ent�o...
	{
		printf("Algo deu errado >:(");
	}
	
	system("PAUSE");//Congelar sistema
	return 0; //Retornar valor inteiro 0 se verdadeiro
}
