/*5_Como se interpreta a express�o "x+++y"
a) x++  + y
b)x  +  ++y

Vamos testar
*/

#include <stdio.h> // Incluir fun��o printf() e scanf
#include <stdlib.h>  //Incluir fun��o system()
#include <locale.h>  //Manter formata��o de texto e caracteres especias
#include <conio.h>  //Incluir fun��es getche() e getch()

int main()
{
	setlocale(LC_ALL,"");//Ajustar caracteres especiais
	system("cls");//Limpar tela
	
	//Vamos testar!!
	int x = 1,y= 1,z=0;
	printf("Fun��o z = x+++y (Quem recebe primerio?), vejamos:\n\nZ = %i  x = %i  y = %i\n\n",z = x+++y,x,y);
	//Resultado: Z = 2  x = 2  y = 1
	
	//Teste 2: x+y++
	x=0,y=0,z=0;
	x=1,y=1;
	printf("Fun��o z = x+y++ (Quem recebe primerio?), vejamos:\n\nZ = %i  x = %i  y = %i\n\n",z = x+y++,x,y);
	//Resultado: z = 2 x = 1 y = 2
	
	//Teste 3: ++x+y
	x=0,y=0,z=0;
	x=1,y=1;
	printf("Fun��o z = ++x+y (Quem recebe primerio?), vejamos:\n\nZ = %i  x = %i  y = %i\n\n",z = ++x+y,x,y);
	//Resultado: z = 3 x = 2 y = 1
	
	/*Ou seja, a precedencia come�ar� valor p�s-fixado, ignorando o y
	a) x++  + y
	*/
	
	system("PAUSE"); //Congelar tela neste ponto
	return 0;//Retornar valor(nesse caso um zero inteiro)
}
