#include <stdio.h>

void increment(void);

static int count = 10;

int main() {

  while(count--) {
    increment();
  };

  return 0;
}

void increment(void) {
  static int a = 0;

  a++;

  printf("a: %d, count: %d\n", a, count);
}