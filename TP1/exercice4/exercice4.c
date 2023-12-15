/* Écrivez un programme qui affiche les nombre de 1 à 100 à raison de 10 par lignes. Les nombres devront être alignés
correctement. */

#include <stdio.h>

void affiche_1_a_100(void) {
    int i;
    for (i = 1; i <= 100; i++) {
        printf("%3d ", i); /* On affiche le nombre */
        if (i % 10 == 0) {
            printf("\n");
        }
    }
}

/* Explication de cette ligne dans le programme :
   printf("%3d ", i);
   %3d signifie qu'on affiche un entier sur 3 caractères.
   Si l'entier est inférieur à 3 caractères, on rajoute des espaces avant l'entier.
   Si l'entier est supérieur à 3 caractères, on affiche l'entier sans espaces.
*/

int main(void) {
    affiche_1_a_100();
    return 0;
}
