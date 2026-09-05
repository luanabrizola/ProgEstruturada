#include <stdio.h>
int main(){
    int volt;
    printf("Digite o valor da tensao: ");
    scanf("%d", &volt);
    printf("%d\n", volt>=110 && volt<=220);
    return 0;
} 
