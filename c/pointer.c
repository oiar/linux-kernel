#include <stdio.h>

int main() {
  int a = 10;
  int *p;
  p = &a;

  printf("变量 a 的地址：%p\n", p);
  printf("指针 p 的地址：%p\n", &p);
  printf("变量 a 的值：%d\n", *p);
  return 0;
};