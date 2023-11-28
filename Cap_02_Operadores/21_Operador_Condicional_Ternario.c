/*21_Operador_condicional_ternario: ?:

Sua sintex é levemente extranha. Opera sobre três expressões, sendo sua sintaxe geral:

expressão1 ? expressão2 : expressão3

a expressõo1 é avaliada primeiro. Se seu valor for != de zero (verdadeiro), a expressão2 
será avaliada e o seu resultado será o valor final a ser passado na condicional. Se
expressão1 for zero (falso), o valor da expressão 3 será avaliada no lugar dentro da 
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
	
	//testando condicional ternário
	
	//Atribuir o maior valor entre A e B à variável MAX
	int max, a=1, b=2;
	max = (a>b) ? a : b;
	
	printf("\nValor atribuido escolhido é %d.\n\n", max);
	system("PAUSE");
	
	/*
	Isso acontece pois A>B provou-se uma equação falsa,  mostrando assim que o valor
	referente a variavel falsa (que seria B). caso eu coloca-se A no lugar de B,
	eu receberia como resposta o valor de A, pois ele esta na posição que deve ser
	exibido valores falsos caso a expressão incial seja falsa. vamos pegar um exemplo
	*/
	
	max = 0;
	max = (a>b) ? b : a;
	printf("\nValor atribuido com inversão das variáveis é %d.\n\n", max);
	
	system("PAUSE");
	
	//Se numeros negativo e positivos
	int abs, x;
	
	printf("\nDigite o valor de x: ");
	scanf(" %d", &x);
	abs = (x > 0) ? x : x;
	
	if(abs > 0)
	{
		printf("\nO valor de x é igual a %d e é um número positivo :)\n\n", abs);
	}
	else
	{
		printf("\nO valor de x é igual a %d e é um número negativo :)\n\n", abs);
	}
	system("PAUSE");
	
	//Se par ou impar
	int y;
	
	printf("\nDigite um número par ou impar: ");
	scanf("%d", &y);
	
	printf("\nO número que você digitou é %s\n\n", (y%2) ? "Impar" : "Par");
	
	system("PAUSE");
	return 0;
}
