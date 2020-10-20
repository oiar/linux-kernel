#include <stdio.h>
#include <stddef.h>

typedef struct parent {
  int a;
} parent;

int ref(struct parent *obj) {
  return obj->a;
}

typedef struct child {
  parent par;
  int b;
} child;

int main(void) {
  // parent p = {1};
  child c = {2,3};

  printf("%d\n", ref((parent*)&c));

  parent *p = (parent*)&c;

  printf("%d\n", *p);
  // printf("%d\n", c);
}