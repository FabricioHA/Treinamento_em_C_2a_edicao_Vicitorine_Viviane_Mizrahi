/*14_Funcoes_da_biblioteaca_padrao_getchar_putchar

As funções getchar() e putchar() tem prtótipo definido na função
stdio.h.

getchar(): Aguarda o próximo caractere da entrada padrão
(teclado) e retorna o caractere lido. só termina a operação
quando a tecla ENTER é pressionada.

putchar(): Imprime um caractere na saída-padrão (vídeo).

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
	ch=getchar(); /*Aguarda uma tecla no teclado getche()*/
	printf("\nA tecla sucessora ASCII é ");
	putchar(ch+1);
	putchar('\n');

	system("PAUSE");
	return 0;
}
