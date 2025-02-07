// Calcul et affichage de la somme S=1+10+10^2+10^3+...+10^n où n est saisi au clavier
#include <stdio.h>
#include <math.h>
int main ()
{
    int n , i , somme;
    printf("Veuillez entrer un nombre entier n :");
    scanf("%d",&n);
    somme = 0;
    for (i=0;i<=n;i++)
    {
        somme = somme + pow(10,i);
    }
    printf("La somme de 1 jusq'à 10^%d est:%d \n",n,somme);
    return (0);
}