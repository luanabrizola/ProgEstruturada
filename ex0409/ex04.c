#include <stdio.h>
int main(){
    int x=10;
    x = x + 5;
    x = x*2;
    printf("%d\n", x);
    printf("%d\n", x++);
    printf("%d\n", x);


    return 0;
}