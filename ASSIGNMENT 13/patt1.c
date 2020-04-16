#include <stdio.h>
int main()
{
  int n=5, c, row, t = 1;

  for (row = 1; row <= n; row++) {
    for (c = 1; c <= n - row; c++)
      printf(" ");

    t = row;

    for (c = 1; c <= row; c++) {
      printf("%d", t);
      t++;
    }

    t = t - 2;

    for (c = 1 ; c < row; c++) {
      printf("%d", t);
      t--;
    }

    printf("\n");
  }

  return 0;
}