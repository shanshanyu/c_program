#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,sum;
  sum = 0;

  while(i <= 100){
    sum += i;
    i++;
  }

  printf("sum = %d\n",sum);
  exit(0);
}
