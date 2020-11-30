// Receber dois numeros
// O primeiro representa a base
// O segundo representa o expoente
// Calcular o valor da base elevado ao expoente
// Exibir o resultado na tela
// Fazer um laço de repetição

#include <stdio.h>

int main(){
	int base;
	int expoente;
	int potencia;
	int i;
	
	printf("Digite o valor da base:\n");
	scanf("%d", &base);
	printf("Digite o expoente:\n");
	scanf("%d", &expoente);
	
	potencia = 1;
	i = 0;
	
	while (i != expoente){
		potencia = potencia * base;
		i++;
	}
	
	printf("O valor de %d elevado a %d: %d\n", base, expoente, potencia);
	return 0;
}
