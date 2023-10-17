/*
8. Entrada formatada usando * com scanf()

Entrada e Impressão de uma data formatada

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
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
	
	int dia, mes, ano;
	printf("Digite uma data no formato dd/mm/aaaa: ");
	scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
	printf("A data que você digitou foi: %02d/%02d/%d\n", dia, mes, ano);
		
	system("PAUSE");
	return 0;
}
