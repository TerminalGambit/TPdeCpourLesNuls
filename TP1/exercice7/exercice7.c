/* 1. Écrivez une fonction lire_flottant sur le modèle de lire_entier.
Un flottant est de la forme :
(a) un signe « - » (facultatif)
(b) une suite d’entiers représentant la partie entière.
(si vide, la partie entière vaut 0).
(c) un point suivie éventuellement d’une suite d’entiers représentant la partie décimale. */
#include <stdio.h>

double lire_flottant(void) {
    double n = 0.0;  /* Pour stocker la partie entière et décimale*/

    double facteur = 1.0;  /* Pour gérer les chiffres après le point */
    int signe = 1;  /* Pour gérer le signe */
    char c;
    
    printf("Flottant> ");

    /* Vérifier le signe */
    c = getchar();
    if (c == '-') {
        signe = -1;
        c = getchar(); /* Lire le caractère suivant */
    } else if (c == '+') {
        c = getchar(); /* Lire le caractère suivant */
    }

    /* Lire la partie entière */
    while (c != '.' && c != '\n') {
        if (c < '0' || c > '9') {
            return -1; /* Retourner une erreur si ce n'est pas un chiffre */
        }
        n = n * 10 + (c - '0');
        c = getchar();
    }

    /* Lire la partie décimale si présente */
    if (c == '.') {
        c = getchar();
        while (c != '\n' && c >= '0' && c <= '9') {
            n = n * 10 + (c - '0');
            facteur *= 10;
            c = getchar();
        }
        if (c != '\n') {
            return -1; /* Retourner une erreur si le format est incorrect */
        }
    }

    return signe * n / facteur;
}

int main(void) {
    double nombre;
    printf("Entrez un nombre flottant : ");
    nombre = lire_flottant();
    if (nombre == -1) {
        printf("Erreur de format\n");
    } else {
        printf("Le nombre saisi est : %f\n", nombre);
    }
    return 0;
}

/*
int main(void) {
    int n;
    while ((n = lire_flottant()) != -1) {
        printf("%d\n", n);
    }
    return 0;
}
*/
