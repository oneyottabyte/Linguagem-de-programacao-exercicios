#include<stdio.h>
#include<stdlib.h>

int iterativa(int num1, int num2);//prototipo da função iterariva
int recursiva(int n1, int n2);//prototipo da função recursiva

int main() {
	int num_inicio, num_final, c; //varialveis
	
	printf_s("\nExercicio 5\n");//Tá acabando

	printf_s("\nDigite o primeiro numero (INICIO):");//pegando o primeiro numero
	scanf_s("%d", &num_inicio);//guardando o numero
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado

	printf_s("\nDigite o segundo numero (FINAL):"); //pediondo o numero ao usuario
	scanf_s("%d", &num_final); //guardando numero na variavel
	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado
	
	printf_s("\n\n");//quebra de linha

	printf_s("\nAbaixo vou mostrar a contagem usando Funcao Iterativa!\n\n");//apresentando funcao iterativa
	printf_s("\nContando de forma Iterativa:");
	iterativa(num_inicio, num_final);//chamamento da função
	printf_s("\nO total de numeros no intervalo e: %d", num_final-num_inicio);//exibindo resultado

	printf_s("\n\n");//quebra de linha
	
	printf_s("\nAbaixo vou mostrar a contagem usando Funcao Recursiva!\n\n");//apresentando funcao recursiva
	printf_s("\nContando de forma Recursiva:");
	recursiva(num_inicio, num_final);//chamamento da função
	printf_s("\nO total de numeros no intervalo e: %d", num_final-num_inicio);//exibindo resultado	

	printf_s("\n\n");//quebra de linha
	system("pause");
	return 0;
}

int iterativa(int num1, int num2) {//inicio da função iterariva.
	int i; //variaveis locais
	for (i = num1; i <= num2; i++) {//usando o for para contar
		printf_s(" %d", i);
	}
	return 0;
}	
	
int recursiva(int n1, int n2) {//inicio da função recursiva
	if (n1 <= n2){
		printf_s(" %d", n1);
		recursiva(++n1, n2);
	}
	return 0;
}