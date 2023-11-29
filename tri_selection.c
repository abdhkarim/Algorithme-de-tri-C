#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void triSelection(int Tab[], int n) {
    int i, j, tmp;
    int min;

    printf("Avant le tri : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n\n");

    // Parcourir tous les éléments du tableau
    for (i = 0; i <= n - 2; i++) {
        min = i; // Trouver le min dans le tableau non trié

        // Parcourir les éléments non triés
        for (j = i + 1; j <= n; j++) {
            // Si l'élement suivant est inf a au tab de min alors on attribue la case de la valeur au min
            if (Tab[j] < Tab[min]) {
                min = j;
            }
        }

        // Échanger Tab[i] et Tab[min]
        tmp = Tab[i];
        Tab[i] = Tab[min];
        Tab[min] = tmp;
    }

    printf("Apres le tri : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
}

int main() {
    int n = 10;
    int i;
    int Tab[n];

    // Utiliser time(NULL) comme graine pour la fonction rand()
    srand(time(NULL));

    for (i = 0; i < n; i++) {
        Tab[i] = rand() % 100;  // Génère des nombres entre 0 et 99
    }

    triSelection(Tab, n);

    return 0;
}
