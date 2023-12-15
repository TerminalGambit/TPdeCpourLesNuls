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

#include <stdio.h>

void pyramide(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        printf("%*s", n - i, ""); /* On affiche les espaces. */
        for (j = 1; j <= i; j++) {
            printf("* "); /* On affiche les étoiles. */
        }
        printf("\n");
    }
}

/* 
La première boucle for, avec la variable "i", itère de 1 jusqu'à "n". 
Cette boucle est responsable de gérer les lignes de la pyramide.

À chaque itération de la boucle "i", la fonction utilise la fonction printf 
pour afficher un certain nombre d'espaces avant d'afficher les étoiles. 
Le nombre d'espaces est calculé en utilisant l'expression "n - i". 
Cela signifie que le nombre d'espaces diminue à chaque ligne de la pyramide.

Ensuite, la deuxième boucle for, avec la variable "j", itère de 1 jusqu'à "i". 
Cette boucle est responsable de gérer le nombre d'étoiles à afficher sur chaque ligne de la pyramide. 
À chaque itération de la boucle "j", la fonction utilise à nouveau la fonction printf 
pour afficher une étoile suivie d'un espace.

Après avoir affiché les étoiles pour une ligne donnée, 
la fonction utilise la fonction printf avec le caractère de saut de ligne "\n" 
pour passer à la ligne suivante.
*/

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
