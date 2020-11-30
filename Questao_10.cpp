// Solicitar o ano de nascimento
// Ler o ano e calcular sua idade
// Classificar em uma das categorias
// Infantil A - 5 a 7 anos
// Infantil B - 8 a 10 anos
// Juvenil A - 11 a 13 anos
// Juvenil B - 14 a 17 anos
// Sênior - Maiores de 17
// Utilizar como ano atual = 2011
// Exibir na tela Nadador de idade "idade" é da categoria "categoria"

#include <stdio.h>

int main(){
	int ano_atual = 2011;
	int idade;
	int ano_nascimento;
	
	printf("Digite o seu ano de nascimento:\n");
	scanf("%d", &ano_nascimento);
	
	idade = ano_atual - ano_nascimento;
	
	if ((idade >= 5) && (idade <= 7)){
		printf("Nadador de idade %d e da categoria Infantil A", idade);
	}
	else if ((idade >= 8) && (idade <= 10)){
		printf("Nadador de idade %d e da categoria Infantil B", idade);
	}
	else if ((idade >= 11) && (idade <= 13)){
		printf("Nadador de idade %d e da categoria Juvenil A", idade);
	}
	else if ((idade >= 14) && (idade <= 17)){
		printf("Nadador de idade %d e da categoria Juvenil B", idade);
	}
	else if (idade > 17){
		printf("Nadador de idade %d e da categoria Senior", idade);
	}
	else {
		printf("Nadador nao pode nadar, muito novo!");
	}
}
