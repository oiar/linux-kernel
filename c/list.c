#include <stdio.h>
#include <stddef.h>

typedef struct List {
    struct List *next;
    struct List *prev;
} List;

typedef struct devices {
    int first;
    struct List list;
    int second;
} devices;


int main() {
  devices a;
  devices b;
  List listA;
  List listB;

  a.first = 1;
  a.list = listA;
  b.first = 2;
  b.list = listB;

  a.list.next = &b.list;
  b.list.prev = &a.list;

  int o = (int)(&((struct devices*)0)->list);
  devices * actualBAddress = (devices*)((char *)a.list.next - o);

  printf("%p\n", &b);
  printf("%p\n", actualBAddress);
  printf("%d\n", actualBAddress->first);
  return 0;
}