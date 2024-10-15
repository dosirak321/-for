#include <stdio.h>

int main(void) {
  int n;
  int m=0;
  for (n=0; n<7; n++) {
    for (m=0; m<6-n; m++)
      printf(" ");
    for (m=0; m<=n; m++)
      printf("*");
    printf("\n");
  }
  return 0;
}