/*14_Funcoes_da_biblioteaca_padrao_getchar_putchar

As fun��es getchar() e putchar() tem prt�tipo definido na fun��o
stdio.h.

getchar(): Aguarda o pr�ximo caractere da entrada padr�o
(teclado) e retorna o caractere lido. s� termina a opera��o
quando a tecla ENTER � pressionada.

putchar(): Imprime um caractere na sa�da-padr�o (v�deo).

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
	ch=getchar(); /*Aguarda uma tecla no teclado getche()*/
	printf("\nA tecla sucessora ASCII � ");
	putchar(ch+1);
	putchar('\n');

	system("PAUSE");
	return 0;
}
