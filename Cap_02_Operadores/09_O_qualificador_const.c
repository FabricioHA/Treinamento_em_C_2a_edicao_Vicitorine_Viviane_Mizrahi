/*9. O qualificador const()

Assegura que a variavel n�o ser� alterada, tendo um valor "constante":

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
	
	const char Bip = "\a"; //declara��o da constante
	const double Pi = 3.141592; //Declara��o de constante
	double raio, area;
	
	printf("\nDigite o raio da esfera: ");
	scanf("%lf", &raio);
	
	area= 4.0*Pi*raio*raio;
	
	printf("%c%c", Bip, Bip); //%C � igual caractere
	printf("\nArea da esfera %.2lf\n", area);
		
	system("PAUSE");
	return 0;
}
