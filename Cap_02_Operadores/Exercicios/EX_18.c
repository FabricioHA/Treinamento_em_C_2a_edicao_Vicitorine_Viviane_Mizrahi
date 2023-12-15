/*18_Escreva um programa que solicite ao usu�rio a altura e o raio de um cilindro
circular e imprima o volume no cil�ndro. O volume de um cilindro � calculado por meio da 
seguinte f�rmula:

vol = 3.141592 * raio * raio * altura
*/

#include <stdio.h> //Adicionar printf() e scanf()
#include <stdlib.h> // Adicionar system e atoi()
#include <locale.h> //Ajustar caracteres especiais
#include <conio.h> //Adicionar getch() e getche()
#include <windows.h> //Adicionar op��es graficas do Windows
#include <ctype.h> //Adicionar isdigit() para converter saida de valores

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //Maximizar janela
	setlocale(LC_ALL, ""); //Ajustar caracteres especiais
	system("cls");//Limpar tela
	system("title Capitulo 2, Exerc�cio 18");
	system("COLOR 0A"); //Alterar paleta de cores do CMD
	
	float volume, raio, altura;
	
	printf("Digite o raio do cilindro: ");
	scanf("%f", &raio);
	printf("\n\nDigite a altura do cilindro: ");
	scanf("%f", &altura);
	
	volume = 3.141592 * ((raio * raio) * altura);
	printf("\n\nO Volume do cilindro � de %.2f Litro(s)/mililitros(s): ", volume);
	
	system("PAUSE"); //Congelar tela
	return 0; //Retornar zero caso verdadeiro
}
