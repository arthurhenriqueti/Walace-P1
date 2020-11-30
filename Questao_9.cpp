// Solicitar os dados: ano nascimento e o ano de ingresso a empresa
// Ler os dados
// Para ser apto a aposentadoria precisa ter:
// Mínimo 65 anos de idade
// Mínimo 30 anos na empresa
// Mínimo 60 anos de idade e 25 anos na empresa
// Exibir na tela se está apto ou não
// Utilizar como ano atual o ano de 2011

#include <stdio.h>

int main(){
	int ano_atual = 2011;
	int ano_nascimento;
	int ano_ingresso;
	
	printf("Digite o seu ano de nascimento:\n");
	scanf("%d", &ano_nascimento);
	printf("Digite o ano de ingresso na companhia:\n");
	scanf("%d", &ano_ingresso);
	
	ano_nascimento = ano_atual - ano_nascimento;
	ano_ingresso = ano_atual - ano_ingresso;
	
	if (ano_nascimento >= 65){
		printf("Requerer aposentadoria");
	}
	else if (ano_ingresso >= 30){
		printf("Requerer aposentadoria");
	}
	else if ((ano_nascimento >= 60) && (ano_ingresso >= 25)){
		printf("Requerer aposentadoria");
	}
	else {
		printf("Nao requerer");
	}
}
