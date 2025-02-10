/* Calcul et affichage de la somme s = 1+10+10^2+10^3+... +10^n
où n est saisi au clavier */
Algorithme Calcul de la somme s = 1+10+10^2+10^3+... +10^n
Variables 
   n, i, somme : entiers;
Début
    Écrire ("Veuillez entrer un nombre entier n :");
    Lire (n);
    somme <- 0;
    Pour (i<-1,i<=n,i<-i+1)
        somme <- somme + pow(10, i);
    FinPour
    Écrire ("La somme de 1 jusqu'à 10^",i,"est : ", somme);
Fin
