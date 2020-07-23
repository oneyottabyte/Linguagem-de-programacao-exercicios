#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
	int c = 0;

	struct R_pessoa //criando a estrutura com os dois campos
	{
		char nome[35]; // campo 1 para armazenar o nome
		int RU; // campo 2 para armazenar o RU
	}; 
	struct R_pessoa pessoa; 

	printf_s("\nExercicio 3\n");

	printf_s("\nDigite o seu nome:");//guardando no campo nome da struct
	gets_s(pessoa.nome);

	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado

	printf_s("\nDigite o seu RU:");
	scanf_s("%d", &pessoa.RU); //guardando no campo RU da Struct

	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado

	printf_s("\n\n");

	printf_s("\nEm seguida vou mostrar os dados armazenados usando Struct!\n");

	printf_s("\nNome: %s ", pessoa.nome); //mostrando dados usando struct
	printf_s("\nRU: %d ", pessoa.RU);//mostrando dados usando struct

	printf_s("\n\n");

	system("pause");
	return 0;
}