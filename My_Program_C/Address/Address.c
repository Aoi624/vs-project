#include <stdio.h>
int main(){
    int a = 1;
    int *p =&a;//变量p存放地址
    printf("%p\n",&a);
    printf("%p\n",p);
    *p=20;//p的解引用，对地址对应的值进行操作
    printf("%d\n",p);//不正确的调用方式
    printf("%d\n",*p);
    return 0;
}