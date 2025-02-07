// Calcul et afficccchage de la somme s=1/1+1/2+1/3+...+1/n, où n est saisie au clavier
#include <stdio.h>
int main ()
{
    int n , i ;
    float somme;
    printf("Veuillez entrer un nombre n : ");
    scanf("%d",&n);
    somme = 0;
    for (i=1;i<=n;i++)
    {
        somme = somme + 1.0/i;
    }
    printf("La somme de 1/1 jusq\'à 1/%d est : %f\n",n,somme);
    return (0);
}