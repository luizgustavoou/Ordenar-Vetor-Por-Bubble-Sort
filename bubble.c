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
