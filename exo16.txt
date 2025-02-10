/* Calcul et affichage de la somme s = 1! + 2! + 3! +... + n !, 
où n est saisi au clavier */
Algorithme Calcul de la somme s = 1! + 2! + 3! +... + n !
Variables 
    i, n, f, s : entiers; 
Début
    Écrire ("Veuillez entrer un nombre entier n :");
    Lire (n);
    f <-  1;
    s <- 0;
    Pour ( i<-1,i<=n,i<-i+n)
       f <- f * i;
       s <- s + f;
    FinPour 
    Écrire ("La somme s = ", s);
Fin
