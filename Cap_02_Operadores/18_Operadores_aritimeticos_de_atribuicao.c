/*17_Operadores aritim�ticos de atribui��o: += -= *= /= %=
Esses operadores combinam as opera��es aritim�ticas com a opera��o de atribui��o,
consistindo em atribuir um novo valor � vari�vel que depender� do operador e da express�o � 
direita. Exemplo:

x opera��o(simbolo) = express�o    equivale a     x = x opera��o/simbolo (express�o)

exemplos:

i += 2;   � igual a   i = i + 2
x *= y+1  � igual a   x = x * (y+1)
t /= 2.5  � igual a   t = t / 2.5
p %= 5    � igual a   p = p % 5
d -= 3    � igual a   d = d - 3

*/

//Exemplos:

#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
#include <conio.h> //Para getche() e getch()

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, "");//Exibir caract�res especiais
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
	printf("\nm�dia: %.2f\n", media);
	
	/*
	Digite a primeira nota: 8,7

	Digite a segunda nota: 3,6
	
	Digite a terceira nota: 5
	
	Digite a quarta nota: 7,54
	
	m�dia: 6,21
	*/
	
	system("PAUSE");
	return 0;
}
