
#include<stdio.h>
#include "foo.h"

// This is Stewart's version

int main (){
  int k = 20;

  printf("This is a very short C program\n");
  printf("%d\n", foo(k));
  k = foo(k);
  printf("%d\n", foo(k));

  return 0;
  
}
