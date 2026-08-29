    #include <stdio.h>

    int main(){
        int x, z;
        float y;
        printf("Digite um inteiro: ");
        scanf("%d", &x);
        printf("Digite um float: ");
        scanf("%f", &y);
        printf("Digite dois inteiros: ");
        scanf("%d%d", &x, &z);
        printf("Digite um inteiro e um float: ");
        scanf("%d%f", &x, &y);
        scanf("%d %d", &x, &z);
        return 0;
    }