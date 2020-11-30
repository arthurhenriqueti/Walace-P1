// Receber 10 numeros
// Colocar em um vetor
// Exibir o maior e o menor numero digitado

#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int a; 
	int maior = 0;
	int menor = 0;
    float numeros[10];

    printf("Digite os numeros:\n");
    
    for (a=0;a<10;a++){
      printf("Numero %d : ", a+1);
      scanf("%f", &numeros[a]);
      
      if(a==0){maior=numeros[a];menor=numeros[a];}
      if(numeros[a]>maior){
        maior=numeros[a];
      }
      else{
        if(numeros[a]<menor){
            menor=numeros[a];
        }
      }
    }
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    return 0;
}
