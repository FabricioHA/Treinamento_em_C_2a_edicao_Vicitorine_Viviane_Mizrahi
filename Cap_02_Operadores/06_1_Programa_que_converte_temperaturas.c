/*6.1. Programa que converte temperaturas diretamente*/
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
	
	float ctemp;
	printf("Digite a temperatura em graus Celsius: ");
	scanf("%f", &ctemp);
	
	printf("\nTemperatura em graus Fahrenheit � %.2f\n", ctemp * 9/5 + 32);
	
	system("PAUSE");
	return 0;
}
