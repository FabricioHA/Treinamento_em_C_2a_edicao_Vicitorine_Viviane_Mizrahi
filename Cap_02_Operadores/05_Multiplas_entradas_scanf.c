/*
5. Multiplas entradas scanf()

No scanf, podemos aplicar diversos valores de diferentes variáveis em uma unica
entrada. sempre podendo ser digitadas em sequência.
Também, a função scanf entende um espaço em branco como o término de uma entrada,
multiplas entradas são digitadas separadas por um espaço em branco. Enter é o
finalizador geral.

código de formatação         significado
%c                           Caractere simples
%d                           inteiro decimal com sinal
%i                           inteirodecimal, hexadecimal ou octal
%e                           notação ciênifica
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

//Adivinhar números
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
	
	int x, r;
	
	printf("\nDigite um número de até 4 algorismos: ");
	scanf("%d", &x);
	r = 19998 + x;
	printf("\nO resultado da soma é: %d", r);
	printf("\nDigite o segundo número: ");
	scanf("%d", &x);
	printf("\nO meu número é: %d", 9999 - x);
	printf("\nDigite o quarto número: ");
	scanf("%d", &x);
	printf("\nO meu número é: %d\n", 9999-x);
	
	system("PAUSE");
	return 0;
}

