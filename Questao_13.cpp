// Exibir todos os numeros entre 32 e 126
// Exibir linha por linha
// Exibir em cada linha os tres formatos
// Inteiro
// Hexadecimal
// Caracter
// Utilizar estrutura for
// Exibir na tela os numeros

#include <stdio.h>

int main(){
	int i;
	
	for (i=32; i<=126; i++){
		printf("Inteiro: %d Hexadecimal: %x Caracter: %c\n", i, i, i);
	}
}
