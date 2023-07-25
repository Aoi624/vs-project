#include <stdio.h>
#include <string.h>
int main(){

   char arr1[] = "abc";//四个字符'a' 'b'  'c' '\0'结束标志不占内容，值为0
   char arr2[] = {'a','b','c'};//缺少结束标志
   //char arr2[] = {'a','b','c',0};
   //char arr2[] = {'a','b','c','\0'};
    printf("%s\n",arr1);
    printf("%s\n",arr2);
    printf("%d\n",strlen(arr1));
    printf("%d\n",strlen(arr2));
    return 0;
}