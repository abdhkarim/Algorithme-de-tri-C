#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int dichotomie(int tableau[], int n, int elementRecherche) {
    int i = 0;
    int j = n - 1;
    bool found = false;
    int res = -1;
    int m;

    while ((i <= j) && !(found)) {
        // Trouver l'indice du m
        m = (i + j) / 2;

        // Vérifier si l'élément est présent au m
        if (tableau[m] == elementRecherche)
            return m;

        // Si l'élément est plus petit, ignorer la moitié droite
        else if (tableau[m] > elementRecherche)
            j = m - 1;

        // Sinon, ignorer la moitié gauche
        else
            i = m + 1;
    }

    // Si l'élément n'est pas présent dans le tableau
    return -1;
}

int main() {
    int tableau[] = {2, 5, 8, 12, 16, 23, 38, 42, 56, 72};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int elementRecherche = 23;

    int resultat = dichotomie(tableau, taille, elementRecherche);

    if (resultat != -1)
        printf("L'element %d est present a l'indice %d.\n", elementRecherche, resultat);
    else
        printf("L'element %d n'est pas present dans le tableau.\n", elementRecherche);

    return 0;
}

