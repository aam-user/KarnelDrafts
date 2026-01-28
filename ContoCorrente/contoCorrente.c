#include <stdio.h>
#include <stdlib.h>


float prelievo(float saldo) {
    float n;
    printf("Saldo Disponibile: %.2f\n", saldo);
    printf("Quanto Vuoi Prelevare? ");
    scanf("%f", &n);
    if (n > saldo) {
        printf("Errore: saldo insufficiente.\n");
    } else {
        saldo -= n;
    }
    return (float)saldo;
}

float versamento(float saldo) {
    float n;
    printf("Saldo Disponibile: %.2f\n", saldo);
    printf("Quanto Vuoi Versare? ");
    scanf("%f", &n);
    saldo += n;
    return saldo;
}

void mostraSaldo(float saldo) {
    printf("\n--- Saldo Attuale: %.2f --- \n", saldo);
}
int main() {
    float saldo = 1200.0;
    char nMenu;

    do {
        printf("\t\n***************************\n");
        printf("\t\n*******Conto Corrente******\n");
        printf("\t\n***************************\n");
        printf("\t\nP. Prelievo\n");
        printf("\t\nV. Versamento\n");
        printf("\t\nD. Saldo Disponibile\n");
        printf("\t\nInserisci 'E' per uscire dal programma\n");
        printf("\t\nScegli il Tipo di operazione che vuoi fare: ");

        scanf(" %c", &nMenu);

        switch (nMenu) {
            case 'p': case 'P':
                saldo = prelievo(saldo);
                break;

            case 'v': case 'V':
                saldo = versamento(saldo);
                break;

            case 'd': case 'D':
                mostraSaldo(saldo);
                break;

            case 'e': case 'E':
                printf("Uscita dal programma...\n");
                break;

            default:
                printf("Operazione non valida.\n");
                break;
        }

        if (nMenu != 'e' && nMenu != 'E') {
            printf("\t\nPremi INVIO per continuare...\n");
            getchar(); // Mangia l'invio dello scanf
            getchar(); // Aspetta la pressione di un tasto
            system("clear"); // Comando Linux per pulire lo schermo
        }

    } while (nMenu != 'e' && nMenu != 'E');

    return 0;
}