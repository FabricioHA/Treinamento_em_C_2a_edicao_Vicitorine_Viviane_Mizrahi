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
	/*Regras (Baseado em HxH)
	
	Nessa competi��o, teremos 8 participantes, cada um com sua plaqueta;
	
	Sua plaqueta vale 1 ponto, e sua plaqueta alvo vale 3;
	
	Uma vez que seu alvo seja ca�ado, voc� ter� 4 pontos, podendo obter at� mais 2
	plaquetas valendo 1 ponto cada, totalizando 6 pontos;
	
	quem conseguir at� 6 pontos, poder� ir a um local espec�fico para salvar-se,
	com o primeiro lugar j� garantido;
	
	A partida termina quando apenas 3 jogadores estiverem com plaquetas
	*/
	
	
	system("PAUSE");//Congelar programa
	return 0;//Retornar se valor == a 0
}
