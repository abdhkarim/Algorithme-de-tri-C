#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void TriShaker (int Tab[], int n)
{

    
    int i;
    bool echange = true;
    int k = 1;
    int K = n-1;

    printf("Avant le tri : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n\n");

    while(echange)
    {
        echange = false;

        int ktmp = K;
        for(i = K; i >= k; i--)
        {
            if(Tab[i-1] > Tab[i])
            {
                int tmp = Tab[i-1];
                Tab[i-1] = Tab[i];
                Tab[i] = tmp;
                ktmp = i;
                echange = true;
            }
        }
        k = ktmp+1;

        ktmp = k;
        for(i = k; i <=K; i++)
        {
            if(Tab[i-1] > Tab[i])
            {
                int tmp = Tab[i-1];
                Tab[i-1] = Tab[i];
                Tab[i] = tmp;
                ktmp = i;
                echange = true;
            }
        }
    K = ktmp-1;
    }

    printf("Après le tri : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n\n");
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

    TriShaker(Tab, n);

    return 0;
}