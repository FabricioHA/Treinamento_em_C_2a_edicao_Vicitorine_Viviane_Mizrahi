/*4_Reescreva a Seguinte instrução usando operador de incremento:

numero =  numero + 1;

cdigo de formatação         significado
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
#include <conio.h>//para getche() e getch()


int main()//Define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL,"");//Exibir caracteres especiais
	system("cls");//Limpar a tela
	
	float numero = 90, auxilio;
	auxilio = numero;
	printf("A operação %.0f = %.0f + 1 é igual a %.0f\n\n", auxilio,auxilio,numero = numero+1);
		
	system("PAUSE");//Congelar sistema no ponto que essa fução esta aplicada
	return 0; //retornar valor (Ele irá variar dependendo do tipo lógico que a função
	          //Está definida)
}
