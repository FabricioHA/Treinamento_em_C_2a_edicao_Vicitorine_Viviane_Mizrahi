/*12_indique o valor de cada uma das seguintes express�es (consulte a tabela de 
preced�ncia dos operadores).

int i=1, j=2, k=3, n=2;
float x=3.3, y=4.4;

a) i < j + 3
b) 2 * i - 7 <= j - 8
c) -x + y >= 2.0 * y
d) x == y
e) x != y
f) i + j + k == -2 * -k
g) !(n-j)
h) !n-j
i) !x*!x
j) i&&j&&k
k) i||j-3&&0
l) i<j&&2>=k
m) i<j||2>=k
n) i==2||j==4||k==5
o) i=2||j==4||k==5
p)x<=5.0&&x!=1.0||i>j
*/

#include <stdio.h> //Adicionar printf() e scanf()
#include <stdlib.h> //Adicionar system()
#include <locale.h> //Converter caracteres especiais
#include <conio.h>  //Adicionar getch() e getche()
#include <windows.h> //Adicionar op��es graficas via windows

#define WHITE "\x1B[0m" //Definir cor branca no texo de sa�da

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //maximiza tela via identificador
	
	setlocale(LC_ALL, ""); //converter caracteres especiais
	
	system("title Capitulo 02, Exercicio 12"); //Definir titulo da tela de sa�da
	system("mode con cols=11 lines 300"); //Ajustar tamanho da tela
	
	system("cls"); //Limpar tela
	system("color 0A"); //Mudar cor de fundo e texto com system() do stdlib.h
	
	int i=1, j=2, k=3, n=2;
	float x=3.3, y=4.4;
	
	//a) i < j + 3
	printf("i=1, j=2, k=3, n=2, x=3.3, y=4.4\n\na)express�o i < j + 3 � %s\n\n", i < j + 3? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//b) 2 * i - 7 <= j - 8
	printf("\nb)express�o 2 * i - 7 <= j - 8 � %s\n\n", 2 * i - 7 <= j - 8? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//c) -x + y >= 2.0 * y
	printf("\nc)express�o -x + y >= 2.0 * y � %s\n\n", -x + y >= 2.0 * y? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//d) x == y
	printf("\nd)express�o x == y � %s\n\n", x == y? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//e) x != y
	printf("\ne)express�o x != y � %s\n\n", x != y? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//f) i + j + k == -2 * -k
	printf("\nf)express�o i + j + k == -2 * -k � %s\n\n", i + j + k == -2 * -k? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//g) !(n-j)
	printf("\ng)express�o !(n-j) � %s\n\n", !(n-j)? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//h) !n-j
	printf("\nh)express�o !n-j � %s\n\n", !n-j? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//i) !x*!x
	printf("\ni)express�o !x*!x � %s\n\n", !x*!x? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//j) i&&j&&k
	printf("\nj)express�o i&&j&&k � %s\n\n", i&&j&&k? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//k) i||j-3&&0
	printf("\nk)express�o i||j-3&&0 � %s\n\n", i||j-3&&0? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//l) i<j&&2>=k
	printf("\nl)express�o i<j&&2>=k � %s\n\n", i<j&&2>=k? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//m) i<j||2>=k
	printf("\nm)express�o i<j||2>=k � %s\n\n", i<j||2>=k? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//n) i==2||j==4||k==5
	printf("\nn)express�o i==2||j==4||k==5 � %s\n\n", i==2||j==4||k==5? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//o) i=2||j==4||k==5
	printf("\no)express�o i=2||j==4||k==5 � %s\n\n", -x + y >= 2.0 * y? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//p)x<=5.0&&x!=1.0||i>j
	printf("\np)express�o x<=5.0&&x!=1.0||i>j � %s\n\n", x<=5.0&&x!=1.0||i>j? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	system("PAUSE"); //congelar opera��o do sistema
	return 0; //se opera��o for verdadeira, retornar 0
}
