#include <stdio.h>
#include "matrix.h"

int main() {
    Matrix A = create_matrix(2, 2);
    Matrix B = create_matrix(2, 2);

    A.data[0][0] = 10; A.data[0][1] = 20;
    A.data[1][0] = 30; A.data[1][1] = 40;

    B.data[0][0] = 1; B.data[0][1] = 2;
    B.data[1][0] = 3; B.data[1][1] = 4;

    printf("Matrix A:\n");
    print_matrix(&A);

    printf("\nMatrix B:\n");
    print_matrix(&B);

    Matrix sum = add_matrices(&A, &B);
    printf("\nSum (A + B):\n");
    print_matrix(&sum);

    Matrix diff = subtract_matrices(&A, &B);
    printf("\nDifference (A - B):\n");
    print_matrix(&diff);

    free_matrix(&A);
    free_matrix(&B);
    free_matrix(&sum);
    free_matrix(&diff);

    return 0;
}