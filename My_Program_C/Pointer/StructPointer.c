#include <stdio.h>
#include <string.h>
struct Book
{
    char Name[20];
    int Price;
};

int main(){
struct Book b1={"不可以涩涩",1};
struct Book* bp=&b1;
//结构体指针的两种使用方法
    printf("%s\n",(*bp).Name);
    printf("%d\n",(*bp).Price);
    printf("%s\n",bp->Name);
    printf("%d\n",bp->Price);
    return 0;
}