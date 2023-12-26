/*21_A importância de R$ 780.000,00 será dividida entre os três primeiros colocados de 
um concurso, em partes diretemente proporcionais aos pontos conseguidos por eles.
Construa um programa que solicite o número de pontos dos três primeiros colocados e
imprima a importância que caberá a cada um.*/

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
	system("title Capitulo 2, Exercício 21");
	system("COLOR 0A");
	
	printf("//JOGO DE CAÇA ENTRE JOGADORES//");
	/*Regras (Baseado em HxH)
	
	Nessa competição, teremos 8 participantes, cada um com sua plaqueta;
	
	Sua plaqueta vale 1 ponto, e sua plaqueta alvo vale 3;
	
	Uma vez que seu alvo seja caçado, você terá 4 pontos, podendo obter até mais 2
	plaquetas valendo 1 ponto cada, totalizando 6 pontos;
	
	quem conseguir até 6 pontos, poderá ir a um local específico para salvar-se,
	com o primeiro lugar já garantido;
	
	A partida termina quando apenas 3 jogadores estiverem com plaquetas
	*/
	
	
	system("PAUSE");//Congelar programa
	return 0;//Retornar se valor == a 0
}
