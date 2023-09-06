#include <stdio.h>
#include <stdlib.h>


int main(){
  int i,sum;
  sum = 0;


  for(i = 0; i <= 100; i++){
    sum += i;
  }

  printf("sum = %d\n",sum);
  exit(0);
}
