#include "../s21_matrix.h"

void s21_remove_matrix(matrix_t *A) {
  if (!A || !A->matrix) return;

  for (int i = 0; i < A->rows; i++) free(A->matrix[i]);
  free(A->matrix);

  A->matrix = NULL;
  A->columns = 0;
  A->rows = 0;
}