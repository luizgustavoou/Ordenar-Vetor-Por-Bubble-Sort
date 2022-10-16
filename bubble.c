#include <stdio.h>

void imprime(int qtde, int *vet) {
  for(int j=0; j<qtde; j++) {
    if(j != qtde-1) printf("%d ", vet[j]);
    else  printf("%d\n", vet[j]);
  }
}

void entrada(int qtde, int *vet) {
  for(int i=0; i<qtde; i++) {
    scanf(" %d", &vet[i]);
  }
}

void bubble_sort(int qtde, int *vet) {
  int troca = 1;
  
  while(troca==1) {
    troca = 0;
    for(int i=1; i<=qtde-1; i++) {
      if(vet[i-1] > vet[i]) {
        troca = 1;
        int aux = vet[i-1];
        vet[i-1] = vet[i];
        vet[i] = aux;
      }
    }
    if(troca == 1) imprime(qtde, vet);
  }
}

int main()
{
  int qtde;
  
  scanf("%d", &qtde);

  int vet[qtde];
  
  entrada(qtde, vet);

  imprime(qtde, vet);
  
  bubble_sort(qtde, vet);

}
