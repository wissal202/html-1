#include <stdio.h>
#include <stdlib.h>

int main()
{
     int A,B,C,temp;
      // Demander à l'utilisateur d'entrer les valeurs de A, B et C
    printf("Entrez la valeur de A : ");
    scanf("%d", &A);
    printf("Entrez la valeur de B : ");
    scanf("%d", &B);
    printf("Entrez la valeur de C : ");
    scanf("%d", &C);

    // Afficher les valeurs initiales
    printf("Avant permutation : A = %d, B = %d, C = %d\n", A, B, C);

    // Effectuer la permutation en utilisant une variable temporaire
    temp = A;
    A = C;
    C = B;
    B = temp;

    // Afficher les valeurs après permutation
    printf("Après permutation : A = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}

