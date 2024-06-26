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

/* Output : 
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z */

/* 4. Créez deux variables, une chaîne s="Pi vaut" et un nombre x=3.1415926 puis affichez les avec printf.*/

void question4(void) {
    char s[] = "Pi vaut"; /* La syntaxe n'est pas évidente je vous explique ça : */
    /* char s[] : on déclare une variable de type char qui est un tableau de caractères. */
    float x = 3.1415926; /* On déclare un float car notre nombre est à virgule. */
    printf("%s %f\n", s, x); /* On affiche la chaîne de caractère s suivie de x. */
    /* %s pour afficher une chaîne de caractère, %f pour afficher un float. */
}

/* Output : 
Pi vaut 3.141593 */

/* 5. Copiez et exécutez la fonction ci-dessous. Prenez un instant pour méditer sur ce code.
void question5(void) {
    char c = 'a';
    int i = c + 1;
    printf("Valeur de c en caractère est '%c' et son équivalent décimal vaut %d\n", c, c);
    printf("Valeur de i en caractère est '%c' et son équivalent décimal vaut %d\n", i, i);
}*/

void question5(void) {
    char c = 'a'; /* On déclare un caractère c qui vaut 'a'. */
    int i = c + 1; /* On déclare un entier i qui vaut c + 1. */
    printf("Valeur de c en caractère est '%c' et son équivalent décimal vaut %d\n", c, c);
    /* On affiche la valeur de c en caractère et son équivalent décimal. */
    printf("Valeur de i en caractère est '%c' et son équivalent décimal vaut %d\n", i, i);
    /* On affiche la valeur de i en caractère et son équivalent décimal. */
}

/* Output :
Valeur de c en caractère est 'a' et son équivalent décimal vaut 97
Valeur de i en caractère est 'b' et son équivalent décimal vaut 98
*/

/* 6. Écrivez le code qui affiche sur une ligne les caractères de 'a' à 'z' (en minuscule) */

void question6(void) {
    char c;
    for (c = 'a'; c <= 'z'; c++) { /* On itère de 'a' à 'z' inclu. */
        printf("%c ", c); /* On affiche le caractère suivi d'un espace pour séparer. */
    }
    printf("\n"); /* Pas nécessaire mais plus propre. */
}

/* Output :
a b c d e f g h i j k l m n o p q r s t u v w x y z 
*/

/* Pourquoi ce code est trop cool et rend le C magnifique (comparé à Python) */
/* On peut itérer sur les caractères comme sur les entiers. */
/* En Python, on peut boucler que sur les entiers alors qu'ici c'est un caractère !*/

int main(void) { /* J'ai rajouté des printf pour enjolivait mon output mais c'est à chacun son gout. */
    /* On utilise la fonction question1() pour exécuter le code correspondant lors de l'exécution du programme. */    
    printf("Question 1 : \n");
    question1();

    printf("\nQuestion 2 : \n");
    question2();

    printf("\nQuestion 3 : \n");
    question3();

    printf("\nQuestion 4 : \n");
    question4();

    printf("\nQuestion 5 : \n");
    question5();

    printf("\nQuestion 6 : \n");
    question6();
    return 0;
}

/* A retenir de cet exercice : */
/* Quand on veut utiliser printf, il faut impérativement ajouter un #include <stdio.h> */
/* Pour afficher un entier, on utilise %d ou %i. */
/* Pour afficher un caractère, on utilise %c. */
/* Pour afficher une chaîne de caractère, on utilise %s. */
/* Pour afficher un float, on utilise %f. */
/* On peut itérer dans une boucle for sur les caractères. */
/* On peut déclarer une chaîne de caractère avec char s[] = "Hello World"; */
