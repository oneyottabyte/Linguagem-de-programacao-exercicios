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
	struct R_pessoa pessoa, *p_pessoa; // criando ponteiro para struct pessoa
	p_pessoa = &pessoa; //referenciando ponteiro para struct pessoa

	printf_s("\nExercicio 4\n");

	printf_s("\nDigite o seu nome:");//guardando no campo nome da struct usando ponteiro
	fgets(p_pessoa->nome,35,stdin);

	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado

	printf_s("\nDigite o seu RU:");
	scanf_s("%d", &p_pessoa->RU); //guardando no campo RU da Struct usando ponteiro
	
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado

	printf_s("\n\n");

	printf_s("\nEm seguida vou mostrar os dados armazenados usando ponteiros de Struct!\n");

	printf_s("\nNome: %s ", p_pessoa->nome); //mostrando dados usando ponteiro
	printf_s("\nRU: %d ", p_pessoa->RU);//mostrando dados usando ponteiro

	printf_s("\n\n");

	system("pause");
	return 0;
}