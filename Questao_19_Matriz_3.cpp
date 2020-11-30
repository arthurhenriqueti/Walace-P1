// Gerar uma matrix 3x4
// Solicitar os valores ao usuario
// Exibir na tela a matriz montada
// Exibir o maior e o menor numero da matriz

#include <stdio.h>

int	main() {
	
	int	matriz[3][4];
	int	lin, col;
	int maior, menor = 100;
	
	printf("Digite os numeros:\n");
	
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 4; col++) {
			scanf("%d", &matriz[lin][col]);
			if(matriz[lin][col]<menor){
				menor = matriz[lin][col];
			}
			if(matriz[lin][col]>maior){
				maior = matriz[lin][col];
			}
		}
	}	
	
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 4; col++) {
			printf("%d - ", matriz[lin][col]);
		}
		printf("\n");
	}
	printf("O menor numero e: [%d]\n", menor);
	printf("O maior numero e: [%d]", maior);	
}
