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

/* Output : 
65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 */

/* 3. Écrivez un code C qui affiche sur une ligne les caractères dont le code ASCII va de 65 à 90 */

void question3(void) {
    int i;
    for (i = 65; i <= 90; i++) { /* On itère de 65 à 90 inclu. */
        printf("%c ", i); /* On affiche le caractère suivi d'un espace pour séparer. */
    }
    printf("\n"); /* Pas nécessaire mais plus propre. */
}

/* 4. Créez deux variables, une chaîne s="Pi vaut" et un nombre x=3.1415926 puis affichez les avec printf.*/

void question4(void) {
    char s[] = "Pi vaut"; /* La syntaxe n'est pas évidente je vous explique ça : */
    /* char s[] : on déclare une variable de type char qui est un tableau de caractères. */
    float x = 3.1415926; /* On déclare un float car notre nombre est à virgule. */
    printf("%s %f\n", s, x); /* On affiche la chaîne de caractère s suivie de x. */
    /* %s pour afficher une chaîne de caractère, %f pour afficher un float. */
}

/* Output : 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z */

int main(void) {
    printf("Question 1 : \n");
    question1();

    printf("\nQuestion 2 : \n");
    question2();

    printf("\nQuestion 3 : \n");
    question3();

    printf("\nQuestion 4 : \n");
    question4();
    return 0;
}

/* A retenir de cet exercice : */
/* Quand on veut utiliser printf, il faut impérativement ajouter un #include <stdio.h> */
/* Pour afficher un entier, on utilise %d ou %i. */
/* Pour afficher un caractère, on utilise %c. */
/* Pour afficher une chaîne de caractère, on utilise %s. */
/* Pour afficher un float, on utilise %f. */