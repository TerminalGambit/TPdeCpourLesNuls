/* 1. Écrire une fonction void affiche_tableau(int tab[], int n) 
qui affiche les n premiers éléments d’un tableau tab d’entiers 
(n devant être inférieur à la taille du tableau). Écrire une fonction 
question1 pour tester votre fonction. */

void affiche_tableau(int tab[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void question1(void) {
    int tab[] = {1, 2, 3, 4, 5};
    affiche_tableau(tab, 5);
}
