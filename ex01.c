#include <stdio.h>
int main(void) {
  int i;
  char are[11] = "hello world";
  for (i = 0; i < 12; i++) {
    printf("%c", are[i]);
  }
  return 0;
}