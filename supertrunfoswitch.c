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

void compararDensidadePopulacional(Carta carta1, Carta carta2) {
    float densidade1 = calcularDensidadePopulacional(carta1);
    float densidade2 = calcularDensidadePopulacional(carta2);

    printf("Comparando a Densidade Populacional:\n");
    printf("%s (%s): Densidade = %.2f\n", carta1.nomeCidade, carta1.estado, densidade1);
    printf("%s (%s): Densidade = %.2f\n", carta2.nomeCidade, carta2.estado, densidade2);

    if (densidade1 < densidade2) {
        printf("A carta vencedora é: %s (%s) com Densidade Populacional de %.2f\n", 
               carta2.nomeCidade, carta2.estado, densidade2);
    } else if (densidade1 > densidade2) {
        printf("A carta vencedora é: %s (%s) com Densidade Populacional de %.2f\n", 
               carta1.nomeCidade, carta1.estado, densidade1);
    } else {
        printf("As cartas têm a mesma Densidade Populacional de %.2f\n", densidade1);
    }
}

void compararPibPerCapita(Carta carta1, Carta carta2) {
    float pibPerCapita1 = calcularPibPerCapita(carta1);
    float pibPerCapita2 = calcularPibPerCapita(carta2);

    printf("Comparando o PIB per Capita:\n");
    printf("%s (%s): PIB per Capita = %.2f\n", carta1.nomeCidade, carta1.estado, pibPerCapita1);
    printf("%s (%s): PIB per Capita = %.2f\n", carta2.nomeCidade, carta2.estado, pibPerCapita2);

    if (pibPerCapita1 < pibPerCapita2) {
        printf("A carta vencedora é: %s (%s) com PIB per Capita de %.2f\n", 
               carta2.nomeCidade, carta2.estado, pibPerCapita2);
    } else if (pibPerCapita1 > pibPerCapita2) {
        printf("A carta vencedora é: %s (%s) com PIB per Capita de %.2f\n", 
               carta1.nomeCidade, carta1.estado, pibPerCapita1);
    } else {
        printf("As cartas têm o mesmo PIB per Capita de %.2f\n", pibPerCapita1);
    }
}

void compararNumPontosTuristicos(Carta carta1, Carta carta2) {
    printf("Comparando o Número de Pontos Turísticos:\n");
    printf("%s (%s): Pontos Turísticos = %d\n", carta1.nomeCidade, carta1.estado, carta1.numPontosTuristicos);
    printf("%s (%s): Pontos Turísticos = %d\n", carta2.nomeCidade, carta2.estado, carta2.numPontosTuristicos);

    if (carta1.numPontosTuristicos < carta2.numPontosTuristicos) {
        printf("A carta vencedora é: %s (%s) com %d pontos turísticos.\n",
               carta2.nomeCidade, carta2.estado, carta2.numPontosTuristicos);
    } else if (carta1.numPontosTuristicos > carta2.numPontosTuristicos) {
        printf("A carta vencedora é: %s (%s) com %d pontos turísticos.\n",
               carta1.nomeCidade, carta1.estado, carta1.numPontosTuristicos);
    } else {
        printf("As cartas têm o mesmo número de pontos turísticos: %d.\n", 
               carta1.numPontosTuristicos);
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
    scanf("%s", carta2.cartas_nomecidades);
    
   // Cadastro da segunda cidade
   // ...
   // O mesmo processo para a segunda cidade

   int opcao;

   do {
       printf("\nEscolha um atributo para comparar:\n");
       printf("1. Densidade Populacional\n");
       printf("2. PIB per Capita\n");
       printf("3. Número de Pontos Turísticos\n");
       printf("0. Sair\n");
       scanf("%d", &opcao);

       switch(opcao) {
           case 1:
               compararDensidadePopulacional(carta1, carta2);
               break;
           case 2:
               compararPibPerCapita(carta1, carta2);
               break;
           case 3:
               compararNumPontosTuristicos(carta1, carta2);
               break;
           case 0:
               printf("Saindo do programa...\n");
               break;
           default:
               printf("Opção inválida! Tente novamente.\n");
       }
   } while(opcao != 0);

   return 0;
}
