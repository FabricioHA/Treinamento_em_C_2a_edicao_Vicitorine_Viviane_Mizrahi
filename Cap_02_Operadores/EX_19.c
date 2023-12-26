/*19_Em um cercado, h� v�rios patos e coelhos. Escreva um programa que solicite ao
usu�rio o total de cabe�as e o total de p�s, determinando quantos patos e quantos
coelhos se encontram nesse cercado

minimo de cabe�as = 2
minimo de p�s = 6
*/

#include <stdio.h> //Adiciona Printf() e scanf()
#include <stdlib.h> //Adiciona system() e atoi()
#include <locale.h> // Ajusta caracteres especiais
#include <conio.h> // Adiciona getch() e getche()
#include <windows.h> // Adiciona op��es gr�ficas do windows
#include <ctype.h> // Adiciona isdigit()

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	setlocale(LC_ALL, "");
	system("title Capitulo 2, Exerc�cio 19");
	system("COLOR 0A");
	
	int cabecas, pes, patos, coelhos;
	do
	{
		//Entrada de dados
		do
		{
			printf("digite quantas cabe�as tem no curral: ");
			scanf("%d", &cabecas);
		}while(cabecas<2);
		
		do
		{
			printf("\ndigite quantos p�s tem no curral: ");
			scanf("%d", &pes);
		}while(pes%cabecas!=0);
		
		
		//processamento de dados
		patos = -(pes - cabecas * 4)/ 2;
		coelhos = cabecas - patos;
		
		//Sa�da de dados
		
		if(patos <0 || coelhos<0)
		{
			printf("O numero de p�s e cabe�as n�o batem! repita novamente\n\n");
		}
		else
		{
			printf("\nTotal de Coelhos: %d    Total de Patos: %d\n\n", coelhos, patos);
		}
	}while(patos <0 || coelhos<0);
	
	
	system("PAUSE");
	return 0;

}

