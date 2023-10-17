/*
4. A função scanf()
Ela está presente na biblioteca stdio.h
ela seria um complemento do printf(), nor permitindo ler os dados de entrada padrão
referentes ao teclado.

A principal diferença entre a printf() é a lista de argumentos, onde o scanf() deve
formular argumentos que serão endereçados de variaveis.

Sintaxe

scanf("expressão de controle", lista de argumentos);

as expressões de controle podem conter códigos de formatação precedidos por um sinal de %
ou ainda pelo caractere * colocado após %, avisando à função que deve ser lido um valor
do tipo indicado pela especificação, mas não deve ser atribuido a nenhuma variável.


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

//Calcular a idade
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
	
	float anos, dias;
	printf("Digite a sua idade em anos: ");
	scanf("%f", &anos);
	dias = anos*365;
	printf("A sua idade em dias é %.0f.\n", dias);/*Aqui, ele utiliza o %.0f, onde o
	.0f reprenta quantas casas decimais são exibidas (nesse caso, nenhuma). */
	
	system("PAUSE");
	return 0;
}

