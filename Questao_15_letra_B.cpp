// Solicitar ao usuario o tamanho do quadrado
// Ler e criar o quadrado
// Exibir na tela o quadrado

#include<stdio.h>

int main(){
	int i,j,x,y;
	char caracter = 'X';

	printf("Digite o numero de linhas do quadrado:\n");
	scanf("%i", &x);
	printf("Digite o numero de colunas do quadrado:\n");
	scanf("%i", &y);
	
	for(i=1;i<=x;i++){
		for(j=1;j<=y;j++){
			printf("%c  ", caracter);
		}
			printf("\n");
		}
}
