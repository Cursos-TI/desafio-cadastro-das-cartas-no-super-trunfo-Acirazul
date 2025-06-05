#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int populacao;
    int area;
    int pib; // Produto Interno Bruto
    int densidadeDemografica;
} Pais;

// Função para exibir o menu de atributos
void exibirMenuAtributos() {
    printf("Escolha um atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Demográfica\n");
}

// Função para comparar os atributos
void compararAtributos(Pais pais1, Pais pais2, int atributo1, int atributo2) {
    int valor1Atributo1, valor1Atributo2, valor2Atributo1, valor2Atributo2;

    // Atribui os valores dos atributos escolhidos
    valor1Atributo1 = (atributo1 == 1) ? pais1.populacao : (atributo1 == 2) ? pais1.area : (atributo1 == 3) ? pais1.pib : pais1.densidadeDemografica;
    valor2Atributo1 = (atributo1 == 1) ? pais2.populacao : (atributo1 == 2) ? pais2.area : (atributo1 == 3) ? pais2.pib : pais2.densidadeDemografica;

    valor1Atributo2 = (atributo2 == 1) ? pais1.populacao : (atributo2 == 2) ? pais1.area : (atributo2 == 3) ? pais1.pib : pais1.densidadeDemografica;
    valor2Atributo2 = (atributo2 == 1) ? pais2.populacao : (atributo2 == 2) ? pais2.area : (atributo2 == 3) ? pais2.pib : pais2.densidadeDemografica;

    // Comparação dos atributos
    printf("\nComparando %s e %s:\n", pais1.nome, pais2.nome);
    
    // Comparação do primeiro atributo
    int resultadoAtributo1 = (atributo1 == 4) ? (valor1Atributo1 < valor2Atributo1) : (valor1Atributo1 > valor2Atributo1);
    
    // Comparação do segundo atributo
    int resultadoAtributo2 = (atributo2 == 4) ? (valor1Atributo2 < valor2Atributo2) : (valor1Atributo2 > valor2Atributo2);

    // Soma dos atributos
    int somaPais1 = valor1Atributo1 + valor1Atributo2;
    int somaPais2 = valor2Atributo1 + valor2Atributo2;

    // Exibição dos resultados
    printf("Primeiro Atributo: %s (%d vs %d)\n", 
           atributo1 == 1 ? "População" : atributo1 == 2 ? "Área" : atributo1 == 3 ? "PIB" : "Densidade Demográfica", 
           valor1Atributo1, 
           valor2Atributo1);
    
    printf("Segundo Atributo: %s (%d vs %d)\n", 
           atributo2 == 1 ? "População" : atributo2 == 2 ? "Área" : atributo2 == 3 ? "PIB" : "Densidade Demográfica", 
           valor1Atributo2, 
           valor2Atributo2);

    printf("Soma: %s = %d | %s = %d\n", pais1.nome, somaPais1, pais2.nome, somaPais2);

    if(somaPais1 > somaPais2)
        printf("%s venceu!\n", pais1.nome);
    else if(somaPais2 > somaPais1)
        printf("%s venceu!\n", pais2.nome);
    else
        printf("Empate!\n");
}

int main() {
    Pais carta[3] = {
        {"Brasil", 213993437, 8515767, 1848560000, 25},
        {"Argentina", 45195777, 2780400, 644100000, 16},
        {"Chile", 19116209, 756102, 332300000, 25}
    };

    int escolhaAtb[3];
    
    // Escolha do primeiro atributo
    exibirMenuAtributos();
    
    scanf("%d", &escolhaAtb[0]);
    
   // Escolha do segundo atributo
   printf("Escolha um segundo atributo:\n");
   for(int i = 0; i < 4; i++) {
       if(i + 1 != escolhaAtb[0]) {
           printf("%d. %s\n", i + 1, i + 0 == escolhaAtb[0] ? "" :
               i + 0 == escolhaAtb[0] + 'D' - 'C' ?
               "Densidade Demográfica" :
               i + 'C' - 'B' ?
               "PIB" :
               i + 'B' - 'C' ?
               "Área" :
               "População"
           );
       }
   }

   scanf("%d", &escolhaAtb[0]);

   // Comparar cartas
   compararAtributos(carta[0], carta[1], escolhaAtb[0], escolhaAtb[0]);

   return 0;
}
