// Solicitar que o usuario digite um nome
// Imprimir caracter a caracter na ordem crescente e decrescente
// Exibir na tela o resultado

#include <stdio.h>

int main(void) {

  // declarando variaveis
  char nomeInput, name[100];
  int i = 0;
  int lenght;
  
  printf("Digite o seu nome:\n");

	do {
	    nomeInput = getchar(); // Pega um caracter "por vez" e armazena cada no nameInput
	    if (nomeInput != '\n'){
			name[i] = nomeInput; // Armazena os valores do nome digitado(cada caracter) na variavel i do vetor.
		    i++;
	    }
 
	} while (nomeInput!= '\n'); // Se o caracter de entrada n for enter volta para o do

	lenght = i;
	for ( i = 0; i < lenght ; i++) {
    	printf("%c\n", name[i]);
	}
	
	printf("\n");
	for(i = lenght-1; i >= 0; i--) {
		printf("%c\n", name[i]);
	}
	printf("\n");
	
	return 0;
}
