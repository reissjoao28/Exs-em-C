#include <stdio.h>
int main(){
    float alt,peso;
    float imc;

    printf("DIgite sua altura: ");
    scanf("%f", &alt);

    printf("Digite seu peso: ");
    scanf("%f",&peso);

    imc = peso / (alt * alt);

    printf("O IMC de um pessoa com peso %f Kg e altura %f é igual a %f.\n",peso,alt,imc);

    return 0;
}