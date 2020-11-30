// Solicitar dois numeros
// Perguntar qual operação ele deseja utilizar
// Soma +
// Subtração -
// Multiplicação *
// Divisão /
// Exibir o resultado na tela
// Utilizar if/else

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
	
	if (caracter == '+'){
		resultado = numero1 + numero2;
		printf("O resultado: %.2f", resultado);
	}
	else if (caracter == '-'){
		resultado = numero1 - numero2;
		printf("O resultado: %.2f", resultado);
	}
	else if (caracter == '*'){
		resultado = numero1 * numero2;
		printf("O resultado: %.2f", resultado);
	}
	else if (caracter == '/'){
		resultado = numero1 / numero2;
		printf("O resultado: %.2f", resultado);
	}
	else {
		printf("Incorreto!");
	}
}
