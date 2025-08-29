#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparacao das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparacao de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definicao das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
        
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a funcao scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    char primeiraCartaEstado;
    int primeiraCartaCidade;
    char primeiraCartaCodigo[5];
    int primeiraCartaPopulacao;
    float primeiraCartaArea;
    float primeiraCartaPib;
    int primeiraCartaPontosTuristicos;
    float primeiraCartaDensidadePopulacional;
    float primeiraCartaPibPerCapita;
    int primeiraCartaQuantidadeItemsVencedores = 0;

    char segundaCartaEstado;
    int segundaCartaCidade;
    char segundaCartaCodigo[5];
    int segundaCartaPopulacao;
    float segundaCartaArea;
    float segundaCartaPib;
    int segundaCartaPontosTuristicos;
    float segundaCartaDensidadePopulacional;
    float segundaCartaPibPerCapita;
    int segundaCartaQuantidadeItemsVencedores = 0;

    printf("Nivel Novato: Logica basica\n");

    printf("Vamos cadastrar a primeira carta!\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &primeiraCartaEstado);
    printf("Digite a cidade (1-4): \n");
    scanf("%d", &primeiraCartaCidade);
    printf("Digite a populacao: \n");
    scanf("%d", &primeiraCartaPopulacao);
    printf("Digite a area: \n");
    scanf("%f", &primeiraCartaArea);
    printf("Digite o PIB: \n");
    scanf("%f", &primeiraCartaPib);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &primeiraCartaPontosTuristicos);
    sprintf(primeiraCartaCodigo, "%c0%d", primeiraCartaEstado, primeiraCartaCidade);
    primeiraCartaDensidadePopulacional = (float)primeiraCartaPopulacao / primeiraCartaArea;
    primeiraCartaPibPerCapita = (float)primeiraCartaPib / primeiraCartaPopulacao;

    printf("\nVamos cadastrar a segunda carta!\n");
    printf("Digite o estado (A-H): \n");
    scanf(" %c", &segundaCartaEstado);
    printf("Digite a cidade (1-4): \n");
    scanf("%d", &segundaCartaCidade);
    printf("Digite a populacao: \n");
    scanf("%d", &segundaCartaPopulacao);
    printf("Digite a area: \n");
    scanf("%f", &segundaCartaArea);
    printf("Digite o PIB: \n");
    scanf("%f", &segundaCartaPib);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &segundaCartaPontosTuristicos);
    sprintf(segundaCartaCodigo, "%c0%d", segundaCartaEstado, segundaCartaCidade);
    segundaCartaDensidadePopulacional = (float)segundaCartaPopulacao / segundaCartaArea;
    segundaCartaPibPerCapita = (float)segundaCartaPib / segundaCartaPopulacao;

    printf("--------------------------------------------------------------------------\n");
    printf("Informacoes das cartas cadastradas:\n");
    printf("--------------------------------------------------------------------------\n");

    printf("Codigo: %s\n", primeiraCartaCodigo);
    printf("Estado: %c\n", primeiraCartaEstado);
    printf("Cidade: %d\n", primeiraCartaCidade);
    printf("Populacao: %d\n", primeiraCartaPopulacao);
    printf("Area: %.2f\n", primeiraCartaArea);
    printf("PIB: %.2f\n", primeiraCartaPib);
    printf("Quantidade de pontos turisticos: %d\n", primeiraCartaPontosTuristicos);
    printf("Densidade populacional: %.2f\n", primeiraCartaDensidadePopulacional);
    printf("PIB per capita: %.2f\n", primeiraCartaPibPerCapita);
    
    printf("--------------------------------------------------------------------------\n");
    
    printf("Codigo: %s\n", segundaCartaCodigo);
    printf("Estado: %c\n", segundaCartaEstado);
    printf("Cidade: %d\n", segundaCartaCidade);
    printf("Populacao: %d\n", segundaCartaPopulacao);
    printf("Area: %.2f\n", segundaCartaArea);
    printf("PIB: %.2f\n", segundaCartaPib);
    printf("Quantidade de pontos turisticos: %d\n", segundaCartaPontosTuristicos);
    printf("Densidade populacional: %.2f\n", segundaCartaDensidadePopulacional);
    printf("PIB per capita: %.2f\n", segundaCartaPibPerCapita);

    // Comparacao de Cartas:
    // Desenvolva a lógica de comparacao entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como populacao, area, PIB, etc.
    
    printf("--------------------------------------------------------------------------\n");
    printf("Comparacao de Cartas:\n");
    printf("--------------------------------------------------------------------------\n");

    if(primeiraCartaPopulacao > segundaCartaPopulacao) {
        printf("Cidade %s tem maior populacao.\n", primeiraCartaCodigo);
        primeiraCartaQuantidadeItemsVencedores++;
    } else {
        printf("Cidade %s tem maior populacao.\n", segundaCartaCodigo);
        segundaCartaQuantidadeItemsVencedores++;
    }

    if(primeiraCartaArea > segundaCartaArea) {
        printf("Cidade %s tem maior area.\n", primeiraCartaCodigo);
        primeiraCartaQuantidadeItemsVencedores++;
    } else {
        printf("Cidade %s tem maior area.\n", segundaCartaCodigo);
        segundaCartaQuantidadeItemsVencedores++;
    }

    if(primeiraCartaPib > segundaCartaPib) {
        printf("Cidade %s tem maior PIB.\n", primeiraCartaCodigo);
        primeiraCartaQuantidadeItemsVencedores++;
    } else {
        printf("Cidade %s tem maior PIB.\n", segundaCartaCodigo);
        segundaCartaQuantidadeItemsVencedores++;
    }

    if(primeiraCartaPontosTuristicos > segundaCartaPontosTuristicos) {
        printf("Cidade %s tem mais pontos turisticos.\n", primeiraCartaCodigo);
        primeiraCartaQuantidadeItemsVencedores++;
    } else {
        printf("Cidade %s tem mais pontos turisticos.\n", segundaCartaCodigo);
        segundaCartaQuantidadeItemsVencedores++;
    }

    if(primeiraCartaDensidadePopulacional < segundaCartaDensidadePopulacional) {
        printf("Cidade %s tem menor densidade populacional.\n", primeiraCartaCodigo);
        primeiraCartaQuantidadeItemsVencedores++;
    } else {
        printf("Cidade %s tem menor densidade populacional.\n", segundaCartaCodigo);
        segundaCartaQuantidadeItemsVencedores++;
    }

    if(primeiraCartaPibPerCapita > segundaCartaPibPerCapita) {
        printf("Cidade %s tem maior PIB per capita.\n", primeiraCartaCodigo);
        primeiraCartaQuantidadeItemsVencedores++;
    } else {
        printf("Cidade %s tem maior PIB per capita.\n", segundaCartaCodigo);
        segundaCartaQuantidadeItemsVencedores++;
    }

    // Exibicao dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    printf("--------------------------------------------------------------------------\n");
    printf("Carta vencedora (baseado na maior quantidade de atributos vencidos):\n");
    printf("--------------------------------------------------------------------------\n");

    if(primeiraCartaQuantidadeItemsVencedores > segundaCartaQuantidadeItemsVencedores) {
        printf("A cidade vencedorae: %s\n", primeiraCartaCodigo);
    } else {
        printf("A cidade vencedora: %s\n", segundaCartaCodigo);
    }

    printf("--------------------------------------------------------------------------\n");
    printf("Fim:\n");
    printf("--------------------------------------------------------------------------\n");

    return 0;
}
