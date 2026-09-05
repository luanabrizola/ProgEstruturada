#include <stdio.h>
int main(){
    int x, y, z;
    float media;
    printf("Digite os valores das temperaturas: ");
    scanf("%d %d %d", &x, &y, &z);
    media = (x + y + z) / 3.0;
    printf("A media das temperaturas e: %.2f\n", media);
    return 0;
}