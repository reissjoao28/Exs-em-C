#include <stdio.h>

int main(){
    float n1,n2;
    float soma,sub,mult,div;

    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f",&n2);

    soma = n1 + n2;
    printf("O valor da soma e: %.2f\n",soma);

    sub = n1 - n2;
    printf("O valor da subtracao e: %.2f\n", sub);

    mult = n1 * n2;
    printf("O valor da multiplicacao e: %.2f\n", mult);

    div = n1 / n2;
    printf("O valor da divisao e: %.2f\n", div);

    return 0;
}
