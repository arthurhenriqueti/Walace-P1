// Gerar uma matrix 3x4
// Solicitar os valores ao usuario
// Exibir na tela a matriz montada

#include <stdio.h>

int	main() {
	
	int	matriz[3][4];
	int	lin, col;
	int i;
	int contador = 0;
	
	printf("Digite os numeros:\n");
	
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 4; col++) {
			scanf("%d", &matriz[lin][col]);
			if(matriz[lin][col] == 5){
				contador++;
			}
		}
	}	
	
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 4; col++) {
			printf("%d - ", matriz[lin][col]);
		}
		printf("\n");
	}	
	printf("Tem %d numero 5\n", contador);
	return 0;
}
