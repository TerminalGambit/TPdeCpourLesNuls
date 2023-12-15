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

#include <stdio.h>

void question1(void) {
    printf("Hello World.\n"); /* \n pour le saut à la ligne. */
}

int main(void) {
    question1();
    return 0;
}
