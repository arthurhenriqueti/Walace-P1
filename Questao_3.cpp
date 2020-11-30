// Solicitar ao aluno as duas notas
// Ler as notas
// Somar as notas e dividir
// Mostrar na tela média aritmética

#include <stdio.h>

int main(){
	float nota1;
	float nota2;
	float media;
	
	printf("Digite sua primeira nota:\n");
	scanf("%f", &nota1);
	printf("Digite sua segunda nota:\n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("Sua media: %.2f", media);
}
