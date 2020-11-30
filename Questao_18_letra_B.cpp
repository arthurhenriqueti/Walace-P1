// Receber 10 numeros e armazenar em um vetor
// Ler os numeros
// Perguntar qual numero o usuario deseja pesquisar
// Exibir quantas vezes o numero aparece

#include <stdio.h>

int main(){
	int numero[10];
	int i;
	int cont = 0;
	int esc;
	
	printf("Digite 10 numeros:\n");
	
	while(i<10){
		printf("[%d] - Numero ", i + 1);
		scanf("%d", &numero[i]);
		i++;
	}
	printf("Qual numero deseja pesquisar?\n");
	scanf("%d", &esc);
	
	for(i=0; i<10; i++){
		if(numero[i] == esc)
		cont++;
	}
	
	printf("%d vezes o numero %d apareceu\n", cont, esc);
	
	return 0;
}
