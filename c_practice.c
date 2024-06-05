#include<stdio.h>

int main() {
  // Definimos una matriz de 4x4 enteros
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;


  // Obtener el tamaño total de la matriz en bytes
  int rowslength = sizeof(matrix);
  // Obtener el tamaño de una fila de la matriz en bytes
  int columnslength = sizeof(matrix[0]);
  // Obtener el tamaño de un entero en bytes
  int entero = sizeof(int);

  printf("Tamaño total de la matriz = %d\n", rowslength); // 64
  printf("Tamaño de una fila = %d\n", columnslength); // 16
  printf("Tamaño de un entero = %d\n", entero); // 4

  // Calcular el número de filas de la matriz
  // ~Dividimos el tamaño total de la matriz por el tamaño de una fila
  int rowDimension = sizeof(matrix) / sizeof(matrix[0]);

  // Calcular el número de columnas de la matriz
  // ~Dividimos el tamaño de una fila por el tamaño de un entero
  int columnDimension = sizeof(matrix[0]) / sizeof(int);


  printf("Número de filas = %d\n", rowDimension);  // 4
  printf("Número de columnas = %d\n", columnDimension);  // 4

  return 0;
}

/*

~Output de una matrix (?)x4:

    Tamaño total de la matriz = 64
    Tamaño de una fila = 16
    Tamaño de un entero = 4
    Número de filas = 4
    Número de columnas = 4


~Output de una matrix (?)x5:

    Tamaño total de la matriz = 80
    Tamaño de una fila = 16
    Tamaño de un entero = 4
    Número de filas = 5
    Número de columnas = 4

*/