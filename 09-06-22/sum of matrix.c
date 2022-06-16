#include <stdio.h>
int main() {
  int r, c, a[10][10], b[10][10], sum[10][10], i, j;
  printf("Enter rows : ");
  scanf("%d", &r);
  printf("Enter col: ");
  scanf("%d", &c);

//1st matrix
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &a[i][j]);
    }

//2nd matrix
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &b[i][j]);
    }

  // adding  matrices
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == c - 1) {
        printf("\n\n");
      }
    }

  return 0;
}


