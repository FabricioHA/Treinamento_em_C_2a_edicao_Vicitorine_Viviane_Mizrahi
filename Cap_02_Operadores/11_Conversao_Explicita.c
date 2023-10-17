/*11. Convers�o Explicita

No exemplo passado, n�o expecificamos o tipo do maior valor
dentro da opera��o. Vamos explicitar isso agora ao programa.
Escreveremos entre parenteses o tipo desejado e em seguida o
valor ou express�o a ser avaliada.

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

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	system("cls");//Limpar a tela
	
	//Mostrar o operador de convers�o de tipo:
	
	int varInt=2000000000;
	int dez = 10;
	
	varInt = ((double)varInt * dez)/dez; //Converter em double
	printf("\nVarInt = %d\n", varInt); //Resposta correta
	
	system("PAUSE");
	return 0;
}
