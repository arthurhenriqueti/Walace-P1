// Solicitar três números
// Ler os números
// Dizer qual é o menor dos três

#include <stdio.h>

int main(){
	int numero1;
	int numero2;
	int numero3;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero1);
	printf("Digite mais um numero:\n");
	scanf("%d", &numero2);
	printf("Digite mais um numero:\n");
	scanf("%d", &numero3);
	
	if ((numero1<numero2) && (numero1<numero3)){
		printf("O menor numero digitado: %d", numero1);		
	}
	if ((numero2<numero1) && (numero2<numero3)){
		printf("O menor numero digitado: %d", numero2);
	}
	if ((numero3<numero1) && (numero3<numero2)){
		printf("O menor numero digitado: %d", numero3);
	}
}
