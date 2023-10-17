#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca própria de funções e adicionálos da mesmo forma, por exemplo.


/*Base_Numerica_printf
Nos permite estabelecer a base numérica na qual desejamos ver impreso com base na numeração dos caracretes ASCII
*/

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caractéres especiais na execução do programa
	
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
