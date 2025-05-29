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

void compararCartas(Carta carta1, Carta carta2, int atributo) {
    float densidade1 = calcularDensidadePopulacional(carta1);
    float densidade2 = calcularDensidadePopulacional(carta2);

    switch (atributo) {
        case 1: // População
            printf("Comparando a População:\n");
            printf("%s (%s): População = %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
            printf("%s (%s): População = %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("A carta vencedora é: %s (%s)\n", carta1.nomeCidade, carta1.estado);
            } else if (carta1.populacao < carta2.populacao) {
                printf("A carta vencedora é: %s (%s)\n", carta2.nomeCidade, carta2.estado);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparando a Área:\n");
            printf("%s (%s): Área = %.2f\n", carta1.nomeCidade, carta1.estado, carta1.area);
            printf("%s (%s): Área = %.2f\n", carta2.nomeCidade, carta2.estado, carta2.area);
            if (carta1.area > carta2.area) {
                printf("A carta vencedora é: %s (%s)\n", carta1.nomeCidade, carta1.estado);
            } else if (carta1.area < carta2.area) {
                printf("A carta vencedora é: %s (%s)\n", carta2.nomeCidade, carta2.estado);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparando o PIB:\n");
            printf("%s (%s): PIB = %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pib);
            printf("%s (%s): PIB = %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("A carta vencedora é: %s (%s)\n", carta1.nomeCidade, carta1.estado);
            } else if (carta1.pib < carta2.pib) {
                printf("A carta vencedora é: %s (%s)\n", carta2.nomeCidade, carta2.estado);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Número de pontos turísticos
            printf("Comparando o Número de Pontos Turísticos:\n");
            printf("%s (%s): Pontos Turísticos = %d\n", carta1.nomeCidade, carta1.estado, carta1.numPontosTuristicos);
            printf("%s (%s): Pontos Turísticos = %d\n", carta2.nomeCidade, carta2.estado, carta2.numPontosTuristicos);
            if (carta1.numPontosTuristicos > cartea.numPontosTuristicos) {
                printf("A carta vencedora é: %s (%s)\n", cartea.numPontosTuristicos);
            } else if (carta1.numPontosTuristicos < carteb.numPontosTuristicos) {
                printf("A carteb vencedora é: %s (%s)\n", carteb.numPontosTuristicos);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica
            printf("Comparando a Densidade Demográfica:\n");
            printf("%s (%s): Densidade = %.2f\n", cartaa.numPontosTuristicos);
            printf("%s (%s): Densidade = %.2f\n", cartab.numPontosTuristicos);
            
             if (densidade1 < densidade2) { // Menor densidade vence
                 printf("A carteb vencedora é: %d\n", densidadeb.numPontosTuristicos); 
             } else if (densidadeb < densidadea) { 
                 printf("A cartea vencedora é: %d\n", densidadea); 
             } else { 
                 printf("Empate!\n"); 
             }
             break;

        default:
             printf("Opção inválida.\n");
             break;
    }
}

int main() {
    Carta carta1, carta2;
    
    // Cadastro da primeira cidade
   

   // Cadastro da segunda cidade
  

   int opcao;
   do {
       // Menu interativo
       printf("\nEscolha o atributo para comparação:\n");
       printf("1. População\n");
       printf("2. Área\n");
       printf("3. PIB\n");
       printf("4. Número de Pontos Turísticos\n");
       printf("5. Densidade Demográfica\n");
       printf("0. Sair\n");
       scanf("%d", &opcao);

       if (opcao != 0) {
           compararCartas(carta1, carta2, opcao);
       }

   } while (opcao != 0);

   return 0;
}
