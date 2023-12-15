/* Exercice 5 — ASCII art
Écrivez une fonction pyramide(int n) qui affiche une pyramide de taille n. Écrivez ensuite une boucle qui demande à
l’utilisateur de rentrer une valeur entière et trace la pyramide correspondante. On s’arrêtera lorsque l’utilisateur rentrera
une valeur invalide.

stdin/stdout
entier> 3
  *
 * *
* * *
entier> 7
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
entier> q*/

void pyramide(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < n-i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

/* La fonction utilise deux boucles for pour construire la pyramide. 
La première boucle for itère de 1 à n et est utilisée pour gérer le nombre de lignes de la pyramide.

À chaque itération de la première boucle, une deuxième boucle for est utilisée pour afficher les espaces avant les étoiles. 
Le nombre d'espaces est déterminé par la différence entre n et la valeur actuelle de i. 
Cela permet de décaler chaque ligne de la pyramide vers la droite.

Ensuite, une troisième boucle for est utilisée pour afficher les étoiles. 
Le nombre d'étoiles est déterminé par la formule 2*i-1, où i représente la valeur actuelle de la première boucle. 
Cette formule permet d'obtenir le nombre d'étoiles nécessaire pour chaque ligne de la pyramide, en augmentant de manière progressive.

Enfin, après l'affichage des espaces et des étoiles, 
la fonction utilise printf("\n") pour passer à la ligne suivante et construire la pyramide ligne par ligne.

La fonction pyramide est donc un moyen simple d'afficher une pyramide d'étoiles
dans la console en utilisant des boucles for et des instructions printf.*/

int lire_entier(void) {
    int n = 0;
    char c;
    int i;
    printf("Entier> ");
    while ((c = getchar()) != '\n') {
        i = c - '0';
        if (i > 9 || i < 0) {
            return -1;
        }
        n = n * 10 + i;
    }
    if (n == 0) {
        return -1;
    }
    return n;
}

int main(void) {
    int n;
    while ((n = lire_entier()) != -1) {
        pyramide(n);
    }
    return 0;
}
