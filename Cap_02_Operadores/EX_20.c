/*20_Dois amigos jogam na loteria toda semana. Escreva um programa que solicite a
quantia com que cada um participou e o valor do pr�mio a ser rateado em partes 
diretamente proporcionais �s quantias de cada um deles. O programa deve imprimir quanto
cada um dos amigos receber� caso sejam ganhadores.
*/

#include <stdio.h> //Adiciona printf() e scanf()
#include <stdlib.h> //Adiciona system
#include <locale.h> //Ajusta caracteres especiais
#include <conio.h> //Adiciona getch() e getche()
#include <windows.h> //Adiciona recursos gr�ficos do windows
#include <ctype.h> //Adiciona isdigit()

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //Maximiza tela do CMD
	setlocale(LC_ALL, ""); //Ajusta caracteres especiais
	system("cls"); //Limpa tela
	system("title Capitulo 2, Exerc�cio 20"); //Adiciona titulo a janela do cmd
	system("COLOR 0A"); //Altera padr�o de cores do cmd
	
	float aposta1, aposta2, resultado1, resultado2, premio, smapostas;
	
	//Valores de entrada
	printf("Digite o pr�mio total: R$");
	scanf("%f", &premio);
	
	printf("\n1� jogador, digite a quantia que ir� apostar: R$");
	scanf("%f", &aposta1);
	
	printf("\n2� jogador, digite a quantia que ir� apostar: R$");
	scanf("%f", &aposta2);
	
	smapostas = aposta1 + aposta2;
	
	resultado1 = (premio/smapostas)*aposta1;
	resultado2 = (premio/smapostas)*aposta2;
	
	printf("\nO valor a ser rateado para cada jogador �:\n Jogador 1: R$ %.2f   Jogador 2: R$ %.2f\n\n", resultado1, resultado2);
	
	system("PAUSE");//Congelar programa
	return 0; //verdadeiro se valor igual a 0
}
