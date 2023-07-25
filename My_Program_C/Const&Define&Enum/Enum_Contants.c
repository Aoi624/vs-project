#include <stdio.h>
enum Sex{//枚举类型
    Male,
    Female,
    Secret,
};
// Male,Female,Secret枚举常量
int main(){

  enum Sex s = Male;
   printf("%d",Male);
   printf("%d",Female);
   printf("%d",Secret);
   printf("%d",s);
    return 0;
}