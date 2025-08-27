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

int verificar(int palpite, int numero) {
    if (palpite == numero) {
        printf("Parabens!!! Voce acertou!\n");
        return 1;
    } else if (palpite < numero) {
        printf("Voce chutou muito baixo!\n");
    } else {
        printf("Voce chutou muito alto!\n");
    }
    return 0;
}

int main() {
    int numero = sortear();
    int palpite, tentativas = 0;
    int acertou = 0;

    while (!acertou) {
        palpite = ler();
        tentativas++;
        acertou = verificar(palpite, numero);
    }

    printf("Voce precisou de %d tentativa(s) para acertar.\n", tentativas);

    return 0;
}

