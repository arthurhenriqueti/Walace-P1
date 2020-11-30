// Criar um programa de criptografia
// Inserir letras e imprimir o resultado
// ZENIT - POLAR

#include <stdio.h>
#include <ctype.h>

int main(){
	char texto[30];
	
	printf("Digite as letras:\n");
	scanf("%[^\n]", texto);
	
	for(int i=0; texto[i] != '\0'; i++){
		char letra = (texto[i]);
		
		if(letra == 'Z'){
		printf("P");
		}
		else if(letra == 'E'){
		printf("O");
		}
		else if(letra == 'N'){
		printf("L");
		}
		else if(letra == 'I'){
		printf("A");
		}
		else if(letra == 'T'){
		printf("R");
		}
		else if(letra == 'z'){
		printf("p");
		}
		else if(letra == 'e'){
		printf("o");
		}
		else if(letra == 'n'){
		printf("l");
		}
		else if(letra == 'i'){
		printf("a");
		}
		else if(letra == 't'){
		printf("r");
		}
		else if(letra == 'P'){
		printf("Z");
		}
		else if(letra == 'O'){
		printf("E");
		}
		else if(letra == 'L'){
		printf("N");
		}
		else if(letra == 'A'){
		printf("I");
		}
		else if(letra == 'R'){
		printf("T");
		}
		else if(letra == 'p'){
		printf("z");
		}
		else if(letra == 'o'){
		printf("e");
		}
		else if(letra == 'l'){
		printf("n");
		}
		else if(letra == 'a'){
		printf("i");
		}
		else if(letra == 'r'){
		printf("t");
		}
		
		else printf("%c", texto[i]);
	}
	return 0;
}
