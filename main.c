#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 4

main() {
  int l, c, m[TAM][TAM];
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      printf("Digite o número em %i:%i: ", l, c);
      scanf("%i", &m[l][c]);
    }
  }
  getchar();
  printf("\nMatriz: \n");
  for(l = 0; l < TAM; l++){
    for(c = 0; c < TAM; c++){
      if(c < TAM - 1){
        printf("%i - ", m[l][c]);
      }
      else{
        printf("%i\n", m[l][c]);
      }
    }
  }
  getchar();
}