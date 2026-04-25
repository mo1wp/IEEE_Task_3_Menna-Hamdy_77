#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

Matrix create_matrix(int rows, int cols) {
    Matrix m;
    m.rows = rows;
    m.cols = cols;
    m.data = (float**)malloc(rows * sizeof(float*));
    for (int i = 0; i < rows; i++) {
        m.data[i] = (float*)malloc(cols * sizeof(float));
    }
    return m;
}

void free_matrix(Matrix* m) {
    for (int i = 0; i < m->rows; i++) {
        free(m->data[i]);
    }
    free(m->data);
}

Matrix add_matrices(Matrix* m1, Matrix* m2) {
    Matrix result = create_matrix(m1->rows, m1->cols);
    for (int i = 0; i < m1->rows; i++) {
        for (int j = 0; j < m1->cols; j++) {
            result.data[i][j] = m1->data[i][j] + m2->data[i][j];
        }
    }
    return result;
}

Matrix subtract_matrices(Matrix* m1, Matrix* m2) {
    Matrix result = create_matrix(m1->rows, m1->cols);
    for (int i = 0; i < m1->rows; i++) {
        for (int j = 0; j < m1->cols; j++) {
            result.data[i][j] = m1->data[i][j] - m2->data[i][j];
        }
    }
    return result;
}

void print_matrix(Matrix* m) {
    for (int i = 0; i < m->rows; i++) {
        for (int j = 0; j < m->cols; j++) {
            printf("%.2f\t", m->data[i][j]);
        }
        printf("\n");
    }
}