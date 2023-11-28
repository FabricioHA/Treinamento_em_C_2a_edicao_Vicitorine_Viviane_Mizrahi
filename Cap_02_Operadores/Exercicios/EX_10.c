/*10_qual é o valor de k?
int k, j=3;
k = j==3;
*/
#include <stdio.h> //Adicionar printf()
#include <stdlib.h> // Adicionar scanf()
#include <locale.h> // Ajustar caracteres
#include <conio.h> // Adicionar getch() e getche()

int main()
{
	setlocale(LC_ALL, "");//Ajustar caracteres
	system("cls");
	
	int k, j=3;
	k = j==3;
	
	printf("j==3 é %s, pois k é igual a %d.\n\n", k ==1? "verdadeiro":"falso", k);
	
	//Logo, o valor de k é igual a 1, ilustrando que a expressão é verdadeira
	system("PAUSE");
	return 0;
}
