#include<stdio.h>

int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}}; 
  int sum = 0;

  // Checkpoint 1 code goes here.
  int num = matrix[3][1];
  int rowslength = sizeof(matrix);
  int columnslength = sizeof(matrix[0]);
  printf("%d\n\nTask2:\n", num);
  printf("%d\n", rowslength);
  printf("%d\n", columnslength);

  // check size
  int rowDimension = sizeof(matrix)/sizeof(matrix[0]);
  int columnDimension = sizeof(matrix[0])/sizeof(int);
  printf("%d\n\nTask3:\n", num);
  printf("%d\n", rowDimension);
  printf("%d\n", columnDimension);
  
  /* 
  Checkpoint 2 code goes here.
   int sum;
  for (i = 0; sizeof[], i++) {
    for (f = 0: size; i++) {

    }
  }
} */
return 0;
}