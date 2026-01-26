#include <stdio.h>
#include <stdlib.h>
void leggiVet(int vet[], int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("inserisci il %d elemento: ", i+1);
		scanf("%d", &vet[i]);
	}
}

void stampaVet(int vet[], int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("vet[%d] = %d\n", i, vet[i]);
	}
}

int cercaMax(int vet[], int dim){
	int i;
	double max;
	max=vet[0];
	for(i=1;i<dim;i++){
		if(max<vet[i]){
			max=vet[i];
		}
	} return max;
}
int cercaMin(int vet[], int dim){
	int i;
	double mini;
	mini=vet[0];
	for(i=1;i<dim;i++){
		if(mini>vet[i]){
			mini=vet[i];
		}
	} return mini;
}
// media, numeri pari e dispari
void cercaPari(int vet[], int dim){
    int i;
    for(i=0; i<dim; i++){
        if (vet[i] % 2 == 0) {
            printf("%d \n", vet[i]);
        }
    }
}
void cercaDisPari(int vet[], int dim){
    int i;
    for(i=0; i<dim; i++){
        if (vet[i] % 2 != 0) {
            printf("%d \n", vet[i]);
        }
    }
}
float mediaVet(int vet[], int dim){
    int i, somma = 0;
    for(i=0; i<dim; i++){
        somma += vet[i];
    }
    return (float)somma / dim;
}


int main() {
    int nMenu;
    int n; //la dimenzione
    printf("Insersci il numero dei elementi del vettore: ");
    scanf("%d", &n);
    int vet[n]; // ho definito il vettore di n numeri
    leggiVet(vet,n); //carica vettore
    getchar();
    system("clear");

    do {
        printf("\t\n**************************************************\n");
        printf("\t\n******************** Vettori *********************\n");
        printf("\t\n**************************************************\n");
        printf("\t\n1. Min e Max\n");
        printf("\t\n2. Media\n");
        printf("\t\n3. Pari E Dispari\n");
        printf("\t\n4. Controlla Vettori Caricati\n");
        printf("\t\nInserisci 5 per uscire dal programma\n");
        printf("\t\nScegli il Tipo di operazione che vuoi fare: ");
        scanf("%d", &nMenu);

        switch (nMenu) {
            case 1:
           	    printf("Massimo e: %d\n Minimo e: %d ",cercaMax(vet,n), cercaMin(vet,n) );
                break;

            case 2:
            printf("Media dei Vettori e: %.2f\n",mediaVet(vet,n) );
            break;

            case 3:{
               	printf("Numeri Pari: "); cercaPari(vet, n);
                printf("Numeri Dispari: "); cercaDisPari(vet, n);
            }
            break;
            case 4:
             stampaVet(vet, n);
             break;

            case 5:
                printf("Uscita dal programma...\n");
                break;

            default:
                printf("Operazione non valida.\n");
                break;
        }

        if (nMenu != 5) {
            printf("\t\nPremi INVIO per continuare...\n");
            getchar(); // Mangia l'invio dello scanf
            getchar(); // Aspetta la pressione di un tasto
            system("clear"); // Comando Linux per pulire lo schermo
        }

    } while (nMenu != 5);

    return 0;
}
/* int main(){
	int n; //la dimenzione
	printf("Insersci il numero dei elementi del vettore: ");
	scanf("%d", &n);
	int vet[n]; // ho definito il vettore di n numeri
	leggiVet(vet,n); //carica vettore
	printf("Massimo del Vettore e: %lg\n",cercaMax(vet,n) );
	printf("Minimo del Vettore e: %lg\n",cercaMin(vet,n) );
	printf("Media dei Vettori e: %.2f\n",mediaVet(vet,n) );
	printf("Numeri Pari: ");
    cercaPari(vet, n);
    printf("Numeri Dispari: ");
    cercaDisPari(vet, n);

}
*/
