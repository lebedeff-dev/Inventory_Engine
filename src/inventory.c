#include <stdio.h>

/*
 * Motor de processamento de estoque (ERP / Supply Chain).
 * Compara a materia-prima disponivel com a exigida para manufaturar um
 * veiculo e gera um relatorio de deficit de inventario.
 */

#define TOTAL_MATERIAIS 2

typedef struct {
    char nome[50];
    int quantidade;
} Recurso;

/*
 * Emite o relatorio de um unico material, apontando alerta de logistica
 * quando o estoque nao cobre a necessidade de producao.
 */
static void relatarMaterial(Recurso emEstoque, Recurso necessario) {
    int deficit = necessario.quantidade - emEstoque.quantidade;

    printf("Material: %s | Em Estoque: %d | Necessario: %d\n",
           emEstoque.nome, emEstoque.quantidade, necessario.quantidade);

    if (deficit > 0) {
        printf(" -> ALERTA DE LOGISTICA: Faltam %d unidades de %s.\n\n",
               deficit, emEstoque.nome);
    } else {
        printf(" -> OK: Quantidade suficiente para producao.\n\n");
    }
}

int main(void) {
    Recurso estoque[TOTAL_MATERIAIS] = {{"Aco", 50}, {"Plastico", 20}};
    Recurso custoVeiculo[TOTAL_MATERIAIS] = {{"Aco", 100}, {"Plastico", 30}};

    printf("--- Motor de Processamento de Estoque (ERP/Logistica) ---\n");
    printf("Objetivo de Manufatura: Veiculo de Exploracao\n\n");

    for (int i = 0; i < TOTAL_MATERIAIS; i++) {
        relatarMaterial(estoque[i], custoVeiculo[i]);
    }

    return 0;
}
