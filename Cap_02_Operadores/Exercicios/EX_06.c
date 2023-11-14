/*6_Quais são os valores de cada variável nas seguintes expressões?
int a=1, b=2, c=3, d=4;
*/

#include <stdlib.h> //Biblioteca do printf()
#include <stdio.h> //Biblioteca do scanf()
#include <locale.h> //formatação de caracteres especiais
#include <conio.h> //Bibliotecas dos comandos getch() e getche()

int main()
{
	setlocale(LC_ALL,""); //Exibir caracteres especiais corretamente
	int a=1, b=2, c=3, d=4;
	
	//A)
	printf("O valor de a += b+c é a = %i\n\n", a+=b+c);
	//Resultado: a = 6
	a = 0;
	a = 1;
	
	//B)
	printf("O valor de b *= c = d + 2 é b = %i\n\n", b*=c= d + 2);
	//Resultado: a = 12
	b = 0;
	b = 2;
 	
	system("PAUSE"); //Congelar tela nesse estado
	return 0; //Retornar valor inteiro = 0
}
