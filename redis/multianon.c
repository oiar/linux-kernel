#include <stdio.h>

typedef struct {
  int count;
} chair;

typedef struct {
  int count;
} table;

int main(void) {
  chair c = {2};
  table t = {5};
  // c.count = 2;
  // t.count = 5;
  printf("%d\n", c.count);
  printf("%d\n", t.count);
}