// Calcul et  affichage de multiplication 1*2*3*...*n où n est saisie au clavier
#include <stdio.h>
int main ()
{
    int n , i , produit;
    printf("Veuillez entrer un nombre entier n :");
    scanf("%d",&n);
    produit = 1;
    for (i=1;i<=n;i++)
    {
        produit = produit * i;
    }
    printf("Le produit de 1 jusq'à %d est: %d \n",n,produit);
    return (0);
}