#include<stdio.h>

int main() {
  // Definimos una matriz de 4x4 enteros
  int matrix[4][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;


  // Obtener el tamaño total de la matriz en bytes
  int rowslength = sizeof(matrix);
  // Obtener el tamaño de una fila de la matriz en bytes
  int columnslength = sizeof(matrix[0]);

  printf("Task1:\n");
  // Imprimir el tamaño total de la matriz (en bytes)
  printf("%d\n", rowslength);  // Debería imprimir 64 bytes
  // Imprimir el tamaño de una fila de la matriz (en bytes)
  printf("%d\n", columnslength);  // Debería imprimir 16 bytes

  // Calcular el número de filas de la matriz
  // Dividimos el tamaño total de la matriz por el tamaño de una fila
  int rowDimension = sizeof(matrix) / sizeof(matrix[0]);
  // Calcular el número de columnas de la matriz
  // Dividimos el tamaño de una fila por el tamaño de un entero
  int columnDimension = sizeof(matrix[0]) / sizeof(int);

  printf("\nTask2:\n");
  // Imprimir el número de filas
  printf("%d\n", rowDimension);  // Debería imprimir 4
  // Imprimir el número de columnas
  printf("%d\n", columnDimension);  // Debería imprimir 4

  return 0;
}
