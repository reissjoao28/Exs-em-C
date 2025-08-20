#include <stdio.h>
#include <math.h>

int main(){
    float cat1,cat2,hip;

    printf("Digite o primeito cateto: ");
    scanf("%f",&cat1);

    printf("Digite o segundo cateto: ");
    scanf("%f", &cat2);

    hip = sqrt((cat1 * cat1) + (cat2 * cat2));

    printf("Um triangulo retangulo com lados %.2f e %.2f tem uma hipotenusa igual a %.2f\n",cat1,cat2,hip);

    return 0;
}