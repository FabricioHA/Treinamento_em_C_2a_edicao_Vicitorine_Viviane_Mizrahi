#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentuação adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca própria de funções e adicionálos da mesmo forma, por exemplo.

int main() //define o tipo de valor que a função irá retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caractéres especiais na execução do programa
	
	int lapis=45, borrachas=2345, canetas=420, cadernos=8, fitas=13050;
	
	printf("\nLapis       %12d", lapis);//Espaçamento de 12 backspace
	printf("\nBorrachas   %12d", borrachas);//Espaçamento de 12 backspace
	printf("\nCanetas     %12d", canetas);//Espaçamento de 12 backspace
	printf("\nCadernos    %12d", cadernos);//Espaçamento de 12 backspace
	printf("\nFitas       %12d\n\n", fitas);//Espaçamento de 12 backspace 
	
	float lapis1, borrachas1, canetas1, cadernos1, fitas1 = 0;
	
	lapis1= 4.875, borrachas1= 234.542, canetas1=42.036, cadernos1=8.0, fitas1=13.05 ;
	
	printf("\nLapis       %12.2f", lapis1);//Espaçamento de 12 backspace
	printf("\nBorrachas   %12.2f", borrachas1);//Espaçamento de 12 backspace
	printf("\nCanetas     %12.2f", canetas1);//Espaçamento de 12 backspace
	printf("\nCadernos    %12.2f", cadernos1);//Espaçamento de 12 backspace
	printf("\nFitas       %12.2f\n\n", fitas1);//Espaçamento de 12 backspace
	
	//Lembrando que o 2f (f sendo valores float ou decimal) refere-se a quantas casas decimais queremos imprimir na saída
	
	printf("%4.2f\n", 3456.78);//Esse teste mostra que podemos manipular a quantidade de casas decimais e espaçamento do texto na linha
	printf("%3.2f\n", 3456.78);
	printf("%3.1f\n", 3456.78);
	printf("%10.3f\n\n", 3456.78);
	
	//sem tamanho no campo:
    printf("%.2f %.2f %.2f\n", 8.0,15.3, 584.13);//Aqui podemos ver que apesar de não usarmos o tamanho, podemos demilitar as casas decimais com .2f, .3f, etc.
	printf("%.2f %.2f %.2f\n\n", 834.0, 1500.55, 4890.13);
	
	
	//com tamanho no campo:
    printf("%10.2f %10.2f %10.2f\n", 8.0,15.3, 584.13);//Aqui, o espaçamento é aplicado à direita
	printf("%10.2f %10.2f %10.2f\n\n", 834.0, 1500.55, 4890.13);
	
	//Tamanho de campo e justificado à esquerda
	printf("%-10.2f %-10.2f %-10.2f\n", 8.0,15.3, 584.13);//Aqui, o espaçamento é aplicado à esquerda
	printf("%-10.2f %-10.2f %-10.2f\n\n", 834.0, 1500.55, 4890.13);
	
	system("PAUSE");
	return 0;
}
