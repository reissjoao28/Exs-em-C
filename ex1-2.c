#include <stdio.h>

void avaliar_aluno(float media, float frequencia) {
    if (frequencia < 75) {
        printf("Situacao: reprovado\n");
    } else if (frequencia >= 75 && media >= 7.5) {
        printf("Situacao: aprovado\n");
    } else if (frequencia >= 75 && media < 7.5) {
        printf("Situacao: de exame\n");
    }
}

int main() {
    float media, frequencia;
    
    printf("Digite a media do aluno (0.0 a 10.0): ");
    scanf("%f", &media);
    
    printf("Digite a porcentagem de frequencia (0 a 100%%): ");
    scanf("%f", &frequencia);
    
    printf("RESULTADO DA AVALIACAO\n");
    printf("Média: %.1f\n", media);
    printf("Frequência: %.1f%%\n", frequencia);
    
    avaliar_aluno(media, frequencia);
    
    return 0;
}
