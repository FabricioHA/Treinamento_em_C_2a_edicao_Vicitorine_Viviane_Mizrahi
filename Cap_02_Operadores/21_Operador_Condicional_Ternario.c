/*21_Operador_condicional_ternario: ?:

Sua sintex � levemente extranha. Opera sobre tr�s express�es, sendo sua sintaxe geral:

express�o1 ? express�o2 : express�o3

a express�o1 � avaliada primeiro. Se seu valor for != de zero (verdadeiro), a express�o2 
ser� avaliada e o seu resultado ser� o valor final a ser passado na condicional. Se
express�o1 for zero (falso), o valor da express�o 3 ser� avaliada no lugar dentro da 
condicional como um todo:

se exp1 ==1 ? exp2 : exp3  ========>  valor validado: exp2;
se exp1 ==0 ? exp2 : exp3  ========>  valor validado: exp3;
*/

#include <stdio.h> //Incluir printf() e scanf()
#include <stdlib.h> //Incluir system()
#include <locale.h> //Ajustar caracteres especiais
#include <conio.h>  //incluir getch() e getche()

int main()
{
	setlocale(LC_ALL, ""); //Ajustar caracteres especiais
	system("cls");//Limpar tela
	
	//testando condicional tern�rio
	
	//Atribuir o maior valor entre A e B � vari�vel MAX
	int max, a=1, b=2;
	max = (a>b) ? a : b;
	
	printf("\nValor atribuido escolhido � %d.\n\n", max);
	system("PAUSE");
	
	/*
	Isso acontece pois A>B provou-se uma equa��o falsa,  mostrando assim que o valor
	referente a variavel falsa (que seria B). caso eu coloca-se A no lugar de B,
	eu receberia como resposta o valor de A, pois ele esta na posi��o que deve ser
	exibido valores falsos caso a express�o incial seja falsa. vamos pegar um exemplo
	*/
	
	max = 0;
	max = (a>b) ? b : a;
	printf("\nValor atribuido com invers�o das vari�veis � %d.\n\n", max);
	
	system("PAUSE");
	
	//Se numeros negativo e positivos
	int abs, x;
	
	printf("\nDigite o valor de x: ");
	scanf(" %d", &x);
	abs = (x > 0) ? x : x;
	
	if(abs > 0)
	{
		printf("\nO valor de x � igual a %d e � um n�mero positivo :)\n\n", abs);
	}
	else
	{
		printf("\nO valor de x � igual a %d e � um n�mero negativo :)\n\n", abs);
	}
	system("PAUSE");
	
	//Se par ou impar
	int y;
	
	printf("\nDigite um n�mero par ou impar: ");
	scanf("%d", &y);
	
	printf("\nO n�mero que voc� digitou � %s\n\n", (y%2) ? "Impar" : "Par");
	
	system("PAUSE");
	return 0;
}
