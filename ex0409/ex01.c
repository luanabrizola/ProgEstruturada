#include <stdio.h>

int main(){
    int anoNascimento;
    float altura;
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("Voce nasceu em: %d, tem %.2f m de altura e tera %d anos em 2050\n", anoNascimento,altura, 2050 - anoNascimento);


    return 0;
}