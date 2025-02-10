// Calcul et affichage de pgcd de deux nombres 
Algorithme Pgcd de deux nombres entiers 
Variables 
    a, b, rest, dividande, diviseur ;
Début
    Écrire ("Veuillez entrer un nombre entier a:");
    Lire (a);
    Écrire ("Veuillez entrer un nombre entier b:");
    Lire (b);
    Si (a>b) Alors 
        a <- dividande ;
        b <- diviseur ;
        Sinon 
        b <- dividande ;
        a <- diviseur ;
    FinSi 
    Faire 
        rest <- dividande % diviseur ;
        dividande <- diviseur ;
        diviseur <- rest;
    TantQue (rest <> 0);
    Écrire ("Le pgcd (a, b)=", dividande );
Fin
