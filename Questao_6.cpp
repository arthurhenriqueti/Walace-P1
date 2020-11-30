// Solicitar um número inteiro
// Ler o número
// Dizer se o número está contido no intervalo entre 10 e 15
// Exibir na tela

#include <stdio.h>

int main(){
	int numero;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	if ((numero >= 10) && (numero <= 15)){
		printf("O numero pertence ao intervalo!");
	}
	else {
		printf("O numero nao pertence ao intervalo!");
	}
}
