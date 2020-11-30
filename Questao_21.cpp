// Receber do usuario o texto
// Converter o texto para maiusculo e minusculo
// Utilizar as funções "toupper, tolower"
// Imprimir na tela o resultado
	
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
    
int main(void){
    char texto;
      
    printf("Digite uma letra do alfabeto: ");
    scanf("%c",&texto);
      
    if (texto){
    	printf("\nVoce digitou a letra: %c \n\n", texto);
        
        texto = toupper(texto);
        printf("Maiuscula: %c \n\n",texto);
        
        texto = tolower(texto);
        printf("Minuscula: %c \n\n", texto);
    }
	return 0;
}
