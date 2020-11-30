// Gerar uma matrix 5x5
// Reproduzir na tela um quadrado formado por X, 0 ou O
// Exibir na tela a matriz montada

#include <stdio.h>

int	main() {
	
	int	matriz[5][5];
	int	lin, col;
	char caracter;
	caracter = 'X';
		
	for (lin = 0; lin < 5; lin++) {
		for (col = 0; col < 5; col++) {
			printf("%c  ", caracter);
		}
		printf("\n");
	}	
}
