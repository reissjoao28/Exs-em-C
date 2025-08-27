#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int sortear() {
    srand(time(NULL));
    return rand() % 100 + 1;
}

int ler() {
    int palpite;
    do {
        printf("Digite um numero entre 1 e 100: ");
        scanf("%d", &palpite);
        if (palpite < 1 || palpite > 100) {
            printf("Valor invalido! Tente novamente.\n");
        }
    } while (palpite < 1 || palpite > 100);
    return palpite;
}

void verificar(int palpite, int numero) {
    if (palpite == numero) {
        printf("Parabens!!! Voce acertou!\n");
    } else if (palpite < numero) {
        printf("Voce chutou muito baixo! O valor correto e %d.\n", numero);
    } else {
        printf("Voce chutou muito alto! O valor correto e %d.\n", numero);
    }
}

int main() {
    int numero = sortear();
    int palpite = ler();
    verificar(palpite, numero);
    return 0;
}

