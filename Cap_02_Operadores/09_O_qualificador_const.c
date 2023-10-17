/*9. O qualificador const()

Assegura que a variavel não será alterada, tendo um valor "constante":

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
	
	const char Bip = "\a"; //declaração da constante
	const double Pi = 3.141592; //Declaração de constante
	double raio, area;
	
	printf("\nDigite o raio da esfera: ");
	scanf("%lf", &raio);
	
	area= 4.0*Pi*raio*raio;
	
	printf("%c%c", Bip, Bip); //%C É igual caractere
	printf("\nArea da esfera %.2lf\n", area);
		
	system("PAUSE");
	return 0;
}
