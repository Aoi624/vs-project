#include <stdio.h>
#include <string.h>
int main(){
  int a = 3;//0000····0011
  int b = 5;//0000····0101
  int c = 0;
  //按位异或
   c = a^b;//0000····0110
    printf("%d\n",c);
  //按位左移
   a <<=1;//0000····0110
   printf("%d\n",a);
  //按位右移
   c = b>>2;//0000····0001
    printf("%d\n",b);
    printf("%d\n",c);
  //条件操作符
  c=(a>b?a:b);
    printf("%d\n",c);
    return 0;
}