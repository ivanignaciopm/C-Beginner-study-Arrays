#include<stdio.h>

int main() {
  // Define a 4x4 integer matrix
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 

  // Get the total size of the matrix in bytes
  int totalSize = sizeof(matrix);
  // Get the size of one row of the matrix in bytes
  int rowSize = sizeof(matrix[0]);
  // Get the size of an integer in bytes
  int integerSize = sizeof(int);

  printf("Total size of the matrix = %d\n", totalSize); // 64
  printf("Size of one row = %d\n", rowSize); // 16
  printf("Size of an integer = %d\n", integerSize); // 4

  // Calculate the number of rows in the matrix
  // ~ Divide the total size of the matrix by the size of one row
  int numRows = sizeof(matrix) / sizeof(matrix[0]);

  // Calculate the number of columns in the matrix
  // ~ Divide the size of one row by the size of an integer
  int numColumns = sizeof(matrix[0]) / sizeof(int);

  printf("Number of rows = %d\n", numRows);  // 4
  printf("Number of columns = %d\n", numColumns);  // 4

  return 0;
}


/*

~Output for a (?)x4 matrix:

    Total size of the matrix = 64
    Size of one row = 16
    Size of an integer = 4
    Number of rows = 4
    Number of columns = 4


~Output for a (?)x5 matrix:

    Total size of the matrix = 80
    Size of one row = 20
    Size of an integer = 4
    Number of rows = 4
    Number of columns = 5

*/
