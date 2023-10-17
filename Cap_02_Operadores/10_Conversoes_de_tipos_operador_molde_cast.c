/*10. Conversões de tipos e o operador de molde ou cast

Em uma operação, quando dois ou mais numeros sendo operados
se encontram e forem de tipos distintos (float, int, double),
caso um deles seja maior que o outro, o valor do menor será
Convertido ao tipo da variavel do maior valor.

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
	system("cls");//Limpar a tela
	
	int varInt=2000000000;
	int dez = 10;
	
	varInt = (varInt * dez)/dez; //Valor muito grande
	printf("\nVarInt = %d\n", varInt); //Resposta Errada
	
		
	system("PAUSE");
	return 0;
}

