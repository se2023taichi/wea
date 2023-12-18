#include <stdio.h>
int main(void) {
  int i, n;
  char are[11] = "hello world";
  for (i = 0; i < 12; i++) {
    printf("%c", are[i]);
  }
  printf("\n");
  printf("%d\n", i);
  return 0;
}