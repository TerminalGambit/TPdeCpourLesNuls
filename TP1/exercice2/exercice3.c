/* 1. En vous inspirant du cours et en utilisant la fonction getchar(), écrire une fonction qui lit un entier sur la sortie
standard et renvoie sa valeur. Si la valeur lue n’est pas un entier, la fonction renverra -1. Pour plus de lisibilité, on
utilisera comme invite de commande la chaîne "entier>".*/

#include <stdio.h>

int lire_entier(void) {
    int i;
    char c;
    int n = 0;
    printf("entier> ");
    while ((c=getchar()) != '\n' && c!= EOF) {
        i = c - '0';
        if (i > 9 || i < 0) {
            return -1;
        }
        n = n*10 + i;
    }
    return n;
}