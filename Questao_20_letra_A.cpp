// Solicitar um nome ao usuario
// Ler o nome
// Imprimir em texto normal "%s"

#include <stdio.h>

int main(){
	char nome[100];
	
	printf("Digite o seu nome:\n");
	gets(nome); // Armazenando uma string
	
	printf("Seu nome: %s", nome);
}
