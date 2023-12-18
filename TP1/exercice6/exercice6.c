#include <stdio.h>
#include <limits.h>

/* 3. Écrire une fonction de signature« int somme(int a, int b) » qui renvoie a+b si possible et -1 en cas de
débordement. On utilisera la valeur INT_MAX de la bibliothèque limits.h (qu’il faut inclure en début de fichier
de la même façon que l’on inclut déjà stdio.h). */

int somme(int a, int b) {
    if (a > INT_MAX - b) {
        return -1;
    }
    return a + b;
}

/* 1. Écrire, avec une boucle (et non en récursif) une fonction de signature « int fibo_naif(int n) » calculant le 𝑛^𝑒 élèment de la suite de Fibonacci.*/

int fibo_naif(int n) {
    int i;
    int a = 0; /* F(0) = 0 */
    int b = 1; /* F(1) = 1 */
    int tmp;

    if (n == 0) {
        return a; /* F(0) = 0 */
    }

    if (n == 1) {
        return b; /* F(1) = 1 */
    }

    for (i = 2; i <= n; i++) {
        tmp = a + b;
        a = b;
        b = tmp;
    }

    return b;
}

/* 2. Afficher la valeur pour n=50. Qu’observez-vous? Que s’est-il passé ?*/

int main(void) {
    printf("%d\n", fibo_naif(50));
    return 0;
}

/* On observe que la valeur affichée est négative.
-298632863
*/
