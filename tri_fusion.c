#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include <stdio.h>

void fusion(int T[], int i, int m, int j) {
    int n1 = m - i + 1;
    int n2 = j - m;

    // Tableaux temporaires
    int Tmp1[n1];
    int Tmp2[n2];

    // Copie des données dans les tableaux temporaires Tmp1 et Tmp2
    for (int x = 0; x < n1; x++) {
        Tmp1[x] = T[i + x];
    }
    for (int y = 0; y < n2; y++) {
        Tmp2[y] = T[m + 1 + y];
    }

    // Fusion des tableaux temporaires dans T[i..j]
    int x = 0;  // Indice pour Tmp1
    int y = 0;  // Indice pour Tmp2
    int k = i;  // Indice pour le tableau principal

    while (x < n1 && y < n2) {
        if (Tmp1[x] <= Tmp2[y]) {
            T[k] = Tmp1[x];
            x++;
        } else {
            T[k] = Tmp2[y];
            y++;
        }
        k++;
    }

    // Copie des éléments restants de Tmp1 s'il y en a
    while (x < n1) {
        T[k] = Tmp1[x];
        x++;
        k++;
    }

    // Copie des éléments restants de Tmp2 s'il y en a
    while (y < n2) {
        T[k] = Tmp2[y];
        y++;
        k++;
    }
}




void tri_fusion(int T[], int i, int j) {
    if (i < j - 1) {
        int m = (i + j) / 2;
        tri_fusion(T, i, m);
        tri_fusion(T, m + 1, j);
        fusion(T, i, m, j);
    }
}

// Fonction d'affichage d'un tableau
void afficherTableau(int T[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
}

int main() {
    int n = 10;
    int Tab[n];
    int i;

    srand(time(NULL));

    for (i = 0; i < n; i++) {
        Tab[i] = rand() % 100;  // Génère des nombres entre 0 et 99
    }

    printf("Avant le tri : ");
    afficherTableau(Tab, n);
    printf("==========================================\n");

    tri_fusion(Tab, 0, n - 1);

    printf("Apres le tri : ");
    afficherTableau(Tab, n);

    return 0;
}

