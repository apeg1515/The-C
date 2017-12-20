#include <stdio.h>

int main () {
  int c, nl;
  nl = 0;
  while((getchar()) != EOF) {
    if (c == `\n`) {
      printf("%d\n", nl);
    }
  }
}
