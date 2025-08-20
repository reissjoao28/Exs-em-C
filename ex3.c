#include <stdio.h>

int main(){
    float celsius,fah;

    printf("Digite a temperatura em celsius: ");
    scanf("%f", &celsius);

    fah = (1.8 * celsius) + 32;

    printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.\n",celsius,fah);

    return 0;
}