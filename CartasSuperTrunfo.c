#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1[50], estado2[50], cidade1[50], cidade2[50], nome [50], letra1 [2], letra2 [2];
    float pib1, pib2, pib_p_capta1, pib_p_capta2, densidade1, densidade2, area1, area2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2, codigo1, codigo2;

  // Área para entrada de dados
    printf("Olá, seja bem vindo ao jogo de trunfo, para começar, digite seu nome: \n");
    scanf("%s", nome);
    printf("Olá %s, vamos começar o jogo! \n", nome);
    printf("Digite uma letra de A a H para definir o código do primeiro Estado: \n");
    scanf("%s", letra1);
    printf("Agora precisamos de um número de 2 dígitos para definir o código do primeiro Estado: \n");
    scanf("%d", &codigo1);
    printf("Digite o nome de um estado que tenha apenas uma palavra no nome: \n");
    scanf("%s",estado1);
    printf("Muito bem! Agora digite o nome de uma cidade deste Estado: \n");
    scanf("%s", cidade1);
    printf("Digite também o pib de %s,\n", cidade1);
    scanf("%f", &pib1);
    printf("Digite a area: \n");
    scanf("%f", &area1);
    printf("E agora digite a população: \n");
    scanf("%d", &populacao1);
    printf("Por fim, digite a quantidade de pontos turísticos de %s: \n", cidade1);
    scanf("%d", &pontos_turisticos1);
        pib_p_capta1 = pib1 / populacao1;
        densidade1 = populacao1 / area1;
    printf("Digite uma letra de A a H para definir o código do segundo Estado: \n");
    scanf("%s", letra2);
    printf("Agora precisamos de um número de 2 dígitos para definir o código do segundo Estado: \n");
    scanf("%d", &codigo2);
    printf("Agora digite o nome do segundo estado que tenha apenas uma palavra no nome: \n");
    scanf("%s",estado2);
    printf("Muito bem! Agora digite o nome de uma cidade deste estado: \n");
    scanf("%s", cidade2);
    printf("Digite também o pib de %s,\n", cidade2);
    scanf("%f", &pib2);
    printf("Digite a area: \n");
    scanf("%f", &area2);
    printf("E agora digite a população: \n");
    scanf("%d", &populacao2);
    printf("Por fim, digite a quantidade de pontos turísticos de %s: \n", cidade2);
    scanf("%d", &pontos_turisticos2);
        pib_p_capta2 = pib2 / populacao2;
        densidade2 = populacao2 / area2;
  // Área para exibição dos dados da cidade
    printf("Muito bem %s, agora vamos comparar os dados coletados! \n", nome);
    printf("Carta 1: \n");
    printf("Código: %s%d \n", letra1, codigo1);
    printf("Estado: %s \n", estado1);
    printf("Cidade: %s \n", cidade1);
    printf("PIB: %.2f \n", pib1);
    printf("Área: %.2f \n", area1);
    printf("População: %d \n", populacao1);
    printf("Pontos Turísticos: %d \n", pontos_turisticos1);
    printf("PIB per capita: %.2f \n", pib_p_capta1);
    printf("Densidade demográfica: %.2f \n", densidade1);

    printf("\n");
    
    printf("Carta 2: \n");
    printf("Código: %s%d \n", letra2, codigo2);
    printf("Estado: %s \n", estado2);
    printf("Cidade: %s \n", cidade2);
    printf("PIB: %.2f \n", pib2);
    printf("Área: %.2f \n", area2);
    printf("População: %d \n", populacao2);
    printf("Pontos Turísticos: %d \n", pontos_turisticos2);
    printf("PIB per capita: %.2f \n", pib_p_capta2);
    printf("Densidade demográfica: %.2f \n", densidade2);
    
return 0;
} 
