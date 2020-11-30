// Solicitar dois numeros
// Perguntar qual operação ele deseja utilizar
// Soma +
// Subtração -
// Multiplicação *
// Divisão /
// Exibir o resultado na tela
// Utilizar switch/case

#include <stdio.h>

int main(){
	float numero1;
	float numero2;
	float resultado;
	char caracter;
	
	printf("Digite o primeiro numero:\n");
	scanf("%f", &numero1);
	printf("Digite o segundo numero:\n");
	scanf("%f", &numero2);
	printf("Deseja realizar qual operacao? (+, -, *, /)\n");
	scanf("%s", &caracter);
	getchar();
	
	switch (caracter){
		
		case '+':
		resultado = numero1 + numero2;
		printf("O resultado: %.2f", resultado);
		break;
		
		case '-':
		resultado = numero1 - numero2;
		printf("O resultado: %.2f", resultado);
		break;
		
		case '*':
		resultado = numero1 * numero2;
		printf("O resultado: %.2f", resultado);
		break;
	
		case '/':
		resultado = numero1 / numero2;
		printf("O resultado: %.2f", resultado);
		break;
	
		default:
		printf("Incorreto!");
	}
}
