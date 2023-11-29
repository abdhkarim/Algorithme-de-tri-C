#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void TriBulle(int Tab[], int n)
{
    int i, j, tmp;
    bool echange = true;

    printf("Avant le tri : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n\n");

    int k = 1;
    while(echange)
    {
        echange = false;

        int ktmp = n-1;
        for (int i = n-1; i >= k; i--)
        {
            if(Tab[i-1] > Tab[i])
            {
                tmp = Tab[i-1];
                Tab[i-1] = Tab[i];
                Tab[i] = tmp;
                ktmp = i;
                echange = true;
            }
        }
        k = ktmp+1;
    }
    

    printf("Après le tri : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
}

int main ()
{
    int n = 10;
    int i;
    int Tab[n];

    // Utiliser time(NULL) comme graine pour la fonction rand()
    srand(time(NULL));

    for (i = 0; i < n; i++) {
        Tab[i] = rand() % 100;  // Génère des nombres entre 0 et 99
    }

    TriBulle(Tab, n);

    return 0;
}