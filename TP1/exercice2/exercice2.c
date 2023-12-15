/* 
Exercice 2 — Quelques manipulations simples
1. Créez un fichier exercice2.c contenant une fonction question1 affichant Hello World. 
Modifiez le fichier ./compilation.sh pour qu’il compile aussi l’exercice 2.

void question1(void) {
}

int main(void) {
    question1();
    …
    question6();
    return 0 ;
}
*/

#include <stdio.h> /* Nécessaire pour l'utilisation de printf */

void question1(void) {
    printf("Hello World.\n"); /* \n pour le saut à la ligne. */
}

/* 2. Écrivez dans une fonction question2 un code C qui affiche sur une ligne les entiers de 65 à 90. 
Prenez l’habitude de bien séparer le code en différentes fonctions (en régle générale, une par question). */

void question2(void) {
    int i;
    for (i = 65; i <= 90; i++) { /* On itère de 65 à 90 inclu. */
        printf("%d ", i); /* On affiche l'entier suivi d'un espace pour séparer. */
    }
    printf("\n"); /* Pas nécessaire mais plus propre. */
}

/* 3. Écrivez un code C qui affiche sur une ligne les caractères dont le code ASCII va de 65 à 90 */

void question3(void) {
    int i;
    for (i = 65; i <= 90; i++) { /* On itère de 65 à 90 inclu. */
        printf("%c ", i); /* On affiche le caractère suivi d'un espace pour séparer. */
    }
    printf("\n"); /* Pas nécessaire mais plus propre. */
}

int main(void) {
    printf("Question 1 : \n");
    question1();

    printf("\nQuestion 2 : \n");
    question2();
    return 0;
}
