#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo\n");

    // Declaração das variáveis
    char codigo_da_cidade;
    char nome_da_cidade[20];
    int populacao;
    float area;
    float PIB;
    int quantidade_pontos_turisticos;

    // Novas variáveis calculadas
    float densidade_populacional;
    float pib_per_capita;

    // Entrada de dados
    printf("\nDigite o código da cidade: ");
    scanf(" %c", &codigo_da_cidade);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_da_cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &quantidade_pontos_turisticos);

    // Cálculos
    densidade_populacional = populacao / area;
    pib_per_capita = PIB / populacao;

    // Saída de dados
    printf("\n--- Dados da Cidade Cadastrada ---\n");
    printf("Código da Cidade: %c\n", codigo_da_cidade);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área da Cidade: %.2f km²\n", area);
    printf("PIB da Cidade: %.2f milhões\n", PIB);
    printf("Quantidade de Pontos Turísticos: %d\n", quantidade_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita);

    return 0;
}
