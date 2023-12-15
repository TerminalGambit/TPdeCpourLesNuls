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

/* 2. En utilisant la question précédente, écrire une procédure qui lit un entier sur la sortie standard et affiche sa parité.
On traitera le cas où la valeur lue ne correspond pas à un nombre.

entier> saucisse
Ce n’est pas un entier.
entier> 23
L’entier 23 est impair.
entier> 18
L’entier 18 est pair.

*/

void question2(void) {
    int n = lire_entier(); /* On lit l'entier. */
    if (n == -1) { /* Si l'entier n'est pas un entier, on affiche un message d'erreur. */
        printf("Ce n'est pas un entier.\n");
    } else if (n % 2 == 0) { /* Si l'entier est pair, on affiche un message. */
        printf("L'entier %d est pair.\n", n);
    } else { /* Sinon, on affiche un message. */
        printf("L'entier %d est impair.\n", n);
    }
}

/* Utilisation sur le terminal avec l'entrée standard : 
➜  exercice3 git:(main) ✗ ./compiler.sh
➜  exercice3 git:(main) ✗ ./a.out 
entier> saucisse
Ce n'est pas un entier.
➜  exercice3 git:(main) ✗ ./a.out
entier> 23
L'entier 23 est impair.
➜  exercice3 git:(main) ✗ ./a.out
entier> 18
L'entier 18 est pair.
➜  exercice3 git:(main) ✗ 
*/

/*
3. De même, écrire une fonction moyenne_stdin qui lit des notes sur l’entrée standard et renvoie la moyenne. 
Si une note n’est pas valide (plus grande que 20), elle sera ignorée. On s’arrête lorsque la valeur lue n’est pas un
entier. 
*/

double moyenne_stdin(void) {
    int n;
    int somme = 0;
    int i = 0;
    double moyenne = 0;
    while ((n = lire_entier()) != -1) {
        if (n <= 20) {
            somme += n;
            i++;
        }
    }
    moyenne = (double) somme / i;
    return moyenne;
}

int main(void) {
    printf("Question 2 :\n");
    /* question2(); */

    printf("\nQuestion 3 :\n");
    moyenne_stdin();
    return 0;
}
