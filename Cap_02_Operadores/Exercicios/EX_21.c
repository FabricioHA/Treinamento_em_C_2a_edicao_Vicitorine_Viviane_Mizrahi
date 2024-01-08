/*21_A import�ncia de R$ 780.000,00 ser� dividida entre os tr�s primeiros colocados de 
um concurso, em partes diretemente proporcionais aos pontos conseguidos por eles.
Construa um programa que solicite o n�mero de pontos dos tr�s primeiros colocados e
imprima a import�ncia que caber� a cada um.*/

#include <stdio.h> // Adicionar printf() e scanf()
#include <stdlib.h> // Adicionar system()
#include <locale.h> // Ajustar caracteres especiais
#include <conio.h> // Adicionar getch() e getche()
#include <windows.h> // Adicionar recursos de sistema do windows
#include <ctype.h> // Adicionar isdigit()

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //Maximizar janela do CMD
	setlocale(LC_ALL, ""); //Ajustar caracteres especiais
	system("cls");//Limpar tela
	system("title Capitulo 2, Exerc�cio 21");
	system("COLOR 0A");
	
	printf("//JOGO DE CA�A ENTRE JOGADORES//");
	printf("\n\n==============================================================================");
	printf("\nNessa competi��o, teremos 8 participantes, cada um com sua plaqueta");
	printf("\n\nSua plaqueta vale 1 ponto, e sua plaqueta alvo vale 3");
	printf("\n\nUma vez que seu alvo seja ca�ado, voc� ter� 4 pontos, podendo obter at� mais 2 \nplaquetas valendo 1 ponto cada, totalizando 6 pontos");
	printf("\n\nquem conseguir at� 6 pontos, poder� ir a um local espec�fico para salvar-se, \ncom o primeiro lugar j� garantido");
	printf("\n\nA partida termina quando apenas 3 jogadores estiverem com plaquetas.");
	printf("\n==============================================================================");
	/*Regras (Baseado em HxH)
	
	Nessa competi��o, teremos 8 participantes, cada um com sua plaqueta;
	
	Sua plaqueta vale 1 ponto, e sua plaqueta alvo vale 3;
	
	Uma vez que seu alvo seja ca�ado, voc� ter� 4 pontos, podendo obter at� mais 2
	plaquetas valendo 1 ponto cada, totalizando 6 pontos;
	
	quem conseguir at� 6 pontos, poder� ir a um local espec�fico para salvar-se,
	com o primeiro lugar j� garantido;
	
	A partida termina quando apenas 3 jogadores estiverem com plaquetas
	*/
	
	int p1, p2, p3;
	float premiacao;
	char nome1[30], nome2[30], nome3[30];
	
	//Entrada de dados
	do
	{
		//player 1
		printf("\n\nDigite o nome do 1� jogador: ");
		scanf("%s",&nome1); //Aramazena em formato string
		printf("Quantos pontos %s fez?: ", nome1);
		scanf("%d", &p1);
		
		//player 2
		printf("\n\nDigite o nome do 2� jogador: ");
		scanf("%s", &nome2);
		printf("Quantos pontos %s fez?: ", nome2);
		scanf("%d", &p2);
		
		//player 3
		printf("\n\nDigite o nome do 3� jogador: ");
		scanf("%s", &nome3);
		printf("Quantos pontos %s fez?: ", nome3);
		scanf("%d", &p3);
		
		if(p1 > 6 || p2 > 6 || p3 > 6 || p1+p2+p3 >12)
		{
			printf("\n\nOs pontos foram contabilizados incorretamente, digite novamente...");
		}else;
	}while(p1 > 6 || p2 > 6 || p3 > 6 || p1+p2+p3 >12);
	
	printf("\n\n==============================================================================");
	
	//Sa�da de Dados
	if(p1>p2 && p1>p3 && p2>p3)
	{
		printf("\n//Podio//");
		printf("\n\n1� %s com %d pontos;  2� %s com %d pontos;  3� %scom %d pontos;", nome1, p1, nome2, p2, nome3, p3);
	}
	else if(p1>p2 && p1>p3 && p3>p2)
	{
		printf("\n//Podio//");
		printf("\n\n1� %s com %d pontos;  2� %s com %d pontos;  3� %scom %d pontos;", nome1, p1, nome3, p3, nome2, p2);
	}
	else if(p2>p1 && p2>p3 && p1>p3)
	{
		printf("\n//Podio//");
		printf("\n\n1� %s com %d pontos;  2� %s com %d pontos;  3� %scom %d pontos;", nome2, p2, nome1, p1, nome3, p3);
	}
	else if(p2>p1 && p2>p3 && p3>p1)
	{
		printf("\n//Podio//");
		printf("\n\n1� %s com %d pontos;  2� %s com %d pontos;  3� %scom %d pontos;", nome2, p2, nome3, p3, nome1, p1);
	}
	else if(p3>p1 && p3>p2 && p1>p2)
	{
		printf("\n//Podio//");
		printf("\n\n1� %s com %d pontos;  2� %s com %d pontos;  3� %scom %d pontos;", nome3, p3, nome1, p1, nome2, p2);
	}
	else if(p3>p1 && p3>p2 && p2>p1)
	{
		printf("\n//Podio//");
		printf("\n\n1� %s com %d pontos;  2� %s com %d pontos;  3� %s com %d pontos;", nome3, p3, nome2, p2, nome1, p1);
	}
	printf("\n==============================================================================\n\n");
	system("PAUSE");//Congelar programa
	return 0;//Retornar se valor == a 0
}
