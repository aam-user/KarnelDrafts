#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int matricola[MAX], voto[MAX];
int totale = 0;
void carica_studenti(){
  int i, nuovi;
  printf("Qanti studenti vuoi caricare: ");
  scanf("%d", &nuovi);
    if (nuovi <= 0) {
        printf("Numero non valido\n");
        return;
    }

    if (totale + nuovi > MAX) {
        printf("Superi il limite massimo\n");
        return;
    }
  for(i = totale; i < totale + nuovi; i++){
    printf("Inserisci matricola dell studente: ");
    scanf("%d", &matricola[i]);
    printf("Inserisci Voto: \n");
    scanf("%d", &voto[i]);
}
  totale = totale + nuovi;
}

void stampa_dati (){
    int i;
    if (totale == 0) {
    printf("Nessuno studente caricato\n");
    return;
}
    for(i=0;i<totale;i++){
    printf("Matricola: %d", matricola[i]);
    printf(" Voto: %d\n", voto[i]);
    }
  }



int main(){
  int scelta;
  do{
        printf("\n====================\n");
        printf("        MENU        \n");
        printf("====================\n");
        printf("1. Carica studenti\n");
        printf("2. Stampa dati\n");
        printf("3. Operazione 3\n");
        printf("0. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch(scelta) {

            case 1: carica_studenti(); break;

            case 2: stampa_dati(); break;

            case 3:
                /* CODICE OPERAZIONE 3 */
                printf("Operazione 3 eseguita\n");
                break;

            case 0:
                printf("Uscita...\n");
                break;

            default:
                printf("Scelta non valida\n");
        }
    if (scelta != 0) {
            printf("\t\nPremi INVIO per continuare...\n");
            getchar(); // Mangia l'invio dello scanf
            getchar(); // Aspetta la pressione di un tasto
            system("clear"); // Comando Linux per pulire lo schermo
    }
    } while(scelta != 0);

    return 0;
}
