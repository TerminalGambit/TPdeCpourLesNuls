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
