/* Exercice 1 — Compiler avec gcc

1. Créez un répertoire ProgC, puis, dans celui-ci, créez un repertoire TP1. 
Créez alors un fichier exercice1.c contenant le code ci-dessous. 
Vous pouvez utiliser l’éditeur de votre choix (gedit, GNU/Emacs, autre).
*/

/*
#include <stdio.h>

int c = 3;

void main(void) {
    int u, d, c;
    u = 1;
    d = 2;  
    int n = 100 * c + 10 * d + u; c vaut 3, d vaut 2 et u vaut 1
    printf("321 = %i\n",n);  affiche « 321 = 321 » 
}
*/

/*
2. Dans un terminal, compilez le fichier avec la commande : « gcc exercice1.c ». Quel est le nom de l’exécutable
produit ? Lancez-le. Le résultat est-il celui attendu ? 
*/

/* Voici l'erreur affichée : 
    ➜  TP1 git:(main) gcc exercice1.c 
    exercice1.c:12:1: warning: return type of 'main' is not 'int' [-Wmain-return-type]
    void main(void) {
    ^
    exercice1.c:12:1: note: change return type to 'int'
    void main(void) {
    ^~~~
    int
    1 warning generated.

    Qu'est-ce qui s'est passé ? 
    -- Chaque main doit forcément renvoyait un entier, donc on doit écrire int main(void).
    Pourquoi écrire void dans la parenthèse ?
    -- On ne doit pas y mettre rien, il faut qu'il y est 'void' s'il n'y a rien. 
    -> Void est un mot anglais qui se traduit comme vide.
*/

/* 3. Pour éviter ce genre de mauvaise surprise, durant cette UE, nous allons systématiquement compiler le code avec
les options « gcc -Wall -ansi -pedantic exercice1.c ». 
Corrigez le code jusqu’à ce que le compilateur n’affiche aucun warning et que le code s’exécute comme souhaité. 
Vous devez trouver trois erreurs.
*/

/* Explication de la commande gcc -Wall -ansi -pedantic exercice1.c :
    -Wall : affiche tous les warnings
    -ansi : respecte la norme ANSI C
    -pedantic : affiche tous les warnings qui ne sont pas dans la norme ANSI C
*/

/* La nouvelle fonction main sans erreur : */

#include <stdio.h> /* Nécessaire pour l'utilisation de la fonction print. */

int global_c = 3; /* On redéfinit la variable c pour ne pas se confondre. */

int main(void) {
    int u;
    int d;
    int c;
    int n; /* Mettre les définitions de variables sur chaque ligne permet d'avoir plus de clarté et moins de confusion. */
    u = 1;
    d = 2;
    c = 3; /* On met la valeur de c à 3 ici dans la fonction parce qu'elle ne peut pas être défini ailleurs. */
    n = 100 * c + 10 * d + u; /* On enlève le int car dans la norme C ANSI, il faut toujours écrire les défintions de variable au début. */
    printf("321 = %i\n", n); /* On aurait pu utiliser %d. */
    /* %d lit et affiche des entiers en base 10; %i lit des entiers en base 8, 10, 16.*/
}

/* Output de ./a.out :
321 = 321
*/

/* 
4. Créer un fichier compiler.sh qui lance automatiquement la bonne commande de compilation avec les bonnes
options pour créer un fichier exercice1.
*/

/* 
NB: ne pas oublier de se donner les permissions pour compiler.sh : 
chmod u+x compiler.sh
*/

/* A retenir :
    - On compile avec gcc -Wall -ansi -pedantic exercice1.c
    - On exécute avec ./a.out
    - On peut créer un fichier compiler.sh qui lance automatiquement la bonne commande de compilation avec les bonnes options pour créer un fichier exercice1.
*/