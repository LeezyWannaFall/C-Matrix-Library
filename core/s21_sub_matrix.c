#include "../s21_matrix.h"

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  if (!A || !A->matrix || !B || !B->matrix || !result) return INCORRECT_MATRIX;
  if (A->rows != B->rows || A->columns != B->columns) return CALCULATION_ERROR;
  if (s21_create_matrix(A->rows, A->columns, result) != OK) return INCORRECT_MATRIX;

  for (int i = 0; i < A->rows; i++) {
      for (int j = 0; j < A->columns; j++) {
          result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
      }
  }

  return OK;
}