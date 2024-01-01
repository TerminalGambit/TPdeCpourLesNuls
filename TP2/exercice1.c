/* 1. Écrire une fonction void affiche_tableau(int tab[], int n) 
qui affiche les n premiers éléments d’un tableau tab d’entiers 
(n devant être inférieur à la taille du tableau). Écrire une fonction 
question1 pour tester votre fonction. */
#include <stdio.h>

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

/* Ecrire une procédure int saisie_tab(int tableau[]) qui lit sur l'entrée standard des entiers et les range dans un tableau.
On s'arrêtera lorsque l'utilisateur rentrera uen valeur non entière.
La fonction renverra le nombre de valeur lue et stockée dans le tableau. */

int saisie_tab(int tableau[]) {
    int i = 0;
    int n;
    while ((n = lire_entier()) != -1) {
        tableau[i] = n;
        i++;
    }
    return i;
}

int main(void) {
    question1();
    return 0;
}

/*
Que se passe-t-il si on saisit plus d’entiers que le tableau peut contenir d’éléments ? 
Et si on essaie d’afficher plus d’élé- ments que ne contient le tableau ? Expliquez.

Si on saisit plus d'entiers que le tableau peut contenir, 
le programme va écrire dans des emplacements mémoire non alloués pour le tableau, 
ce qui peut causer un comportement indéfini, y compris des erreurs de segmentation. 

Si on essaie d’afficher plus d'éléments que ne contient le tableau, 
le programme va tenter de lire des emplacements mémoire qui ne sont pas initialisés ou qui ne lui appartiennent pas,
ce qui peut également conduire à un comportement indéfini.
*/
