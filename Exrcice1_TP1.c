#include <stdio.h>
#define MAX 100

// Q1: declaration liste statique (contigue)
typedef struct
{
    int tab[MAX];
    int taille;
} ListeStatique;

// Q2: fonction qui retourne max et min via pointeurs
void Max_Min(ListeStatique L, int *pMax, int *pMin)
{
    if (L.taille == 0)
        return;

    *pMax = L.tab[0];
    *pMin = L.tab[0];

    for (int i = 1; i < L.taille; i++)
    {
        if (L.tab[i] > *pMax)
        {
            *pMax = L.tab[i];
        }
        if (L.tab[i] < *pMin)
        {
            *pMin = L.tab[i];
        }
    }
}
// une fonction qui calcule une factorielle
 long long factorielle(int n)
{
    long long  fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}
ListeStatique creelisteL2(ListeStatique L)
{
    ListeStatique L2;
    L2.taille = L.taille;

    for (int i = 0; i <= L2.taille; i++)
    {
        L2.tab[i] = factorielle(L.tab[i]);
    }
    return L2;
}
void afficher(ListeStatique L)
{
    for (int i = 0; i < L.taille; i++)
    {

        printf("%d\n", L.tab[i]);
    }
}
    int main()
    {
        ListeStatique L = {{12, 5, 8, 20, 3}, 5};
        int max, min;

        Max_Min(L, &max, &min);
        printf("Max = %d, Min = %d\n", max, min);
        ListeStatique L2 = creelisteL2(L);
        afficher(L2);

        return 0;
    }