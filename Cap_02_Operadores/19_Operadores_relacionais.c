/*19_Operadores_Relacionais > >= < <= == !=

Os operadores relacionais são:

>   maior
>=  maior ou igual
<   menor
<=  menor ou igual
==  igual
!=  diferente

Eles normalmente são muito utilizados em laços de repetção e condicionais.

Os operadores relacionais basicamente representam o vocabulário utilizado que a maquina
usa para fazer perguntas.

Não temos variaveis do tipo "booleano", é o mais rulpestre possível:
Qualquer valor == a zero (0) é falso, e qualquer valor != de zero (1) é verdadeiro.

código de formatação         significado
%c                           Caractere simples
%d                           inteiro decimal com sinal
%i                           inteirodecimal, hexadecimal ou octal
%e                           notação ciênifica
%f                           ponto flutuante em decimal
%g                           Usa %e ou %f, o que for menor
%o                           inteiro octal
%s                           String de caracteres
%u                           inteiro decimal sem sinal
%x                           inteiro hexadecimal
%ld                          inteiro decimal longo
%lf                          ponto flutuante longo
%Lf                          double longo
*/

#include <stdio.h> //Inclui printf()
#include <stdlib.h>//Inclui scanf()
#include <locale.h>//Ajusta caracteres
#include <conio.h>//Inclui getch() e getche()

int main()
{
	setlocale(LC_ALL, ""); //Ajustar caracteres especiais
	system("cls");//Limpar tela
	
	int verdadeiro,falso;
	
	verdadeiro = (15<20);
	falso = (15==20);
	
	printf("Verdadeiro %d\n", verdadeiro); //%d Inteiro de valor decimal
	//Nesse caso, 15 é menor que 20, sendo verdadeiro
	printf("Falso %d\n\n", falso);
	//Nesse caso, podemos ver que 15 não é igual a 20, sendo falso
	
	//Precedencia dos operadores relacionais
	printf("Precedencia de valores\nO valor da expressão 4 + 1 < 3 é %d\n", 4+1<3);
	printf("O valor da expressão 2 < 1 + 3 é %d\n\n", 2<1+3);
	
	/*Operadores relacionais tem precedência menor em relação aos operadores,
	isso significa que os operadores são avaliados antes dos relacionais, como podemos
	ver acima.
	*/
	
	system("PAUSE");
	return 0;
}


