/*19_Operadores_Relacionais > >= < <= == !=

Os operadores relacionais s�o:

>   maior
>=  maior ou igual
<   menor
<=  menor ou igual
==  igual
!=  diferente

Eles normalmente s�o muito utilizados em la�os de repet��o e condicionais.

Os operadores relacionais basicamente representam o vocabul�rio utilizado que a maquina
usa para fazer perguntas.

N�o temos variaveis do tipo "booleano", � o mais rulpestre poss�vel:
Qualquer valor == a zero (0) � falso, e qualquer valor != de zero (1) � verdadeiro.

c�digo de formata��o         significado
%c                           Caractere simples
%d                           inteiro decimal com sinal
%i                           inteirodecimal, hexadecimal ou octal
%e                           nota��o ci�nifica
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
	//Nesse caso, 15 � menor que 20, sendo verdadeiro
	printf("Falso %d\n\n", falso);
	//Nesse caso, podemos ver que 15 n�o � igual a 20, sendo falso
	
	//Precedencia dos operadores relacionais
	printf("Precedencia de valores\nO valor da express�o 4 + 1 < 3 � %d\n", 4+1<3);
	printf("O valor da express�o 2 < 1 + 3 � %d\n\n", 2<1+3);
	
	/*Operadores relacionais tem preced�ncia menor em rela��o aos operadores,
	isso significa que os operadores s�o avaliados antes dos relacionais, como podemos
	ver acima.
	*/
	
	system("PAUSE");
	return 0;
}


