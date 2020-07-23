#include<stdio.h>
#include<stdlib.h>

int main() {
	int RU, RU_2, c; //variaveis de inteiro

	int *p_RU, *p_RU_2; //ponteiro do tipo inteiro

	p_RU = &RU; //p_RU recebe endereco de RU
	p_RU_2 = &RU_2; //p_RU_2 recebe endereco de RU_2

	printf_s("\nExercicio 2\n");

	printf_s("\nDigite o seu RU:");//guardando na variavel o RU do aluno
	scanf_s("%d", &RU);

	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado

	printf_s("\nDigite o RU 1234567:");
	scanf_s("%d", &RU_2); //guardando na variavel o RU 1234567

	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado
	
	printf_s("\n\n");
	printf_s("\nEm seguida vou mostrar os dados armazenados usando Ponteiros!\n");

	printf_s("\nMeu RU: %d ", *p_RU); //mostrando dados usando ponteiro
	printf_s("\nRU '1234567': %d ", *p_RU_2);//mostrando dados usando ponteiro

	printf_s("\n\nAbaixo voce pode conferir o maior RU.");
	if (*p_RU > *p_RU_2){ //compararando os dois RU usando ponteiros e imprimindo na tela qual é o maior
		printf_s("\nO RU maior é %d.", *p_RU);
	}else 
		printf_s("\nO RU maior é %d.", *p_RU_2);	
	
	system("pause");
	return 0;
}