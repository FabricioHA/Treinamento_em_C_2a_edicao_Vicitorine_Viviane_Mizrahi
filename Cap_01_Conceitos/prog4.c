#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca pr�pria de fun��es e adicion�los da mesmo forma, por exemplo.

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caract�res especiais na execu��o do programa
	
	int evento = 5;//varivael int
	char corrida = 'C';//variavel string
	
	float tempo = 27.25;//variavel decimal float
	
	printf("\nO tempo vitorioso na eliminat�ria %c", corrida);
	printf("\nda competic�ao %d foi %f.\n", evento, tempo);
	
	system("PAUSE");
	return 0;

}
