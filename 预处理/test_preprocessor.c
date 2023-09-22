#include <stdio.h>  //文件包含
#include <stdlib.h>


#define NAME "tom"  //宏定义

#ifdef NAME
  int a = 3;
#else
  int a = 4;
#endif


int main(){
  printf("a = %d\n",a);
  exit(0);
}
