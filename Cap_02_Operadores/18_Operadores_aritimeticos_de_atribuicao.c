/*17_Operadores aritiméticos de atribuição: += -= *= /= %=
Esses operadores combinam as operações aritiméticas com a operação de atribuição,
consistindo em atribuir um novo valor à variável que dependerá do operador e da expressão à 
direita. Exemplo:

x operação(simbolo) = expressão    equivale a     x = x operação/simbolo (expressão)

exemplos:

i += 2;   é igual a   i = i + 2
x *= y+1  é igual a   x = x * (y+1)
t /= 2.5  é igual a   t = t / 2.5
p %= 5    é igual a   p = p % 5
d -= 3    é igual a   d = d - 3

*/

//Exemplos:

#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
#include <conio.h> //Para getche() e getch()

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, "");//Exibir caractéres especiais
	system("cls");//Limpar a tela
	
	float nota, media = 0.0;
	
	printf("\nDigite a primeira nota: ");
	scanf("%f", &nota);
	media+=nota;
	
	printf("\nDigite a segunda nota: ");
	scanf("%f", &nota);
	media+=nota;
	
	printf("\nDigite a terceira nota: ");
	scanf("%f", &nota);
	media+=nota;
	
	printf("\nDigite a quarta nota: ");
	scanf("%f", &nota);
	media+=nota;
	
	media /= 4.0;
	printf("\nmédia: %.2f\n", media);
	
	/*
	Digite a primeira nota: 8,7

	Digite a segunda nota: 3,6
	
	Digite a terceira nota: 5
	
	Digite a quarta nota: 7,54
	
	média: 6,21
	*/
	
	system("PAUSE");
	return 0;
}
