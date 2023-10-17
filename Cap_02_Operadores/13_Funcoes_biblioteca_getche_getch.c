/*13. As Funções de biblioteca getche() e getch()

Em algumas situações, a função scanf() não atende perfeitamente,
pois é preciso precionar a tecla ENTER para finalizar a função.
A biblioteca de funções C oferece duas funções que lêem um 
caractere sem precisar teclar ENTER

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
#include <conio.h> //Para getche() e getch()

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, "");//Exibir caractéres especiais
	system("cls");//Limpar a tela
	
	char ch;
	printf("\nPressione uma tecla ");
	ch=getche(); /*Aguarda uma tecla no teclado getche()*/
	printf("\nA tecla sucessora ASCII é %c.\n", ch+1);
	
	/*
	A função getche() retorna o caractere lido do teclado e o 
	exibe na tela.
	
	A função getch(), no entando, exibe apenas o resultado, não 
	a tecla digitada. Ou seja, a função getch() não ecoa no 
	vídeo.
	*/	
	printf("\nPressione uma tecla ");
	ch=getch(); /*Aguarda uma tecla ser digitada getch()*/
	printf("\nA tecla sucessora ASCII é %c.\n", ch+1);

	system("PAUSE");
	return 0;
}
