#include <stdio.h>

/* Ecrivez une fonction absolue renvoyant la valeur absolue d'un flottant x.*/

float absolue(float x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

/* Ecrivez une fonction float racine(float x, float p) calculant par dichotomie la racine carrée d'un nombre x avec une précision p. 
l'algorithme est le suivant : on part de deux nombres a = 0 et b = x, puis on pose m = (a + b)/2. 
Si m^2 est plus grand que x on recommence avec b = m, sinon, on pose a = m. On s'arrête lorsque |m^2-x| < p.*/

float racine(float x, float p) {
    float a = 0;
    float b = x;
    float m = (a + b) / 2;
    while (absolue(m*m - x) > p) {
        m = (a + b) / 2;
        if (m*m > x) {
            b = m;
        } else {
            a = m;
        }
    }
    return a;
}


double lire_flottant(void) {
    double n = 0.0;  /* Pour stocker la partie entière et décimale*/

    double facteur = 1.0;  /* Pour gérer les chiffres après le point */
    int signe = 1;  /* Pour gérer le signe */
    char c;

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
    float x;
    float p;
    printf("flottant> ");
    x = lire_flottant();
    printf("flottant> ");
    p = lire_flottant();
    printf("La racine carrée de %f est %f\n", x, racine(x, p));
    return 0;
}
