#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Fonction de partitionnement de Lomuto
int partition(int T[], int i, int j) {
    int x = T[i];
    int g = i + 1;
    int d = j;

    while (g <= d) {
        if (T[g] > x) 
        {
            // Échanger les éléments pour placer T[g] à la fin du tableau
            int temp = T[g];
            T[g] = T[d];
            T[d] = temp;
            d--;
        } 
        else 
        {
            g++;
        }
    }

    // Remettre le pivot à sa position correcte
    T[i] = T[d];
    T[d] = x;

    return d;
}

// Fonction récursive de tri rapide
void quicksort_aux(int T[], int i, int j) {

    if (j - i >= 1) {
        // Choix du x : placé en début de tableau
        int x = i;

        // Échanger le x avec le premier élément du tableau
        int temp = T[i];
        T[i] = T[x];
        T[x] = temp;

        // Obtenir l'indice de partitionnement
        int k = partition(T, i, j);

        // Trier les sous-tableaux
        quicksort_aux(T, i, k - 1);
        quicksort_aux(T, k + 1, j);
    }
}

// Fonction principale de tri rapide
void quicksort(int T[], int n) {
    quicksort_aux(T, 0, n - 1);
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


    quicksort(Tab, n);

    printf("Apres le tri : ");
    afficherTableau(Tab, n);

    return 0;
}
