#include <stdio.h>
#include <string.h>

typedef struct {
    char estado[50];
    char codigo[20];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int numPontosTuristicos;
} Carta;

float calcularDensidadePopulacional(Carta carta) {
    return carta.populacao / carta.area;
}

float calcularPibPerCapita(Carta carta) {
    return carta.pib / carta.populacao;
}

void compararCartas(Carta carta1, Carta carta2) {
    float densidade1 = calcularDensidadePopulacional(carta1);
    float densidade2 = calcularDensidadePopulacional(carta2);

    printf("Comparando a Densidade Populacional:\n");
    printf("%s (%s): Densidade = %.2f\n", carta1.nomeCidade, carta1.estado, densidade1);
    printf("%s (%s): Densidade = %.2f\n", carta2.nomeCidade, carta2.estado, densidade2);

    if (densidade1 < densidade2) {
        printf("A carta vencedora é: %s (%s) com Densidade Populacional de %.2f\n", 
               carta1.nomeCidade, carta1.estado, densidade1);
    } else if (densidade1 > densidade2) {
        printf("A carta vencedora é: %s (%s) com Densidade Populacional de %.2f\n", 
               carta2.nomeCidade, carta2.estado, densidade2);
    } else {
        printf("As cartas têm a mesma Densidade Populacional de %.2f\n", densidade1);
    }
}

int main() {
    Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Estado: ");
    scanf("%s", carta1.estado);
    printf("Código da carta: ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta1.nomeCidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.numPontosTuristicos);

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Estado: ");
    scanf("%s", carta2.estado);
    printf("Código da carta: ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf("%s", carta2.nomeCidade);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.numPontosTuristicos);

   // Comparar as duas cartas
   compararCartas(carta1, carta2);

   return 0;
}