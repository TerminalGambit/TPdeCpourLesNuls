/* Écrivez un programme qui affiche les nombre de 1 à 100 à raison de 10 par lignes. Les nombres devront être alignés
correctement. */

void affiche_1_a_100(void) {
    int i;
    for (i = 1; i <= 100; i++) {
        printf("%3d ", i);
        if (i % 10 == 0) {
            printf("\n");
        }
    }
}

int main(void) {
    affiche_1_a_100();
    return 0;
}
