#include <stdio.h>

//Escreva um programa que determine se um número inteiro é positivo, 
//negativo ou zero. Não utilizar if sequenciais. Utilizar a estrutura if-else.

int num() {
	int x;
	
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	if (x == 0) {
		printf("O numero é 0");
	} else if (x > 0) {
		printf("O numero e positivo");
	} else {
		printf("O numero e negativo");
	}
	
	
	return 0;
}

// Crie um programa que determine em qual faixa etária uma pessoa se encontra, com base em sua idade
// (por exemplo, criança, adolescente (12<=idade<18), adulto). Não utilizar if sequenciais. Utilizar a estrutura if-else.

int idade() {
	int x;
	
	printf("Digite a sua idade: ");
	scanf("%d", &x);
	
	if (x >= 12 && x <= 18) {
		printf("Voce e adolecente");
	} else if (x >= 0 && x < 12) {
		printf("Voce e crianca");
	} else if (x > 18) {
		printf("Voce e adulto");
	} else {
		printf("Idade invalida");
	}
	
	
	return 0;
}

//Escreva um programa que simule um menu com três opções e execute a ação correspondente com base na escolha do usuário.
// Utilizar a estrutura switch/case. Contendo: opcao 1, opcao 2 e opcao 3. Incluir um default informando “Opcao invalida” se diferente de 1, 2 e 3.

int escolha() {
	int x;
	
	printf("Escolha 1, 2, 3: ");
	scanf("%d", &x);
	
	switch(x) {
		case 1: printf("Opcao 1");  break;
		case 2: printf("Opcao 2"); break;
		case 3: printf("Opcao 3"); break;
		default: printf("Opcao invalida"); break;	
	}
	
	return 0;
}

// Escreva um programa que determine o maior entre três números inteiros.

int maior() {
	int x, y, z;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &x);
	printf("Digite o segundo numero: ");
	scanf("%d", &y);
	printf("Digite o terceiro numero: ");
	scanf("%d", &z);
	
	if (x > y && x > z) {
		printf("%d e maior", x);
	} else if (y > x && y > z) {
		printf("%d e maior", y);
	} else if (z > y && z > x) {
		printf("%d e maior", z);
	} else {
		printf("eles sao iguais");
	}
	
	return 0;
}


int main() {
	//num();
	//idade();
	//escolha();
	//maior();
	return 0;
}
