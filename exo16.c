// Calcul et affichage de la somme s=1!+2!+3!+...+n! où n est saisi au clavier
#include <stdio.h>
int main ()
{
    int i , n , f , s;
    printf("Veuillez entrer un nombre entier n:");
    scanf("%d",&n);
    f = 1;
    s = 0;
    for (i=1;i<=n;i++)
    {
        f = f * i; // Calcul du factoriel
        s = s + f; // Calcul de la somme
    }
    printf("La somme de s = %d \n",s);
    return (0);
}