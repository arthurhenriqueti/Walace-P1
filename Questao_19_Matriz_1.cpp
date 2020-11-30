// Gerar uma matrix 3x4
// Solicitar os valores ao usuario
// Exibir na tela a matriz montada

#include <stdio.h>

int	main() {
	
	int	matriz[3][4];
	int	lin, col;
	
	printf("Digite os numeros:\n");
	
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 4; col++) {
			scanf("%d", &matriz[lin][col]);
		}
	}	
	
	for (lin = 0; lin < 3; lin++) {
		for (col = 0; col < 4; col++) {
			printf("%d - ", matriz[lin][col]);
		}
		printf("\n");
	}	
}
