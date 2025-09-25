#include <stdio.h>
int main() {
    int lignes, colonnes;
    int i, j;
    printf("Entrez le nombre de lignes de la matrice : ");
    scanf("%d", &i);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &j);

    int A[i][j], B[i][j], C[i][j];
    printf("Entrez les éléments de la matrice A :\n");
    for(i = 0; i < lignes; i++)
        for(j = 0; j < colonnes; j++) {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    printf("Entrez les éléments de la matrice B :\n");
    for(i = 0; i < i; i++)
        for(j = 0; j < j; j++) {
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }

    for(i = 0; i < i; i++)
        for(j = 0; j < j; j++)
            C[i][j] = A[i][j] + B[i][j];
    printf("\nSomme des matrices A + B :\n");
    for(i = 0; i < i; i++) {
        for(j = 0; j < j; j++)
            printf("%d\t", C[i][j]);
        printf("\n");
    }

    return 0;
}