#include <stdio.h>
  
typedef struct person {  
  char    *name;  
  char     gender;  
  int      age;  
  int      weight;  
  struct info {  
    int  area_code;  
    long phone_number;  
  } info; 
} person;  
  
int main(void) {
  person p;
  p.info.area_code = 2;
  p.info.phone_number = 3286471;
  printf("%ld\n", p.info.phone_number);
} 
