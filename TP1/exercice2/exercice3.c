/* 1. En vous inspirant du cours et en utilisant la fonction getchar(), écrire une fonction qui lit un entier sur la sortie
standard et renvoie sa valeur. Si la valeur lue n’est pas un entier, la fonction renverra -1. Pour plus de lisibilité, on
utilisera comme invite de commande la chaîne "entier>".*/

#include <stdio.h>

int lire_entier(void) {
    int i;
    char c;
    int n = 0;
    printf("entier> "); /* On affiche l'invite de commande. */
    while ((c=getchar()) != '\n' && c!= EOF) { /* On lit le caractère. */
        i = c - '0'; /* On convertit le caractère en entier. */
        if (i > 9 || i < 0) { /* Si le caractère n'est pas un entier, on renvoie -1. */
            return -1;
        }
        n = n * 10 + i; /* On construit l'entier. */
    }
    return n;
}

 /* Explication sur cette condition de boucle while :
    On lit le caractère et on le stocke dans c grâce à getchar().
    On vérifie que c est différent de '\n' et de EOF.
    Si c'est le cas, on continue la boucle.
    Si c'est pas le cas, on sort de la boucle.
    EOF signifie End Of File, c'est la fin du fichier.
    '\n' signifie retour à la ligne.
    Donc on lit le caractère et on vérifie qu'il n'est pas égal à la fin du fichier et qu'il n'est pas égal à un retour à la ligne.
*/