#include <stdio.h>

int lerIdade() {
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    return idade;
}

void classificar(int idade, char categoria[]) {
    if (idade >= 5 && idade <= 7) {
        sprintf(categoria, "Infantil A");
    } else if (idade >= 8 && idade <= 10) {
        sprintf(categoria, "Infantil B");
    } else if (idade >= 11 && idade <= 13) {
        sprintf(categoria, "Juvenil A");
    } else if (idade >= 14 && idade <= 17) {
        sprintf(categoria, "Juvenil B");
    } else if (idade >= 18) {
        sprintf(categoria, "Adulto");
    } else {
        sprintf(categoria, "Idade invalida");
    }
}

void mostrarResultado(int idade, char categoria[]) {
    printf("Idade: %d anos - Categoria: %s\n", idade, categoria);
}

int main() {
    int idade = lerIdade();
    char categoria[20];
    classificar(idade, categoria);
    mostrarResultado(idade, categoria);
    return 0;
}

