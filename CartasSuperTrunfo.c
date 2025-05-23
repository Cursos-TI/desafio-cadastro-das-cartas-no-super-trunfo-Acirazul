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

    float densidade_populacional;
    float pib_per_capita; // Novas variáveis calculadas

    printf("Digite o código da cidade: \n");
    scanf(" %c", &codigo_da_cidade);  // Entrada de dados

    printf("Digite o nome da cidade: \n");
    scanf(" %d", &nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB (em milhões): \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidade_pontos_turisticos);
   
    densidade_populacional = populacao / area;
    pib_per_capita = PIB / populacao;  // Cálculos

    
    printf("\n--- Dados da Cidade Cadastrada ---\n");
    printf("Código da Cidade: %c\n", codigo_da_cidade);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área da Cidade: %.2f km²\n", area);
    printf("PIB da Cidade: %.2f milhões\n", PIB);
    printf("Quantidade de Pontos Turísticos: %d\n", quantidade_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f\n", pib_per_capita); // Saída de dados

    return 0;
}
