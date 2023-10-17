#include <stdio.h>//para printf()
#include <stdlib.h>//para system()
#include <locale.h>//garante acentua��o adequada do programa
//os includes nos permitem icluir linhas de comando em uma unica linha no arquivo, referenciando-os por seus respectivos nomes, como visto acima, assim poderiamos
// criar uma biblioteca pr�pria de fun��es e adicion�los da mesmo forma, por exemplo.

int main() //define o tipo de valor que a fun��o ir� retornar com o "return"
{
	setlocale(LC_ALL, ""); //Ajusta caract�res especiais na execu��o do programa
	
	printf("Os alunos s�o %2d.\n", 350);//Espa�amento de 2 backspace
	printf("Os alunos s�o %4d.\n", 350);//Espa�amento de 4 backspace
	printf("Os alunos s�o %5d.\n", 350);//Espa�amento de 5 backspace
	system("PAUSE");
	return 0;
}
