// Solicitar a temperatura em Fahrenheit
// Ler a temperatura
// Converter para Celsius C = (F-32)*(5.0/9)
// Mostrar na tela a temperatura em Celsius

#include <stdio.h>

int main(){
	float f;
	float c;
	
	printf("Digite a temperatura em Fahrenheit:\n");
	scanf("%f", &f);
	
	c = (f-32)*(5.0/9);
	
	printf("A temperatura em celsius: %.2f", c);
}
