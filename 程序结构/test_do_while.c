#include <stdio.h>
#include <stdlib.h>


int main(){
  int i,sum;
  sum = 0;

  do{
    sum += i;
    i++;
  }while(i <= 100);

  printf("sum = %d\n",sum);   
 
  /*
 *do..while 和 while 没什么区别，只不过 do..while 先执行一次，while 是先判断
 *
 */

  exit(0);
}
