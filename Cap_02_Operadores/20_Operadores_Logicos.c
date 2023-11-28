/*20_Operadores_Logicos && || !

Operadores l�gicos fazem compara��es, como os operadores relacionais. A diferen�a 
Principal est� na forma como os operadores avaliam seus operandos. Operandos de 
operadores l�gicos s�o avaliados como l�gicos (0 ou 1), n�o como quantidades n�mericas.

Em C, temos:

&& L�gico E (And)
|| L�gico OU (Or)
! L�gico N�O (Not)

! � un�rio, sendo || e && s�o bin�rios.

Por exemplo:

E1 && E2  Verdadeiro (1) somente se E1 e E2 forem verdadeiros. Caso n�o, ser� falso (0)

E1 || E2  Ser� falso (0) somente se E1 e E2 forem falsos. Caso n�o, ser� verdadeiro (1)

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
	
	//Inserir dia e m�s corretamente com E/AND
	int dia, mes;
	
	printf("\nDigite o dia correto: ");
	scanf("%i", &dia);
	
	printf("\nDigite o m�s correto: ");
	scanf("%i", &mes);
	
	if(dia==7 && mes==5)
	{
		printf("\nDia %i e mes %i digitados coretamente!!\n\n", dia, mes);
	}
	else
	{
		printf("\nVoc� digitou a incorretamente! Volte ao inicio ot�rio :)\n\n");
	}
	
	system("PAUSE");
	
	//Digitar um caractere corretamente com OU/OR
	
	char caractere;
	
	printf("\nDigite s ou S: ");
	scanf(" %c", &caractere);
	
	if(caractere=='s' || caractere=='S')
	{
		printf("\nParab�ns, digitou o %c corretamente (s�rio, sem ironia)!!\n\n", caractere);
	}
	else
	{
		printf("\nT� usando quantos graus? era s� digitar o que estava escrito... :(\n\n");
	}
	
	system("PAUSE");
	
	//Comprovar genero com nega��o NOT
	
	int genero;
	printf("\nHora do teste! Digite 0 ou 1: ");
	scanf(" %d", &genero);
	
	if(!genero)
	{
		printf("\nSe digitou 0 � porque � homem... N�o me pergunte por que :/\n");
	}
	else
	{
		printf("\nSe digitou 1 � porque � mulher... s�rio, n�o fa�o id�ia do porque :/\n\n");
	}
	
	system("PAUSE");
	
	return 0;
}
