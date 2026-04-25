#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
    int rows;
    int cols;
    float** data;
} Matrix;


Matrix create_matrix(int rows, int cols);
void free_matrix(Matrix* m);
Matrix add_matrices(Matrix* m1, Matrix* m2);
Matrix subtract_matrices(Matrix* m1, Matrix* m2);
void print_matrix(Matrix* m);

#endif