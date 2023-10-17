/*
4. A fun��o scanf()
Ela est� presente na biblioteca stdio.h
ela seria um complemento do printf(), nor permitindo ler os dados de entrada padr�o
referentes ao teclado.

A principal diferen�a entre a printf() � a lista de argumentos, onde o scanf() deve
formular argumentos que ser�o endere�ados de variaveis.

Sintaxe

scanf("express�o de controle", lista de argumentos);

as express�es de controle podem conter c�digos de formata��o precedidos por um sinal de %
ou ainda pelo caractere * colocado ap�s %, avisando � fun��o que deve ser lido um valor
do tipo indicado pela especifica��o, mas n�o deve ser atribuido a nenhuma vari�vel.


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

//Calcular a idade
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
	
	float anos, dias;
	printf("Digite a sua idade em anos: ");
	scanf("%f", &anos);
	dias = anos*365;
	printf("A sua idade em dias � %.0f.\n", dias);/*Aqui, ele utiliza o %.0f, onde o
	.0f reprenta quantas casas decimais s�o exibidas (nesse caso, nenhuma). */
	
	system("PAUSE");
	return 0;
}

