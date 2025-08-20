#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SECOES 6  // Corrigido: deve ser valor, não array
#define DIAS 7    // Corrigido: deve ser valor, não array

// Função 1: Corrigida completamente
void calcular_total_semanal(int matriz[SECOES][DIAS], int totais[SECOES], int n_secoes){
    for (int i = 0; i < n_secoes; i++){
        totais[i] = 0;  // Corrigido: sintaxe de atribuição
        for (int j = 0; j < DIAS; j++){
            totais[i] += matriz[i][j];
        }
    }
}

// Função 2: Corrigida completamente
int encontrar_maior_movimentacao(int totais[SECOES], int n_secoes){
    int indice_maior = 0;  // Corrigido: era 'o' em vez de 0
    for(int i = 1; i < n_secoes; i++){  // Corrigido: começa do 1
        if (totais[i] > totais[indice_maior]) {  // Corrigido: nome da variável
            indice_maior = i;
        }
    }
    return indice_maior;
}

// Função 3: Busca o dia com maior entrada em uma seção específica
int buscar_dia_mais_movimentado(int matriz[SECOES][DIAS], int indice_secao, int num_colunas) {
    int indice_dia_maior = 0;
    for (int j = 1; j < num_colunas; j++) {
        if (matriz[indice_secao][j] > matriz[indice_secao][indice_dia_maior]) {
            indice_dia_maior = j;
        }
    }
    return indice_dia_maior;
}

// Função auxiliar para preencher a matriz com dados aleatórios (para teste)
void gerar_dados_teste(int matriz[SECOES][DIAS]) {
    srand(time(NULL));
    for (int i = 0; i < SECOES; i++) {
        for (int j = 0; j < DIAS; j++) {
            matriz[i][j] = rand() % 100 + 10; // Valores entre 10 e 109
        }
    }
}

// Função auxiliar para imprimir a matriz
void imprimir_matriz(int matriz[SECOES][DIAS]) {
    printf("\nDados do Armazém (Seções x Dias da Semana):\n");
    printf("        Dom  Seg  Ter  Qua  Qui  Sex  Sab\n");  // Corrigido: espaçamento
    printf("      +----+----+----+----+----+----+----+\n");
    for (int i = 0; i < SECOES; i++) {
        printf("Seção %d|", i + 1);
        for (int j = 0; j < DIAS; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("      +----+----+----+----+----+----+----+\n");
}

// Função auxiliar para imprimir os totais semanais
void imprimir_totais(int totais[SECOES]) {
    printf("\nTotais Semanais por Seção:\n");
    for (int i = 0; i < SECOES; i++) {
        printf("Seção %d: %d itens\n", i + 1, totais[i]);
    }
}

int main() {
    int matriz[SECOES][DIAS];
    int totais[SECOES];
    char dias_semana[DIAS][4] = {"Dom", "Seg", "Ter", "Qua", "Qui", "Sex", "Sab"};
    
    // Para demonstração, vamos gerar dados de teste
    printf("=== SISTEMA DE CONTROLE DE ARMAZÉM INTELIGENTE ===\n");
    printf("Gerando dados de teste para %d seções e %d dias...\n", SECOES, DIAS);
    
    gerar_dados_teste(matriz);
    imprimir_matriz(matriz);
    
    // 1. Calcular totais semanais
    calcular_total_semanal(matriz, totais, SECOES);
    imprimir_totais(totais);
    
    // 2. Encontrar seção com maior movimentação
    int secao_maior_movimento = encontrar_maior_movimentacao(totais, SECOES);
    printf("\n>>> Seção com maior movimentação semanal: Seção %d (%d itens)\n",
           secao_maior_movimento + 1, totais[secao_maior_movimento]);
    
    // 3. Buscar dia mais movimentado na seção com maior movimento
    int dia_mais_movimentado = buscar_dia_mais_movimentado(matriz, secao_maior_movimento, DIAS);
    printf(">>> Dia mais movimentado na Seção %d: %s (%d itens)\n",
           secao_maior_movimento + 1,
           dias_semana[dia_mais_movimentado],
           matriz[secao_maior_movimento][dia_mais_movimentado]);
    
    // Análise adicional: mostrar o dia mais movimentado de cada seção
    printf("\n=== ANÁLISE DETALHADA ===\n");
    printf("Dia mais movimentado por seção:\n");
    for (int i = 0; i < SECOES; i++) {
        int dia = buscar_dia_mais_movimentado(matriz, i, DIAS);
        printf("Seção %d: %s com %d itens\n",
               i + 1, dias_semana[dia], matriz[i][dia]);
    }
    
    return 0;
}