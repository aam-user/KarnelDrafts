#include <stdio.h>


void caricavet(int dimmenzione, int  vett[]){
  for (int i=0;i<dimmenzione;i++) {
  scanf("%d", &vett[i]);
  }
}

int trovavet(int dimm, int vettore[], int trovato){
  for (int i = 0;i<dimm;i++) {
    if (trovato==vettore[i])
    return  printf("Il numero e stato trovato in indice %d", i);
   }
printf("Non trovato");
  return -1;
}


int main(){
  int dim, find;
  printf("Scrivi quanti numeri vuoi caricare\n");
  scanf("%d", &dim);
  int vet[dim];
  caricavet(dim, vet);
  printf("Scrivi numero Da trovare");
  scanf("%d", &find);
  trovavet(dim, vet, find);
}
