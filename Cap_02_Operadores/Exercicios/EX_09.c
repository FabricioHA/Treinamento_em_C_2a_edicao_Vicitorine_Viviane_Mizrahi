/*9_Qual é o valor das seguintes expressões?

a) 1 > 2
b) !(1 > 2)
c) 3 == 2
d) !(-5)
e) 'j' != 'j'
f) 'j' != 'j' + 2
g) 'j' != 'j' == 'j'
*/

#include <stdio.h> //Adicionar função printf() e scanf()
#include <stdlib.h> //Adicionar função system()
#include <locale.h> //Ajustar caracteres especiais
#include <conio.h> //Adicionar getch() e gecher()

int main()
{
	setlocale(LC_ALL,"");//Converter caracteres especiais
	system("cls");//Limpar tela
	
	//a)1 > 2
	printf("\na) a expressão 1 > 2 é %s\n\n", 1 > 2 ? "Verdadeiro" : "Falso");
	//Resultado: falso
	
	//b)!(1 > 2)
	printf("b) a expressão !(1 > 2) é %s\n\n", !(1 > 2) ? "Verdadeiro" : "Falso");
	//Resultado: verdadeiro
	
	//c)3 == 2
	printf("c) a expressão 3 == 2 é %s\n\n", 3 == 2 ? "Verdadeiro" : "Falso");
	//Resultado: falso
	
	//d) !(-5)
	printf("d) a expressão !(-5) é %s\n\n", !(-5) ? "Verdadeiro" : "Falso");
	//Resultado: falso (pois o valor por si só já era verdadeiro, negando fica falso)
	
	//e) 'j' != 'j'
	printf("e) a expressão 'j' != 'j' é %s\n\n", 'j' != 'j' ? "Verdadeiro" : "Falso");	
	//Resultado: falso
	
	//f) 'j' != 'j' + 2
	printf("f) a expressão 'j' != 'j' + 2 é %s\n\n", 'j' != 'j' + 2 ? "Verdadeiro" : "Falso");
	//Resultado: verdadeiro
	
	//g) 'j' != 'j' == 'j'
	printf("g) a expressão 'j' != 'j' == 'j' é %s\n\n", 'j' != 'j' == 'j' ? "Verdadeiro" : "Falso");
	//Resultado: falso
	
	system("PAUSE");//Pausar sistema
	return 0; //Retornar valor inteiro
}
