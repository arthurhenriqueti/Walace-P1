// Solicitar a altura e a base de um triângulo
// Ler a altura e a base
// Calcular sua área A = (base*altura)/2
// Mostrar na tela a area do triângulo

#include <stdio.h>

int main(){
	float base;
	float altura;
	float area;
	
	printf("Digite a base do triangulo:\n");
	scanf("%f", &base);
	printf("Digite a altura do triangulo:\n");
	scanf("%f", &altura);
	
	area = (base*altura) / 2;
	
	printf("Sua area: %.2f", area);
}
