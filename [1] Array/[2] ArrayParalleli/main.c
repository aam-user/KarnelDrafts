#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int matricola[MAX], voto[MAX], num;

void carica_studenti() {
    int i;
    printf("Quanti studenti vuoi caricare: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        printf("Inserisci matricola dello studente: ");
        scanf("%d", &matricola[i]);
        printf("Inserisci Voto: ");
        scanf("%d", &voto[i]);
    }
}

void stampa_dati() {
    int i;
    for (i = 0; i < num; i++) {
        printf("Matricola: %d", matricola[i]);
        printf(" Voto: %d\n", voto[i]);
    }
}

void ricerca() {
    int trov, i, trovato = 0;
    printf("Inserisci matricola da ricercare: ");
    scanf("%d", &trov);
    for (i = 0; i < num; i++) {
        if (trov == matricola[i]) {
            printf("Alunno trovato all'indice %d\n", i);
            printf("Voto dell'alunno: %d\n", voto[i]);
            trovato = 1;
            break;
        }
    }
    if (!trovato)
        printf("Non trovato\n");
}

void minimo() {
    int i;
    int min_voto = voto[0];
    int min_matricola = matricola[0];
    for (i = 1; i < num; i++) {
        if (voto[i] < min_voto) {
            min_voto = voto[i];
            min_matricola = matricola[i];
        }
    }
    printf("Studente con voto minimo: %d\nVoto: %d\n", min_matricola, min_voto);
}

void massimo() {
    int i;
    int max_voto = voto[0];
    int max_matricola = matricola[0];
    for (i = 1; i < num; i++) {
        if (voto[i] > max_voto) {
            max_voto = voto[i];
            max_matricola = matricola[i];
        }
    }
    printf("Studente con voto massimo: %d\nVoto: %d\n", max_matricola, max_voto);
}

void ammessi() {
    int promossi = 0, i;
    for (i = 0; i < num; i++)
        if (voto[i] >= 6)
            promossi++;
    printf("Studenti promossi: %d\n", promossi);
}

void bocciati() {
    int count = 0, i;
    for (i = 0; i < num; i++)
        if (voto[i] < 6)
            count++;
    printf("Studenti bocciati: %d\n", count);
}

void media() {
    int i, somma = 0;
    for (i = 0; i < num; i++)
        somma += voto[i];
    printf("Media dei voti: %.2f\n", (float)somma / num);
}

int main() {
    int scelta;
    do {
        printf("\n\t+------------------------------------+\n");
        printf("\t|          GESTIONE STUDENTI         |\n");
        printf("\t|------------------------------------|\n");
        printf("\t|  [1]  Carica nuovi studenti        |\n");
        printf("\t|  [2]  Visualizza elenco completo   |\n");
        printf("\t|  [3]  Cerca studente (Matricola)   |\n");
        printf("\t|  [4]  Analisi: Voto Minimo         |\n");
        printf("\t|  [5]  Analisi: Voto Massimo        |\n");
        printf("\t|  [6]  Studenti Ammessi voto>=6     |\n");
        printf("\t|  [7]  Studenti Bocciati voto<6     |\n");
        printf("\t|  [8]  Media dei Voti               |\n");
        printf("\t|                                    |\n");
        printf("\t|  [0]  ESCI DALL'APPLICATIVO        |\n");
        printf("\t+------------------------------------+\n");
        printf("\t Scelta: ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1: carica_studenti(); break;
            case 2: stampa_dati();     break;
            case 3: ricerca();         break;
            case 4: minimo();          break;
            case 5: massimo();         break;
            case 6: ammessi();         break;
            case 7: bocciati();        break;
            case 8: media();           break;
            case 0: printf("Uscita...\n"); break;
            default: printf("Scelta non valida\n");
        }

        if (scelta != 0) {
            printf("\nPremi INVIO per continuare...\n");
            getchar();
            getchar();
            system("clear");
        }
    } while (scelta != 0);

    return 0;
}