// Solicitar dois valores
// Ler os valores e exibir a soma dos valores
// Perguntar se o usuario quer continuar ou nao
// Caso não queira exibir Fim dos calculos

#include <stdio.h>

int main(){
	float numero1;
	float numero2;
	char caracter;
	float soma;
	
	do{
		printf("Digite o primeiro numero:\n");
		scanf("%f", &numero1);
		printf("Digite o segundo numero:\n");
		scanf("%f", &numero2);
		
		soma = numero1 + numero2;
		
		printf("A soma deu: %.2f\n", soma);
		
		printf("Novo calculo (S/N)?\n");
		scanf("%s", &caracter);
	}	
	while (caracter == 'S');
	
	if (caracter == 'N'){
		printf("Fim dos calculos");
	}
}


