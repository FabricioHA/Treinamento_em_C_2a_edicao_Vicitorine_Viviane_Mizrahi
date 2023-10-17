/*
5. Multiplas entradas scanf()

No scanf, podemos aplicar diversos valores de diferentes vari�veis em uma unica
entrada. sempre podendo ser digitadas em sequ�ncia.
Tamb�m, a fun��o scanf entende um espa�o em branco como o t�rmino de uma entrada,
multiplas entradas s�o digitadas separadas por um espa�o em branco. Enter � o
finalizador geral.

c�digo de formata��o         significado
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

//Adivinhar n�meros
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
	
	int x, r;
	
	printf("\nDigite um n�mero de at� 4 algorismos: ");
	scanf("%d", &x);
	r = 19998 + x;
	printf("\nO resultado da soma �: %d", r);
	printf("\nDigite o segundo n�mero: ");
	scanf("%d", &x);
	printf("\nO meu n�mero �: %d", 9999 - x);
	printf("\nDigite o quarto n�mero: ");
	scanf("%d", &x);
	printf("\nO meu n�mero �: %d\n", 9999-x);
	
	system("PAUSE");
	return 0;
}

