#include <stdio.h>
#include <stdbool.h>

bool verifica_triangulo(float a, float b, float c) {
    if (a < b + c && b < a + c && c < a + b) {
        return true;
    } else {
        return false;
    }
}

void apresenta_resultado(bool existe) {
    if (existe) {
        printf("E possivel formar um triangulo com esses lados.\n");
    } else {
        printf("Nao e possível formar um triangulo com esses lados.\n");
    }
}

int main() {
    float a, b, c;

    printf("Digite o valor do lado a: ");
    scanf("%f", &a);
    printf("Digite o valor do lado b: ");
    scanf("%f", &b);
    printf("Digite o valor do lado c: ");
    scanf("%f", &c);

    bool existe = verifica_triangulo(a, b, c);
    apresenta_resultado(existe);

    return 0;
}

