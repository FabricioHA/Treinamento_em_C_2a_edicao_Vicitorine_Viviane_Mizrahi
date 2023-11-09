/*5_Como se interpreta a expressão "x+++y"
a) x++  + y
b)x  +  ++y

Vamos testar
*/

#include <stdio.h> // Incluir função printf()
#include <stdlib.h>  //Incluir função scanf()
#include <locale.h>  //Manter formatação de texto e caracteres especias
#include <conio.h>  //Incluir funções getche() e getch()

int main()
{
	setlocale(LC_ALL,"");//Ajustar caracteres especiais
	system("cls");//Limpar tela
	
	//Vamos testar!!
	int x = 1,y= 1,z =1;
	printf("Função z = x+++y (Quem recebe primerio?), vejamos:\n\nZ = %i  x = %i  y = %i\n\n",z = x+++y,x,y);
	//Resultado: Z = 2  x = 2  y = 1
	/*Ou seja, a precedencia começará valor pós-fixado, ignorando o y
	a) x++  + y
	*/
	
	system("PAUSE"); //Congelar tela neste ponto
	return 0;//Retornar valor(nesse caso um zero inteiro)
}
