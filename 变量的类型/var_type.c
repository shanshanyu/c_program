#include <stdio.h>
#include <stdlib.h>

char s[] = "abcd";  //s是全局变量   具有外部链接的静态

static char s1[] = "1234";  //s1 是全局变量    具有内部链接的静态

void test(int a);  //a是代码块作用域


int main(){
    int a = 1;   
    short b = 2;
    float c = 1.2;
    double d = 2.4;

    char e = 'e';
    char s2[]  = "s2";   //字符串   数组

    enum key{A,B,C};
    enum key f = A;   //枚举类型

    struct key1{   /*定义结构体类型*/
        int a;
        float b;
        char c;
    };
    struct key1 g;   //创建结构变量
    g.a = 1,   /*结构变量初始化*/
    g.b = 1.2;
    g.c = 'c';

    union key2{
        int a;
        float b;
    };
    union key2 h;
    h.a = 1;

    int *p = &a;
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %f\n",c);
    printf("d.a = %d\n",g.a);
    printf("h.a = %d\n",h.a);
    printf("*p = %d\n",*p);
  
    test(a);

    return 0;
}



void test(int a){  //a 是代码块作用域
    printf("a = %d\n",a);

}
