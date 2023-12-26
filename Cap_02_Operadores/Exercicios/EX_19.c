/*19_Em um cercado, há vários patos e coelhos. Escreva um programa que solicite ao
usuário o total de cabeças e o total de pés, determinando quantos patos e quantos
coelhos se encontram nesse cercado

minimo de cabeças = 2
minimo de pés = 6
*/

#include <stdio.h> //Adiciona Printf() e scanf()
#include <stdlib.h> //Adiciona system() e atoi()
#include <locale.h> // Ajusta caracteres especiais
#include <conio.h> // Adiciona getch() e getche()
#include <windows.h> // Adiciona opções gráficas do windows
#include <ctype.h> // Adiciona isdigit()

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	setlocale(LC_ALL, "");
	system("title Capitulo 2, Exercício 19");
	system("COLOR 0A");
	
	int cabecas, pes, patos, coelhos;
	do
	{
		//Entrada de dados
		do
		{
			printf("digite quantas cabeças tem no curral: ");
			scanf("%d", &cabecas);
		}while(cabecas<2);
		
		do
		{
			printf("\ndigite quantos pés tem no curral: ");
			scanf("%d", &pes);
		}while(pes%cabecas!=0);
		
		
		//processamento de dados
		patos = -(pes - cabecas * 4)/ 2;
		coelhos = cabecas - patos;
		
		//Saída de dados
		
		if(patos <0 || coelhos<0)
		{
			printf("O numero de pés e cabeças não batem! repita novamente\n\n");
		}
		else
		{
			printf("\nTotal de Coelhos: %d    Total de Patos: %d\n\n", coelhos, patos);
		}
	}while(patos <0 || coelhos<0);
	
	
	system("PAUSE");
	return 0;

}

