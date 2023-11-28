/*6_Quais são os valores de cada variável nas seguintes expressões?
int a=1, b=2, c=3, d=4;
*/

#include <stdlib.h> //Biblioteca do printf() e scanf()
#include <stdio.h> //Biblioteca do system()
#include <locale.h> //formatação de caracteres especiais
#include <conio.h> //Bibliotecas dos comandos getch() e getche()

int main()
{
	setlocale(LC_ALL,""); //Exibir caracteres especiais corretamente
	int a=1, b=2, c=3, d=4;
	
	//A) a += b + c
	printf("a) O valor de a += b+c é a = %i\n\n", a+=b+c);
	//Resultado: a = 6
	a = 0;
	a = 1;
	
	//B) b *= c = d + 2
	printf("b)O valor de b *= c = d + 2 é b = %i\n\n", b*=c= d + 2);
	//Resultado: a = 1
	d = 0;
	d = 4;
	
	//C) d %= a + a + a
	printf("c) O valor de d %= a + a + a é d = %i\n\n", d %= a + a + a);
	//Resultado: a = 12
	b = 0;
	b = 2;
	
	//D) d -= c -= b -= a
	printf("d) O valor de d -= c -= b -= a é d = %i\n\n", d -= c -= b -= a);
	//Resultado: a = -4
	d = 0;
	d = 4;
	
	//E) a += b += c += 7
	printf("e) O valor de a += b += c += 7 é d = %i\n\n", a += b += c += 7);
	//Resultado: a = 14
	d = 0;
	d = 4;
 	
	system("PAUSE"); //Congelar tela nesse estado
	return 0; //Retornar valor inteiro = 0
}
