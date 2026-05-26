#include <stdio.h>
#include <stdlib.h>

void caricamento(int lung, int lar, int mat[lung][lar]) {
    int i, j;
    for (i = 0; i < lung; i++)
        for (j = 0; j < lar; j++)
            scanf("%d", &mat[i][j]);
}

int somma(int lung, int lar, int mat[lung][lar]) {
    int i, j, sommatot = 0;
    for (i = 0; i < lung; i++)
        for (j = 0; j < lar; j++)
            sommatot += mat[i][j];
    return sommatot;
}

void stampa(int lung, int lar, int mat[lung][lar]) {
    int i, j;
    for (i = 0; i < lung; i++) {
        printf("\n");
        for (j = 0; j < lar; j++)
            printf("%d|\t", mat[i][j]);
    }
    printf("\nSomma Totale e %d\n", somma(lung, lar, mat));
}

int stampadiag(int lung, int lar, int mat[lung][lar]) {
    int i, sommatot = 0;
    printf("\n\tDiagonale\n");
    for (i = 0; i < lung; i++) {
        printf("%d\n", mat[i][i]);
        sommatot += mat[i][i];
    }
    return sommatot;
}

int stampadiagsecondaria(int lung, int lar, int mat[lung][lar]) {
    int i, sommatot = 0;
    printf("\n\tDiagonale Secondaria\n");
    for (i = 0; i < lung; i++) {
        printf("%d\n", mat[i][lar - 1 - i]);
        sommatot += mat[i][lar - 1 - i];
    }
    return sommatot;
}

int mostraMenu(void) {
    int scelta;
    do {
        printf("\n--- MENU ---\n");
        printf("1. Caricamento\n");
        printf("2. Stampa Tabella e Somma Totale\n");
        printf("3. Stampa Somma Diagonale Principale\n");
        printf("4. Stampa Somma Diagonale Secondaria\n");
        printf("5. Esci\n"); // era 6, rinumerato
        printf("Scelta: ");
        scanf("%d", &scelta);
    } while (scelta < 1 || scelta > 5);
    return scelta;
}

int main() {
    int scelta, lung, lar;
    printf("Inserisci righe: ");
    scanf("%d", &lung);
    printf("Inserisci colonne: ");
    scanf("%d", &lar);
    int mat[lung][lar];

    do {
        scelta = mostraMenu();
        switch (scelta) {
            case 1: caricamento(lung, lar, mat); break;
            case 2: stampa(lung, lar, mat); break;
            case 3: printf("Somma diag principale: %d\n", stampadiag(lung, lar, mat)); break;
            case 4: printf("Somma diag secondaria: %d\n", stampadiagsecondaria(lung, lar, mat)); break;
            case 5: printf("Arrivederci!\n"); break;
        }
    } while (scelta != 5);

    return 0;
}