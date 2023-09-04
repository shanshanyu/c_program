#include <stdio.h>
#include <stdlib.h>

int main(){
  int age;

  printf("input your age: ");
  scanf("%d",&age);

  if (age >= 18){
    printf("你已经是成年人了\n");
  }else if (age < 18 && age > 0){
    printf("你还是个孩子\n");
  }else{
    printf("输入有误，清重新输入");
  }


  exit(0);
}
