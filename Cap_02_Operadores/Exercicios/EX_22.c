/*22_Sabendo que o latão é obtido fundindo-se sete partes de cobre com três partes de
zinco, faça um programa que solicite quantos quilos de latão se quer produzir e imprima
quantos quilos de cobre e de zinco são necessários*/

#include <stdio.h> //Adiciona printf() e scanf()
#include <stdlib.h> //Adiciona system()
#include <locale.h> //Ajusta caracteres especiais
#include <conio.h> //Adiciona getch() e getche()
#include <windows.h> //Adiciona recursos de sistema do windows
#include <ctype.h> //Adiciona isdigit()

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);//Maximiza janela do windows
	setlocale(LC_ALL,"");//Ajustar caracteres especiais
	system("cls");//Limpar tela
	system("title Capitulo 2, Exercicio 22");//Titulo janela CMD
	system("COLOR 0A"); //Alterar paleta de cores CMD
	
	
	
	system("PAUSE");//Congelar sistema
	return 0;//Se verdadeiro, retornar 0
}
