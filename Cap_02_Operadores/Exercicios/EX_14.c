/*14_Qual é o valor das seguintes expressões?

int a=1, b=2, c=3;
++a/a&&!b&&c||b-||-a+4*c>!!b
*/

#include <stdio.h> // Adicionar printf() e scanf()
#include <stdlib.h> // Adicionar system()
#include <locale.h> // Ajustar caracteres especiais
#include <conio.h> //Adicionar getch() e getche()
#include <windows.h> // Adicionar opções gráficas do windows

int main()
{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE); //tela cheia
	setlocale(LC_ALL, ""); //Ajustar caracteres
	system("title Capitulo 2, Exercício 14");//Titulo da janela
	system("COLOR 0A");
	system("cls");//Limpar tela
	
	int a=1, b=2, c=3;
	
	/*
	Bem, vamos fazer manualmente, uma vez que ao tentar
	compilar no código, o programa aponta erro no operador lógico OU(||)
	
	Como orientado em alguns exemplos, vamos utilizar a tabela de precedência:
	
	Simbolo     operador
	-           Menos Unário
	++          Incremento prefixado ou pós-fixado
	--          Decremento prefixado ou pós-fixado
	!           Lógico NÃO
	*           Multiplicação aritimética
	/           Divisão Aritimética
	%           Módulo Aritimético
	+           Mais aritimético
	-           Menos aritimético
	<           Menor relacional
	<=          menor ou igual relacional
	>           Maior relacional
	>=          maior ou igual relacional
	==          igual relacional
	!=          diferente relacional
	&&          E lógico
	!!          OU lógico
	?:          Condicional
	=           atribuição
	*=          Aritmético de atribuição (vezes)
	/=          Aritmético de atribuição (Divide)
	%=          Aritmético de atribuição (módulo)
	+=          Aritmético de atribuição (soma)
	
	++a/a && !b && c || b-0 || -a+4*c > !!b
	(1+a)/a && !b && c || b-0 || -a+4 * c > !!b
	(1+1)/1 && !2 && 3 || 2-0 || -1+4*3 > !!2 /Aqui, foi negado os numeros, tornando-os     
	2 && 0 && 3 || 2 || 11 > 1  //binários. note que !!2 virou 1, pois ele foi 
	2 && 0 && 3 || 2 || 1      ///negado, virou 0 e foi negado novamente, virando 1
	0 && 3 || 2 || 1
	0 || 2 || 1
	1 || 1
	1
	
	No fim, o valor será 1. Vamos exemplificar isso passo a passo em algumas operações
	praticas:
	*/
	
	
	//Exibindo o valor das expressões
	printf("O valor das expressões ++a/a&&!b&&c||b-||-a+4*c>!!b é %d\n\n", ++a/a && !b && c || b-0 || -a+4*c > !!b);
	/*Fazendo uma leve correção no na expressão "b-" especificando um 0, ela é 
	executada normalmente, retornando 1*/
	
	system("PAUSE");//Congelar sistema
	return 0; // Retornar 0 caso operação seja verdadeira
}
