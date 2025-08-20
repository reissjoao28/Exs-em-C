#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int eh_palindromo(char palavra[], int inicio, int fim) {
    if (inicio >= fim) return 1;           // Caso base: chegou ao centro
    if (palavra[inicio] != palavra[fim]) return 0;  // Diferentes: não é palíndromo
    return eh_palindromo(palavra, inicio + 1, fim - 1);  // Recursão: próximos caracteres
}

int main(){
    char palavra[100];
    int inicio,fim;
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    fim = strlen(palavra) - 1;  // Último índice da palavra
    inicio = 0;  // Primeiro índice da palavra
    if (eh_palindromo(palavra, inicio, fim)) {
        printf("A palavra '%s' é um palíndromo.\n", palavra);
    } else {
        printf("A palavra '%s' não é um palíndromo.\n", palavra);
    }
    return 0;

}