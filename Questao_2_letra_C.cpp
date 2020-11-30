// Solicitar um numero
// Ler o numero
// Exibir na tela como hexadecimal

#include <stdio.h>

int main(){
	char numero;
	
	printf("Digite um numero:\n");
	scanf("%c", &numero);
	
	printf("O numero digitado foi: %X", numero);
}
