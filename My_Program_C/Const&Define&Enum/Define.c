#include <stdio.h>
#define A 10
#define MAX(X,Y) (X>Y?X:Y)
int main(){

  int arr[A]={0};//是常量，已经预定义好的

    printf("%d\n",A);
    printf("%d\n",MAX(2,3));

    return 0;
}