// Affichage si les deux nombres a et b sont premiers entre eux ou non
#include <stdio.h>
int main ()
{
    int a , b , rest , dividande , diviseur , pgcd;
    printf("Veuillez entrer un nombre entier a:");
    scanf("%d",&a);
    printf("Veuillez entrer un nombre entier b:");
    scanf("%d",&b);
    if (a>b)
    {
        dividande = a;
        diviseur = b;
    }
    else
    {
        dividande = b;
        diviseur = a;
    }
    do
    {
        rest = dividande % diviseur;
        dividande = diviseur;
        diviseur = rest;
    }
    while (rest != 0);
    pgcd = dividande;
    if (pgcd==1)
    {
        printf("a et b sont premiers entre eux \n");
    }
    else
    {
        printf("a et b ne sont pas premiers entre eux \n");
    }
    return (0);
}
