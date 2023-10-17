/*13. As Fun��es de biblioteca getche() e getch()

Em algumas situa��es, a fun��o scanf() n�o atende perfeitamente,
pois � preciso precionar a tecla ENTER para finalizar a fun��o.
A biblioteca de fun��es C oferece duas fun��es que l�em um 
caractere sem precisar teclar ENTER

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

#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
#include <conio.h> //Para getche() e getch()

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, "");//Exibir caract�res especiais
	system("cls");//Limpar a tela
	
	char ch;
	printf("\nPressione uma tecla ");
	ch=getche(); /*Aguarda uma tecla no teclado getche()*/
	printf("\nA tecla sucessora ASCII � %c.\n", ch+1);
	
	/*
	A fun��o getche() retorna o caractere lido do teclado e o 
	exibe na tela.
	
	A fun��o getch(), no entando, exibe apenas o resultado, n�o 
	a tecla digitada. Ou seja, a fun��o getch() n�o ecoa no 
	v�deo.
	*/	
	printf("\nPressione uma tecla ");
	ch=getch(); /*Aguarda uma tecla ser digitada getch()*/
	printf("\nA tecla sucessora ASCII � %c.\n", ch+1);

	system("PAUSE");
	return 0;
}
