#include <stdio.h>

typedef struct {
    char nome[50];
    char estado[50];
    int codigo;
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

float calcularDensidadePopulacional(unsigned long int populacao, float area) {
    return populacao / area;
}

float calcularPibPerCapita(unsigned long int pib, unsigned long int populacao) {
    return (float)pib / populacao;
}

float calcularSuperPoder(Carta carta) {
    float densidade = calcularDensidadePopulacional(carta.populacao, carta.area);
    return carta.populacao + carta.area + carta.pib + carta.pontos_turisticos +
           calcularPibPerCapita(carta.pib, carta.populacao) + (1.0 / densidade);
}

void compararCartas(Carta carta1, Carta carta2) {
    printf("Comparação de Cartas:\n");

    // Comparação da População
    printf("População: Carta %d venceu (%d)\n", 
           (carta1.populacao > carta2.populacao) ? 1 : 2, 
           (carta1.populacao > carta2.populacao) ? 1 : 0);

    // Comparação da Área
    printf("Área: Carta %d venceu (%d)\n", 
           (carta1.area > carta2.area) ? 1 : 2, 
           (carta1.area > carta2.area) ? 1 : 0);

    // Comparação do PIB
    printf("PIB: Carta %d venceu (%d)\n", 
           (carta1.pib > carta2.pib) ? 1 : 2, 
           (carta1.pib > carta2.pib) ? 1 : 0);

    // Comparação dos Pontos Turísticos
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 2, 
           (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 0);

    // Comparação da Densidade Populacional
    float densidade1 = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    float densidade2 = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           (densidade1 < densidade2) ? 1 : 2, 
           (densidade1 < densidade2) ? 1 : 0);

    // Comparação do PIB per Capita
    float pibPerCapita1 = calcularPibPerCapita(carta1.pib, carta1.populacao);
    float pibPerCapita2 = calcularPibPerCapita(carta2.pib, carta2.populacao);
    
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2, 
           (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

    // Comparação do Super Poder
    float superPoder1 = calcularSuperPoder(carta1);
    float superPoder2 = calcularSuperPoder(carta2);
    
    printf("Super Poder: Carta %d venceu (%d)\n", 
           (superPoder1 > superPoder2) ? 1 : 2, 
           (superPoder1 > superPoder2) ? 1 : 0);
}

int main() {
    Carta carta1, carta2;

    // Entrada de dados para a primeira carta
    printf("Digite o nome da primeira carta: ");
    scanf("%s", carta1.nome);
    
    printf("Digite o estado da primeira carta: ");
    scanf("%s", carta1.estado);
    
    printf("Digite o código da primeira carta: ");
    scanf("%d", &carta1.codigo);
    
    printf("Digite a população da primeira carta: ");
    scanf("%lu", &carta1.populacao);
    
    printf("Digite a área da primeira carta: ");
    scanf("%f", &carta1.area);
    
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &carta1.pib);
    
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &carta1.pontos_turisticos);

   
   // Entrada de dados para a segunda carta
   printf("\nDigite o nome da segunda carta: ");
   scanf("%s", carta2.nome);
   
   printf("Digite o estado da segunda carta: ");
   scanf("%s", carta2.estado);
   
   printf("Digite o código da segunda carta: ");
   scanf("%d", &carta2.codigo);
   
   printf("Digite a população da segunda carta: ");
   scanf("%lu", &carta2.populacao);
   
   printf("Digite a área da segunda carta: ");
   scanf("%f", &carta2.area);
   
   printf("Digite o PIB da segunda carta: ");
   scanf("%f", &carta2.pib);
   
   printf("Digite o número de pontos turísticos da segunda carta: ");
   scanf("%d", &carta2.pontos_turisticos);

   // Comparar as cartas
   compararCartas(carta1, carta2);

   return 0;
}
