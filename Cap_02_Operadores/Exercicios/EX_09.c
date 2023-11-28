/*9_Qual � o valor das seguintes express�es?

a) 1 > 2
b) !(1 > 2)
c) 3 == 2
d) !(-5)
e) 'j' != 'j'
f) 'j' != 'j' + 2
g) 'j' != 'j' == 'j'
*/

#include <stdio.h> //Adicionar fun��o printf() e scanf()
#include <stdlib.h> //Adicionar fun��o system()
#include <locale.h> //Ajustar caracteres especiais
#include <conio.h> //Adicionar getch() e gecher()

int main()
{
	setlocale(LC_ALL,"");//Converter caracteres especiais
	system("cls");//Limpar tela
	
	//a)1 > 2
	printf("\na) a express�o 1 > 2 � %s\n\n", 1 > 2 ? "Verdadeiro" : "Falso");
	//Resultado: falso
	
	//b)!(1 > 2)
	printf("b) a express�o !(1 > 2) � %s\n\n", !(1 > 2) ? "Verdadeiro" : "Falso");
	//Resultado: verdadeiro
	
	//c)3 == 2
	printf("c) a express�o 3 == 2 � %s\n\n", 3 == 2 ? "Verdadeiro" : "Falso");
	//Resultado: falso
	
	//d) !(-5)
	printf("d) a express�o !(-5) � %s\n\n", !(-5) ? "Verdadeiro" : "Falso");
	//Resultado: falso (pois o valor por si s� j� era verdadeiro, negando fica falso)
	
	//e) 'j' != 'j'
	printf("e) a express�o 'j' != 'j' � %s\n\n", 'j' != 'j' ? "Verdadeiro" : "Falso");	
	//Resultado: falso
	
	//f) 'j' != 'j' + 2
	printf("f) a express�o 'j' != 'j' + 2 � %s\n\n", 'j' != 'j' + 2 ? "Verdadeiro" : "Falso");
	//Resultado: verdadeiro
	
	//g) 'j' != 'j' == 'j'
	printf("g) a express�o 'j' != 'j' == 'j' � %s\n\n", 'j' != 'j' == 'j' ? "Verdadeiro" : "Falso");
	//Resultado: falso
	
	system("PAUSE");//Pausar sistema
	return 0; //Retornar valor inteiro
}
