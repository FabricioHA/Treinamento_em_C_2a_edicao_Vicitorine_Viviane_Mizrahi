/*
7. impress�o formatada com printf()

O programa mostra mais um uso de scanf(), mostra tamb�m a impress�o formatada 
com printf()
*/
#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, "");
	system("cls");//Limpar a tela
	
	char a;
	printf("Digite um caractere e veja-o em decimal,");
	printf(" octal e hexadecimal: ");
	scanf("%c", &a);
	printf("\nCaractere=%c\nDec\t =%d\nOct\t =%o\nHex\t =%x\n", a,a,a,a);
		
	system("PAUSE");
	return 0;
}
