/*14_Qual � o valor das seguintes express�es?

int a=1, b=2, c=3;
++a/a&&!b&&c||b-||-a+4*c>!!b
*/

#include <stdio.h> // Adicionar printf() e scanf()
#include <stdlib.h> // Adicionar system()
#include <locale.h> // Ajustar caracteres especiais
#include <conio.h> //Adicionar getch() e getche()
#include <windows.h> // Adicionar op��es gr�ficas do windows

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //tela cheia
	setlocale(LC_ALL, ""); //Ajustar caracteres
	system("title Capitulo 2, Exerc�cio 14");//Titulo da janela
	system("COLOR 0A");
	system("cls");//Limpar tela
	
	int a=1, b=2, c=3;
	
	/*
	Bem, vamos fazer manualmente, uma vez que ao tentar
	compilar no c�digo, o programa aponta erro no operador l�gico OU(||)
	
	Como orientado em alguns exemplos, vamos utilizar a tabela de preced�ncia:
	
	Simbolo     operador
	-           Menos Un�rio
	++          Incremento prefixado ou p�s-fixado
	--          Decremento prefixado ou p�s-fixado
	!           L�gico N�O
	*           Multiplica��o aritim�tica
	/           Divis�o Aritim�tica
	%           M�dulo Aritim�tico
	+           Mais aritim�tico
	-           Menos aritim�tico
	<           Menor relacional
	<=          menor ou igual relacional
	>           Maior relacional
	>=          maior ou igual relacional
	==          igual relacional
	!=          diferente relacional
	&&          E l�gico
	!!          OU l�gico
	?:          Condicional
	=           atribui��o
	*=          Aritm�tico de atribui��o (vezes)
	/=          Aritm�tico de atribui��o (Divide)
	%=          Aritm�tico de atribui��o (m�dulo)
	+=          Aritm�tico de atribui��o (soma)
	
	++a/a && !b && c || b-0 || -a+4*c > !!b
	(1+a)/a && !b && c || b-0 || -a+4 * c > !!b
	(1+1)/1 && !2 && 3 || 2-0 || -1+4*3 > !!2 /Aqui, foi negado os numeros, tornando-os     
	2 && 0 && 3 || 2 || 11 > 1  //bin�rios. note que !!2 virou 1, pois ele foi 
	2 && 0 && 3 || 2 || 1      ///negado, virou 0 e foi negado novamente, virando 1
	0 && 3 || 2 || 1
	0 || 2 || 1
	1 || 1
	1
	
	No fim, o valor ser� 1. Vamos exemplificar isso passo a passo em algumas opera��es
	praticas:
	*/
	
	
	//Exibindo o valor das express�es
	printf("O valor das express�es ++a/a&&!b&&c||b-||-a+4*c>!!b � %d\n\n", ++a/a && !b && c || b-0 || -a+4*c > !!b);
	/*Fazendo uma leve corre��o no na express�o "b-" especificando um 0, ela � 
	executada normalmente, retornando 1*/
	
	system("PAUSE");//Congelar sistema
	return 0; // Retornar 0 caso opera��o seja verdadeira
}
