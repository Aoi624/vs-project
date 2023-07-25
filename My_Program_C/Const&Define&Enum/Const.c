#include <stdio.h>

int main(){

  const int a = 10;//此时的a是常变量

  //int arr[a]={0};//不被当常量使用
  //a = 20;//不可以修改a的值

    printf("%d",a);
    return 0;
}