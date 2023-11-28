/*20_Operadores_Logicos && || !

Operadores lógicos fazem comparações, como os operadores relacionais. A diferença 
Principal está na forma como os operadores avaliam seus operandos. Operandos de 
operadores lógicos são avaliados como lógicos (0 ou 1), não como quantidades númericas.

Em C, temos:

&& Lógico E (And)
|| Lógico OU (Or)
! Lógico NÃO (Not)

! é unário, sendo || e && são binários.

Por exemplo:

E1 && E2  Verdadeiro (1) somente se E1 e E2 forem verdadeiros. Caso não, será falso (0)

E1 || E2  Será falso (0) somente se E1 e E2 forem falsos. Caso não, será verdadeiro (1)

!E2   Nega seu valor, resultando em verdadeio se falso e falso se verdadeiro
*/

#include <stdio.h> //Inclui printf() e scanf()
#include <stdlib.h> //inclui system()
#include <locale.h> //Inclui ajuste de caracteres
#include <conio.h> //inclui getch() e getche()

int main()
{
	setlocale(LC_ALL,"");
	system("cls");
	
	//Inserir dia e mês corretamente com E/AND
	int dia, mes;
	
	printf("\nDigite o dia correto: ");
	scanf("%i", &dia);
	
	printf("\nDigite o mês correto: ");
	scanf("%i", &mes);
	
	if(dia==7 && mes==5)
	{
		printf("\nDia %i e mes %i digitados coretamente!!\n\n", dia, mes);
	}
	else
	{
		printf("\nVocê digitou a incorretamente! Volte ao inicio otário :)\n\n");
	}
	
	system("PAUSE");
	
	//Digitar um caractere corretamente com OU/OR
	
	char caractere;
	
	printf("\nDigite s ou S: ");
	scanf(" %c", &caractere);
	
	if(caractere=='s' || caractere=='S')
	{
		printf("\nParabéns, digitou o %c corretamente (sério, sem ironia)!!\n\n", caractere);
	}
	else
	{
		printf("\nTá usando quantos graus? era só digitar o que estava escrito... :(\n\n");
	}
	
	system("PAUSE");
	
	//Comprovar genero com negação NOT
	
	int genero;
	printf("\nHora do teste! Digite 0 ou 1: ");
	scanf(" %d", &genero);
	
	if(!genero)
	{
		printf("\nSe digitou 0 é porque é homem... Não me pergunte por que :/\n");
	}
	else
	{
		printf("\nSe digitou 1 é porque é mulher... sério, não faço idéia do porque :/\n\n");
	}
	
	system("PAUSE");
	
	return 0;
}
