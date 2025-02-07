// Calcul et afficha de PGCD de deux entiers
#include <stdio.h>
int main ()
{
    int a , b , rest , dividande , diviseur;
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
    printf("Le PGCD(a;b)=%d \n",dividande);
    return (0);
}