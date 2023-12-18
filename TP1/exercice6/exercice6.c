/* 1. Écrire, avec une boucle (et non en récursif) une fonction de signature « int fibo_naif(int n) » calculant le 𝑛^𝑒 élèment de la suite de Fibonacci.*/

#include <stdio.h>

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
    printf(fibo_naif(50));
    return 0;
}
