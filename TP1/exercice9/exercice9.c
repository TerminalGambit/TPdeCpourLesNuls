#include <stdio.h>

/* 1. Un nombre est dit premier s'il est différent de 1 et s'il n'admet comme diviseurs que 1 et lui-même.
(a) Ecrivez une fonction qui détermine si un nombre entier est premier 
(b) Ecrivez un programme en C qui lit sur l'entrée standard un nombre entier l et affiche les k premiers nomnbres premiers. */

int est_premier(int n) {
    int i;
    if (n == 1) return 0;
    for (i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void affiche_premiers(int k) {
    int i = 1;
    int n = 0;
    while (n < k) {
        if (est_premier(i)) {
            printf("%d\n", i);
            n++;
        }
        i++;
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

/*
int main() {
    int k = lire_entier();
    if (k == -1) {
        printf("Erreur: Entrée invalide\n");
        return 1;
    }
    affiche_premiers(k);
    return 0;
}
*/

/* 2. Un nombre est dit parfait s'il est égal à la somme de ses diviseurs autres que lui-même. 
6 est parfait, il admet comme diviseurs 1, 2, 3 et 6.
La seomme de ses diviseurs autres que lui-même est 1 + 2 + 3 = 6. 28 est un autre nombre parfait. 
(a) Ecrivez une fonction qui détermine si un nombre entier est parfait.
(b) Ecrivez un programmme en C qui affiche tous les nombres parfaits compris entre 2 bornes lues sur l'entrée standard.*/

int est_parfait(int n) {
    int i;
    int somme = 0;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            somme += i;
        }
    }
    return somme == n;
}

void affiche_parfaits(int a, int b) {
    int i;
    for (i = a; i <= b; i++) {
        if (est_parfait(i)) {
            printf("%d\n", i);
        }
    }
}

/*
int main() {
    int a = lire_entier();
    int b = lire_entier();
    if (a == -1 || b == -1) {
        printf("Erreur: Entrée invalide\n");
        return 1;
    }
    affiche_parfaits(a, b);
    return 0;
}
*/

/* 3. Un nombre est dit doublon si le produit de ses diviseurs est multiple de la somme de ses diviseurs. 
6 est doublon, il admet comme diviseurs 1, 2, 3, 6. La somme de ses diviseurs est 1 + 2 + 3 + 6 = 12, 
le produit de ses diviseurs est 1 x 2 x 3 x 6 = 36, et 36 est un multiple de 12. 
(a) Ecrivez une fonction qui détermine si un nombre entier est doublon.
(b) Ecrivez un programmme C qui affiche tous les doublons compris entre 2 bornes lues sur l'entrée standard. */

int est_doublon(int n) {
    int i;
    int somme = 0;
    int produit = 1;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            somme += i;
            produit *= i;
        }
    }
    return produit % somme == 0;
}

void affiche_doublons(int a, int b) {
    int i;
    for (i = a; i <= b; i++) {
        if (est_doublon(i)) {
            printf("%d\n", i);
        }
    }
}

/*
int main() {
    int a = lire_entier();
    int b = lire_entier();
    if (a == -1 || b == -1) {
        printf("Erreur: Entrée invalide\n");
        return 1;
    }
    affiche_doublons(a, b);
    return 0;
}
*/

/* Ecrivez un programme qui permet de tester les 3 fonctions précédentes. Il propose à l'utilisateur de taper : 
0 pour arreter le programme
1 pour calculer et afficher les k premiers nombres premiers
2 pour calculer et afficher tous les nombres parfaits compris entre 2 borrnes 
3 pour calculer et afficher tous les nombres doublons compris entre 2 borrnes*/

int main(void) {
    int choix;
    int k;
    int a, b;
    while (1) {
        printf("0 pour arreter le programme\n");
        printf("1 pour calculer et afficher les k premiers nombres premiers\n");
        printf("2 pour calculer et afficher tous les nombres parfaits compris entre 2 bornes\n");
        printf("3 pour calculer et afficher tous les nombres doublons compris entre 2 bornes\n");
        printf("Choix> ");
        choix = lire_entier();
        if (choix == -1) {
            printf("Erreur: Entrée invalide\n");
            continue;
        }

        if (choix == 0) {
            return 0;
        } else if (choix == 1) {
            printf("k> ");
            k = lire_entier();
            if (k == -1) {
                printf("Erreur: Entrée invalide\n");
                continue;
            }
            affiche_premiers(k);
        } else if (choix == 2) {
            printf("a> ");
            a = lire_entier();
            printf("b> ");
            b = lire_entier();
            if (a == -1 || b == -1) {
                printf("Erreur: Entrée invalide\n");
                continue;
            }
            affiche_parfaits(a, b);
        } else if (choix == 3) {
            printf("a> ");
            a = lire_entier();
            printf("b> ");
            b = lire_entier();
            if (a == -1 || b == -1) {
                printf("Erreur: Entrée invalide\n");
                continue;
            }
            affiche_doublons(a, b);
        } else {
            printf("Erreur: Choix invalide\n");
        }
    }
    return 0;
}
