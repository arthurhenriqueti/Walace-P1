// Solicitar um número
// Ler o número
// Verificar se é impar ou par
// Exibir na tela o resultado

#include <stdio.h>

int main(){
	int numero;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	if (numero % 2 == 0){
		printf("O numero %d e par!", numero);
	}
	else {
		printf("O numero %d e impar!", numero);
	}
}
