// Receber do usuario o nome completo
// Exibir cada palavra em uma linha

#include <stdio.h>

int main(){
      char nome[100];
      char sobrenome[100];
      char ultimo_nome[100];
      
      printf("Digite seu nome completo:\n");
      scanf("%s %s %s", nome, sobrenome, ultimo_nome);

      printf("%s\n", nome);
      printf("%s\n", sobrenome);
      printf("%s\n", ultimo_nome);
      
      return 0;
}
