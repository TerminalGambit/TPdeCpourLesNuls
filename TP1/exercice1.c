/* Exercice 1 — Compiler avec gcc

1. Créez un répertoire ProgC, puis, dans celui-ci, créez un repertoire TP1. 
Créez alors un fichier exercice1.c contenant le code ci-dessous. 
Vous pouvez utiliser l’éditeur de votre choix (gedit, GNU/Emacs, autre).
*/

#include<stdio.h>

int c = 3;

void main(void) {
    int u, d, c;
    u = 1;
    d = 2;  
    int n = 100 * c + 10 * d + u; /* c vaut 3, d vaut 2 et u vaut 1 */
    printf("321 = %i\n",n); /* affiche « 321 = 321 » */
}

/*
2. Dans un terminal, compilez le fichier avec la commande : « gcc exercice1.c ». Quel est le nom de l’exécutable
produit ? Lancez-le. Le résultat est-il celui attendu ?

3. Pour éviter ce genre de mauvaise surprise, durant cette UE, nous allons systématiquement compiler le code avec
les options « gcc -Wall -ansi -pedantic exercice1.c ». Corrigez le code jusqu’à ce que le compilateur n’affiche aucun warning et que le code s’exécute comme souhaité. Vous devez trouver trois erreurs.
4. Créer un fichier compiler.sh qui lance automatiquement la bonne commande de compilation avec les bonnes
options pour créer un fichier exercice1.*/