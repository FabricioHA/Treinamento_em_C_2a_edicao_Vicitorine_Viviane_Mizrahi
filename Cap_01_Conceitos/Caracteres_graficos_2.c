#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca pr�pria de fun��es e adicion�los da mesmo forma, por exemplo.


/*
Caracteres_graficos_2
Qualuer caractere � representado no computador por um n�mero. O c�digo ASCII disp�e
de n�meros de 0 a 127 abrangendo letras, digitos de 0 a 9, caracteres de pontua��o,
tabula��o, etc.
Temos tamb�m os caract�res adicionais com o c�digo ASCII de 128 a 255 caract�res de
linguas estrangeiras e caract�res gr�ficos.
As formas para representar um caract�re de c�digo acima � o 
                                      
									\xdd

o dd representa o c�digo em base hexadecimal, sempre usado em espa�os de testo dentro 
das "" (aspas)						
*/

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caract�res especiais na execu��o do programa
	system("cls");//Limpar a tela
	//Desenhando moldura
	printf("\n\n");
	printf("\n\t\xC9\xCD\xBB");
	printf("\n\t\xBA \xBA");
	printf("\n\t\xC8\xCD\xBC");
	
	
	
	system("PAUSE");
	return 0;
}
