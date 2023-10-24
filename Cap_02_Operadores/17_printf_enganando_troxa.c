/*17_Printf_enganando_troxa

Expressões de qualquer operador C podem ser atribuidos e utilizados como 
argumentos no printf(), Como por exemplo:

printf("%d%c%d", ++x, '\n', 5*y+4); Essa expressão está totalmente correta.

infellizmente, isso pode não ser possível em determinados casos ao imprimir uma mesma
variavel diversas vezes utilizando operador de incremento ou decremento:

int n = 5;
printf("%d\t%d\t%d\n", n, n+1, n++);

a impressão normalmente seria:

5  6  7

mas com o printf ele pode ler primeiro o ultimo valor primeiro, exibindo isso:

6  7  5

Isso pode variar de compilador para compilador, executando da esquerda para direita ou
vice-e-versa.
*/

//Alguns engana troxa (eu) para desatentos

#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
#include <conio.h> //Para getche() e getch()

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, "");//Exibir caractéres especiais
	system("cls");//Limpar a tela
	
	int i = 3, n;
	//pré-fixado
	n=i * (i+1) + (++i);
	printf("\nEngana troxa 1: n = %d\n", n); //n=16
	memset (&i, 0, sizeof(i));//Limpar variavel
	memset (&n, 0, sizeof(n));//Limpar variavel
	i = 3;
	printf("\nEngana troxa 2: n = %d\n", n=i * (i+1) + (++i)); //n=16
	i = 3;
	memset (&i, 0, sizeof(i));//Limpar variavel
	memset (&n, 0, sizeof(n));//Limpar variavel
	
	//pré-fixado
	i = 3;
	n=i * (i+1) + (i++);
	printf("\nEngana troxa 3: n = %d\n", n); //n=15
	memset (&i, 0, sizeof(i));//Limpar variavel
	memset (&n, 0, sizeof(n));//Limpar variavel
	i = 3;
	printf("\nEngana troxa 4: n = %d\n", n=i * (i+1) + (i++)); //n=35
	
	system("PAUSE");
	return 0;
}
