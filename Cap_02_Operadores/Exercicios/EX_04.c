/*4_Reescreva a Seguinte instru��o usando operador de incremento:

numero =  numero + 1;

cdigo de formata��o         significado
%c                           Caractere simples
%d                           inteiro decimal com sinal
%i                           inteirodecimal, hexadecimal ou octal
%e                           nota��o ci�nifica
%f                           ponto flutuante em decimal
%g                           Usa %e ou %f, o que for menor
%o                           inteiro octal
%s                           String de caracteres
%u                           inteiro decimal sem sinal
%x                           inteiro hexadecimal
%ld                          inteiro decimal longo
%lf                          ponto flutuante longo
%Lf                          double longo
*/
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
#include <conio.h>//para getche() e getch()


int main()//Define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL,"");//Exibir caracteres especiais
	system("cls");//Limpar a tela
	
	float numero = 90, auxilio;
	auxilio = numero;
	printf("A opera��o %.0f = %.0f + 1 � igual a %.0f\n\n", auxilio,auxilio,numero = numero+1);
		
	system("PAUSE");//Congelar sistema no ponto que essa fu��o esta aplicada
	return 0; //retornar valor (Ele ir� variar dependendo do tipo l�gico que a fun��o
	          //Est� definida)
}
