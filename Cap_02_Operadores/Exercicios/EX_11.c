/*11_qual é o valor de y?

float y;
int x;
x = 22345;
y  = (float)(x);
printf(%f,y);
*/

#include <stdio.h> //Adicionar printf() e scanf()
#include <stdlib.h> //adicionar system()
#include <locale.h> // Converter caracteres especiais
#include <conio.h> // Adicionar getch() e getche()

int main()
{
	setlocale(LC_ALL, "");
	system("cls");
	
	float y;
	int x;
	x = 22345;
	y  = (float)(x);
	printf("O valor de y é %f\n\n",y);
	
	//O valor de y é 22345,000000
	
	system("PAUSE");
	return 0;
}
