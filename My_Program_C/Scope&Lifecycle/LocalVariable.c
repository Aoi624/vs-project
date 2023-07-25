#include <stdio.h>
int main(){
  extern int g_var;
    printf("%d",g_var);
    return 0;
}