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

  unsigned long o = (unsigned long)(&((struct devices*)0)->list); // 计算偏移量
  devices * actualBAddress = (devices*)((char *)a.list.next - o); // 解决不同类型不同步长的问题，char 类型是 1 字节

  printf("%p\n", &b);
  printf("%p\n", actualBAddress);
  printf("%d\n", actualBAddress->first);
  return 0;
}