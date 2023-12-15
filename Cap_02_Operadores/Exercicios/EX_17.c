/*17_Desenvolva um programa que solicite ao usuário o ano e imprima "Ano Bissexto" ou
"Ano Não-Bissexto", conforme o valor da expressão do exercício 16. Utilize o operador
condicional.*/

#include <stdio.h>//Adicina printf() e scanf()
#include <stdlib.h> //Adiciona system() e atoi()
#include <locale.h> //Ajustar caracteres especiais
#include <conio.h> //Adiciona getch() e getche()
#include <windows.h> //Adiciona opções gráficas do windows
#include <ctype.h> //Adiciona isdigit() para converter saída de valores

int main()
{
	setlocale(LC_ALL,""); //Ajustar caracteres especiais
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);//Maximiza janela no cmd
	system("cls");//Limpar tela
	system("title Capitulo 2, Exercício 17");//Titulo da janela cmd
	system("COLOR 0A");
	
	int ano, x;//O x será para controlar os vetores dos caracteres
	char digitado[50];//Armazena (já convertido) o que foi digitado pelo usuário
	char caracteres;//Armazena os valores das teclas digitadas pelo usuário
	
	printf("Digite o ano desejado: ");
	
	do
	{
		caracteres=getch(); //Captura o valor de um caractere
		if(isdigit(caracteres) !=0) //Se caracteres forem numeros
		{
			digitado[x] = caracteres; // Armazena as teclas digitadas em caracteres 
			//no digitado na variável "digitado"
			x++; //atribui os valores digitados pelo usuário
			
			printf("%c", caracteres); //Exibe o que esta sendo digitado na tela
			if(x>20) //Se o controlador de vetores for maior ou igual a 20, então...
			{
				x--; //Controlador do vetor x é decrementado até o limite digitado
				printf("\b \b"); // Apaga os caracteres digitados indicado pelo vetor;
			}
		}
		else if(caracteres == 8&&x) //Se clicar na tecla backspace (valor 8) e for 
		// incrementada por x, então
		{
			digitado[x]='\0'; //O indice atual dos vetores recebe terminação do string
			x--; //Decremento dos valores digitados pelo usuário
			printf("\b \b");
			
		}
	}while(caracteres!=13); //Se tecla enter (valor 13 via getch) for digita, prosseguir
	
	ano = atoi(digitado); //Converte variavel char em valor inteiro
	
	printf("\n\nO ano digitado é um %s.\n\n", ano%4==0? "Ano Bissexto": "Ano Não Bissexto");
	
	system("PAUSE");
	return 0;
}
