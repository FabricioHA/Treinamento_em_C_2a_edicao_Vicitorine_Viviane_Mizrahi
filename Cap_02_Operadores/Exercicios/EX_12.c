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

int main()
{
	setlocale(LC_ALL, ""); //converter caracteres especiais
	system("cls"); //Limpar tela
	
	int i=1, j=2, k=3, n=2;
	float x=3.3, y=4.4;
	
	//a) i < j + 3
	printf("i=1, j=2, k=3, n=2\n\na)expressão i < j + 3 é %s\n\n", i < j + 3? "Verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	//b) 2 * i - 7 <= j - 8
	printf("\nb)expressão 2 * i - 7 <= j - 8 é %s\n\n", 2 * i - 7 <= j - 8? "Verdadeiro": "falso");
	//Resultado: Verdadeiro
	
	//c) -x + y >= 2.0 * y
	//Resultado: Verdadeiro
	
	//d) x == y
	//Resultado: Verdadeiro
	
	//e) x != y
	//Resultado: Verdadeiro
	
	//f) i + j + k == -2 * -k
	//Resultado: Verdadeiro
	
	//g) !(n-j)
	//Resultado: Verdadeiro
	
	//h) !n-j
	//Resultado: Verdadeiro
	
	//i) !x*!x
	//Resultado: Verdadeiro
	
	//j) i&&j&&k
	//Resultado: Verdadeiro
	
	//k) i||j-3&&0
	//Resultado: Verdadeiro
	
	//l) i<j&&2>=k
	//Resultado: Verdadeiro
	
	//m) i<j||2>=k
	//Resultado: Verdadeiro
	
	//n) i==2||j==4||k==5
	//Resultado: Verdadeiro
	
	//o) i=2||j==4||k==5
	//Resultado: Verdadeiro
	
	//p)x<=5.0&&x!=1.0||i>j
	//Resultado: Verdadeiro
	
	
	system("PAUSE"); //congelar operação do sistema
	return 0; //se operação for verdadeira, retornar 0
}
