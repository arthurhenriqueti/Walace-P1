#include <stdio.h>

int main(){
	float matriz[10][3];
	int i, j;
	
	for(i=0; i<10; i++){
		for(j=0; j<2; j++){
			printf("Digite a nota [%d] o aluno [%d] ", j+1, i+1);
			scanf("%f", &matriz[i][j]);
			if(j+1 == 2){
				matriz[i][2] = (matriz[i][0] + matriz[i][1]) / 2;
			}
		}
	}
	
	for(i=0; i<10; i++){
		printf("\n Aluno [%d]", i + 1);
		for(j=0; j<3; j++){
			printf("%.2f", matriz[i][j]);
			if(j < 3) printf(" - ");
		}
	}
	return 0;
}
