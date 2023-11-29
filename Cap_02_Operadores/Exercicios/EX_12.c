/*12_indique o valor de cada uma das seguintes expressões (consulte a tabela de 
precedência dos operadores).

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
#include <windows.h> //Adicionar opções graficas via windows

#define WHITE "\x1B[0m" //Definir cor branca no texo de saída

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //maximiza tela via identificador
	
	setlocale(LC_ALL, ""); //converter caracteres especiais
	
	system("title Capitulo 02, Exercicio 12"); //Definir titulo da tela de saída
	system("mode con cols=11 lines 300"); //Ajustar tamanho da tela
	
	system("cls"); //Limpar tela
	system("color 0A"); //Mudar cor de fundo e texto com system() do stdlib.h
	
	int i=1, j=2, k=3, n=2;
	float x=3.3, y=4.4;
	
	//a) i < j + 3
	printf("i=1, j=2, k=3, n=2, x=3.3, y=4.4\n\na)expressão i < j + 3 é %s\n\n", i < j + 3? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//b) 2 * i - 7 <= j - 8
	printf("\nb)expressão 2 * i - 7 <= j - 8 é %s\n\n", 2 * i - 7 <= j - 8? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//c) -x + y >= 2.0 * y
	printf("\nc)expressão -x + y >= 2.0 * y é %s\n\n", -x + y >= 2.0 * y? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//d) x == y
	printf("\nd)expressão x == y é %s\n\n", x == y? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//e) x != y
	printf("\ne)expressão x != y é %s\n\n", x != y? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//f) i + j + k == -2 * -k
	printf("\nf)expressão i + j + k == -2 * -k é %s\n\n", i + j + k == -2 * -k? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//g) !(n-j)
	printf("\ng)expressão !(n-j) é %s\n\n", !(n-j)? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//h) !n-j
	printf("\nh)expressão !n-j é %s\n\n", !n-j? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//i) !x*!x
	printf("\ni)expressão !x*!x é %s\n\n", !x*!x? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//j) i&&j&&k
	printf("\nj)expressão i&&j&&k é %s\n\n", i&&j&&k? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//k) i||j-3&&0
	printf("\nk)expressão i||j-3&&0 é %s\n\n", i||j-3&&0? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//l) i<j&&2>=k
	printf("\nl)expressão i<j&&2>=k é %s\n\n", i<j&&2>=k? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//m) i<j||2>=k
	printf("\nm)expressão i<j||2>=k é %s\n\n", i<j||2>=k? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//n) i==2||j==4||k==5
	printf("\nn)expressão i==2||j==4||k==5 é %s\n\n", i==2||j==4||k==5? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//o) i=2||j==4||k==5
	printf("\no)expressão i=2||j==4||k==5 é %s\n\n", -x + y >= 2.0 * y? "verdadeiro": "falso");
	//Resultado: falso
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	//p)x<=5.0&&x!=1.0||i>j
	printf("\np)expressão x<=5.0&&x!=1.0||i>j é %s\n\n", x<=5.0&&x!=1.0||i>j? "verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	i=0, j=0, k=0, n=0, x=0, y=0;;
	i=1, j=2, k=3, n=2, x=3.3, y=4.4;;
	
	system("PAUSE"); //congelar operação do sistema
	return 0; //se operação for verdadeira, retornar 0
}
