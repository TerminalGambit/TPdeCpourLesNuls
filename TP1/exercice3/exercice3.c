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
    moyenne = (double) somme / i; /* On convertit somme en double pour avoir une division réelle. */
    return moyenne;
}

/* Explication sur cette ligne de code : moyenne = (double) somme / i; :*/
/* Comment est-ce que ça se fait que ça marche ?
On a somme qui est un entier et i qui est un entier.
On fait somme / i.
On a donc une division entière.
On convertit somme en double pour avoir une division réelle.
On a donc une division réelle.
*/
/* Quand est-ce qu'on peut utiliser cette méthode pour transformer un type ?
Quand on veut transformer un type en un autre type qui est plus grand.
Autres cas où on peut utiliser cette méthode :
- int -> float
- int -> double
- float -> double
*/

/* Utilisation sur le terminal avec l'entrée standard :
Question 3 :
entier> 45
entier> 7
entier> 13
entier> 20
entier> 21
entier> saucisse
La moyenne est : 13.333333
*/

/* Vérification : 
((7 + 13 + 20) / 3) = 13.3333333333*/

/* 4. Écrire une fonction qui prend en paramètre deux entiers, a et b et affiche le résultat de la division euclidienne. Par
exemple avec a=25 et b=10 on affichera « 25 = 2×10 + 5 ». On traitera proprement la cas où b est nul. */

void division_euclidienne(int a, int b) {
    int q = 0;
    int r = 0;
    if (b == 0) {
        printf("Erreur : b est nul.\n");
    } else {
        q = a / b;
        r = a % b;
        printf("%d = %d x %d + %d\n", a, q, b, r);
    }
}

/* Création de la fonction qui teste notre division euclidienne :
L'idée ici, c'est de comprendre comment on teste les fonctions.
En général, on teste les fonctions avec des valeurs extrêmes.
On teste avec des valeurs qui sont aux extrémités de l'intervalle.
*/

void test_division_euclidienne(void) {
    printf("Test 1 : pour a = 25 et b = 10\n");
    division_euclidienne(25, 10);
    printf("\nTest 2 : pour a = 25 et b = 0\n");
    division_euclidienne(25, 0);
    printf("\nTest 3 : pour a = 0 et b = 10\n");
    division_euclidienne(0, 10);
    printf("\nTest 4 : pour a = 0 et b = 0\n");
    division_euclidienne(0, 0);
    printf("\nTest 5 : pour a = 25 et b = 1\n");
    division_euclidienne(25, 1);
}

/* Conseils pour créer vos fonctions test :
- Il faut tester les fonctions avec des valeurs extrêmes.
- Il faut afficher les résultats des tests et bien préciser les paramètres.
- Parfois, vous allez rencontrer des erreurs de compilation et vous allez devoir les corriger.
C'est pour ça qu'il faut bien tester vos fonctions.
*/

int main(void) {
    printf("Question 2 :\n");
    /* question2(); */

    printf("\nQuestion 3 :\n");
    /* printf("La moyenne est : %f\n", moyenne_stdin()); */

    printf("\nQuestion 4 :\n");
    test_division_euclidienne();
    return 0;
}

/* A retenir :
- EOF signifie End Of File, c'est la fin du fichier.
- '\n' signifie retour à la ligne.
- On lit le caractère et on vérifie qu'il n'est pas égal à la fin du fichier et qu'il n'est pas égal à un retour à la ligne.
- On peut utiliser la méthode pour transformer un type en un autre type qui est plus grand.
- int -> float
- int -> double
- float -> double
*/
