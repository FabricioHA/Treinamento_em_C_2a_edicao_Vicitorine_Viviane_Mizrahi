#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca própria de funções e adicionálos da mesmo forma, por exemplo.


/*
Caracteres_graficos
Qualuer caractere é representado no computador por um número. O código ASCII dispõe
de números de 0 a 127 abrangendo letras, digitos de 0 a 9, caracteres de pontuação,
tabulação, etc.
Temos também os caractéres adicionais com o código ASCII de 128 a 255 caractéres de
linguas estrangeiras e caractéres gráficos.
As formas para representar um caractére de código acima é o 
                                      
									\xdd

o dd representa o código em base hexadecimal, sempre usado em espaços de testo dentro 
das "" (aspas)						
*/

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caractéres especiais na execução do programa
	system("cls");//Limpar a tela
	printf("\n\n");
	//Começando a impressão do carro gráfico
	printf("\n\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
	printf("\n\t\xDFO\xDF\xDF\xDF\xDFO\xDF");
	//Fim impressão carro
	printf("\n\n");
	//Incia impressão caminhonete
	printf("\n\t\xDC\xDC\xDB \xDB\xDB\xDB\xDB\xDB\xDB");
	printf("\n\t\xDFO\xDF\xDF\xDF\xDF\xDF\xDFOO\xDF");
	//Fim impressão caminhonete
	printf("\n\n");
	
	
	
	system("PAUSE");
	return 0;
}
