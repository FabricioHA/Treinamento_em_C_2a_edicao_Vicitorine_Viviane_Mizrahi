#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca pr�pria de fun��es e adicion�los da mesmo forma, por exemplo.


/*Base_Numerica_printf
Nos permite estabelecer a base num�rica na qual desejamos ver impreso com base na numera��o dos caracretes ASCII
*/

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caract�res especiais na execu��o do programa
	
	/*
	%d = Decimal
	%x = Hexadecimal
	%o = octal
	%c = Caractere
	*/
	
	printf(" \nDecimal: %d", 65);
	printf("\nHexadecimal: %x", 65);
	printf("\nOctal: %o", 65);
	printf("\nCaractere: %c\n\n", 65);
	
	system("PAUSE");
	return 0;
}
