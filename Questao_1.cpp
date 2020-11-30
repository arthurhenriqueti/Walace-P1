// Solicitar um número
// Ler um número
// Exibir a frase "o número digitado foi:"
// Exibir após a frase o número digitado pelo usuário

#include <stdio.h>

int main(){
	int numero;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	printf("O numero digitado foi: %d", numero);
}
