#include <stdio.h>

int main(){
    printf("Desafio Super trunfo\n");
    printf("novo commit\n");

    char codigo_da_cidade;
    char nome_da_cidade[20];
    int  populacao;
    float area;
    float PIB;
    int quantidade_pontos_turisticos;

    printf("Digite o codigo da cidade: \n");
    scanf(" %c", &codigo_da_cidade);

    printf("Digite o nome da cidade: \n");
    getchar();
    scanf(" %[^\n]", nome_da_cidade);

    printf("populacao: \n");
    scanf(" %d", &populacao);

    printf("Digite a area: \n");
    scanf(" %f", &area);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Digite a quantidade de pontos turisticos: \n");
    scanf(" %d", &quantidade_pontos_turisticos);

    printf("\n--- Dados da Cidade Cadastrada ---\n");
    printf("Codigo da Cidade: %c\n" , codigo_da_cidade);
    printf("Nome da Cidade: %s\n" , nome_da_cidade);
    printf("Populacao: %d\n" , populacao);
    printf("Area da Cidade: %.2f km\n" , area);
    printf("PIB da Cidade: %.2f milhoes\n" , PIB);
    printf("Quandidade de Pontos Turisticos: %d\n" , quantidade_pontos_turisticos);
 
    float quociente =  populacao / area; // Divisão de pontos flutuantes 
    printf(“Divisao: %.2f/n", divisao;

    float quociente =  PIB / populacao; // Divisão de pontos flutuantes 
    printf(“Divisão: %.2f/n", divisao);

    scanf("%f”, &Densidade_Populacional);

    return 0;

}
