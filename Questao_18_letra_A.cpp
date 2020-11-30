// Solicitar 10 numeros ao usuario: Armazenar em um vetor
// Ler os numeros
// Exibir quantas vezes o numero 3 aparece

#include <stdio.h>

int main(){
	int numeros[10];
	int i;
	int contador = 0;
	
	printf("Digite 10 numeros:\n");
	
	for (i=0; i<10; i++){
		scanf("%d", &numeros[i]);
		if(numeros[i] == 3){
			contador++;
		}
	}
	printf("O numero 3 foi digitado: %d", contador);
}

