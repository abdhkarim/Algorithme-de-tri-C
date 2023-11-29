#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void TriInsertion(int Tab[], int n)
{
    int i, j, tmp;

    printf("Avant le tri : \n");
    for (i = 0; i < n; i++) {
        printf("%d ", Tab[i]);
    }
    printf("\n\n");


    for(i=1; i<=n-1; i++)
    {
        j = i - 1;
        tmp = Tab[i];
        while(j>=0 && Tab[j]>tmp)
        {
            Tab[j+1] = Tab[j];
            j--;
        }
        Tab[j+1] = tmp;
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

    TriInsertion(Tab, n);

    return 0;
}