/*10_qual � o valor de k?
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
	
	printf("j==3 � %s, pois k � igual a %d.\n\n", k ==1? "verdadeiro":"falso", k);
	
	//Logo, o valor de k � igual a 1, ilustrando que a express�o � verdadeira
	system("PAUSE");
	return 0;
}
