// Calcul et affichage de la somme s=1/1!+1/2!+1/3!+...+1/n!
#include <stdio.h>
int main ()
{
    int i , n , f;
    float s;
    printf("Veuillez entrer un nombre n:");
    scanf("%d",&n);
    f = 1;
    s = 0;
    for (i=1;i<=n;i++)
    {
        f = f * i; // Calcul du factoriel
        s = s + 1.0/f; // Calcul de la somme
    }
    printf("La somme s=%f \n",s);
    return (0);
}