// Receber um numero inteiro
// Ler e dizer se o numero é primo ou não
// Exibir na tela o resultado

#include <stdio.h>

int main(){
	int numero;
	int i;
	int resultado = 0;
	
	printf("Digite um numero:\n");
	scanf("%d", &numero);
	
	for (i=2; i<=numero / 2; i++){
		if(numero % i == 0){
			resultado++;
			break;
		}
	}
	if (resultado == 0){
		printf("%d e numero primo!", numero);
	}
	else {
		printf("%d nao e numero primo!", numero);
	}
	return 0;
}
