#include<stdio.h>
#include<stdlib.h>

int main() {
	int n1; //inteiro
	float n2; //real
	char letra, c; //char

	int *p_n1; //ponteiro do tipo inteiro
	float *p_n2; //ponteiro do tipo float (real)
	char *p_letra; //ponteiro do tipo char

	p_n1 = &n1; //p_n1 recebe endereco de n1
	p_n2 = &n2; //p_n2 recebe endereco de n2
	p_letra = &letra; //p_letra recebe endereco de letra

	printf_s("\nExercicio 1\n");

	printf_s("\nDigite a primira letra do seu nome:");
	scanf_s("%c", &letra);

	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado

	printf_s("\nDigite os dois ultimos digitos do seu RU:");
	scanf_s("%d", &n1); //guardando na variavel dois numeros do RU

	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado

	printf_s("\nDigite os quatro ultimos digitos do seu RU,\sendo os ultimos dois separados por ponto:");
	scanf_s("%f", &n2);//guardando na variavel quatro numeros do RU

	while ((c = getchar()) != '\n' && c != EOF) {} //limpa buffer teclado

	//mostrando os dados gravados diretamente nas variaveis
	printf_s("\n\nDados antes da modificacao indireta");
	printf_s("\n\nPrimeira Letra: %c", letra);
	printf_s("\nDois Ultimos Digitos do RU: %d", n1);
	printf_s("\nQuatro Ultimos Digitos do RU: %.2f", n2);

	//modificação indiretamente as variaveis usando ponteiros
	*p_letra = 'D';
	*p_n1 = 46;
	*p_n2 = 53.46;

	//mostrando os dados gravados indiretamente nas variaveis usando ponteiros
	printf_s("\n\nDados depois da modificacao indireta");
	printf_s("\n\nPrimeira Letra: %c", *p_letra);
	printf_s("\nDois Ultimos Digitos do RU: %d", *p_n1);
	printf_s("\nQuatro Ultimos Digitos do RU: %.2f", *p_n2);
	printf_s("\n\n");

	system("pause");
	return 0;
}