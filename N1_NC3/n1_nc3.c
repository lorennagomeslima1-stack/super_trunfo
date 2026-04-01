/*
    Aluno: Rhafael Machado Chamon
    Disciplina:Introdução à Programação de Computadores
    
    Desafio: Nível novato - Cartas Super Trunfo
*/

#include <stdio.h>

int main () {
    // Declaração de variáveis para os atributos das cartas
    char 
        letra_carta1, letra_carta2, 
        codigo_carta1[4], codigo_carta2[4], 
        nome_carta1[50], nome_carta2[50];
    unsigned long int 
        populacao_carta1, populacao_carta2;
    int
        num_pon_tur_carta1, num_pon_tur_carta2;
    float
        area_carta1, area_carta2,
        pib_carta1, pib_carta2,
        densidade_carta1, densidade_carta2,
        pib_per_capita_carta1, pib_per_capita_carta2;
    double super_carta1, super_carta2;
    
    printf("\n---------- Cadastro da carta 1 ----------\n"); // Cadastro da carta 1
    
    printf("Digite a letra do estado (de A à H): "); // Lendo a letra da carta 1
    scanf(" %c", &letra_carta1);

    printf("Digite o código do estado - \"letra + número\" (número de 01 à 04): "); // Lendo o código da carta 1
    scanf(" %s", codigo_carta1);

    printf("Digite o nome do estado: "); // Lendo o nome da carta 1, permitindo espaços
    scanf(" %[^\n]", nome_carta1); 

    printf("Digite a população do estado: "); // Lendo a população da carta 1
    scanf(" %i", &populacao_carta1);

    printf("Digite a área do estado (em km²): "); // Lendo a área da carta 1
    scanf(" %f", &area_carta1);

    printf("Digite o PIB do estado (em bilhões de reais): "); // Lendo o PIB da carta 1
    scanf(" %f", &pib_carta1);

    printf("Digite o número de pontos turísticos do estado: "); // Lendo o número de pontos turísticos da carta 1
    scanf(" %i", &num_pon_tur_carta1); 
    
    // Calculando a densidade demográfica da carta 1
    densidade_carta1 = populacao_carta1 / area_carta1;

    // Calculando o PIB per capita da carta 1
    pib_per_capita_carta1 = pib_carta1 * 1000000000 / populacao_carta1;

    // Calculo do Super Poder da carta 1 (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
    super_carta1 = (double)populacao_carta1 + area_carta1 + pib_carta1 + num_pon_tur_carta1 + pib_per_capita_carta1 + (1.0 / densidade_carta1);
    

    printf("\n---------- Cadastro da carta 2 ----------\n"); // Cadastro da carta 2
    printf("Digite a letra do estado (de A à H): "); // Lendo a letra da carta 2
    scanf(" %c", &letra_carta2);

    printf("Digite o código do estado - \"letra + número\" (número de 01 à 04): "); // Lendo o código da carta 2
    scanf(" %s", codigo_carta2);

    printf("Digite o nome do estado: "); // Lendo o nome da carta 2, permitindo espaços
    scanf(" %[^\n]", nome_carta2); 

    printf("Digite a população do estado: "); // Lendo a população da carta 2
    scanf(" %i", &populacao_carta2);

    printf("Digite a área do estado (em km²): "); // Lendo a área da carta 2
    scanf(" %f", &area_carta2);

    printf("Digite o PIB do estado (em bilhões de reais): "); // Lendo o PIB da carta 2
    scanf(" %f", &pib_carta2);

    printf("Digite o número de pontos turísticos do estado: "); // Lendo o número de pontos turísticos da carta 2
    scanf(" %i", &num_pon_tur_carta2);

    // Calculando a densidade demográfica da carta 2
    densidade_carta2 = populacao_carta2 / area_carta2;

    // Calculando o PIB per capita da carta 2
    pib_per_capita_carta2 = pib_carta2 * 1000000000 / populacao_carta2;

    // Calculo do Super Poder (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional)
    super_carta2 = (double)populacao_carta2 + area_carta2 + pib_carta2 + num_pon_tur_carta2 + pib_per_capita_carta2 + (1.0 / densidade_carta2);


    printf("\n========== Resultado da comparação entre as cartas ==========\n");
    printf("População: Carta %i venceu\n", (populacao_carta1 < populacao_carta2) + 1);
    printf("Área: Carta %i venceu\n", (area_carta1 < area_carta2) + 1);
    printf("PIB: Carta %i venceu\n", (pib_carta1 < pib_carta2) + 1);
    printf("Pontos turísticos: Carta %i venceu\n", (num_pon_tur_carta1 < num_pon_tur_carta2) + 1);
    printf("Densidade populacional: Carta %i venceu\n", (densidade_carta1 > densidade_carta2) + 1);
    printf("PIB per capita: Carta %i venceu\n", (pib_per_capita_carta1 < pib_per_capita_carta2) + 1);
    printf("Super Poder: Carta %i venceu\n", (super_carta1 < super_carta2) + 1);

    return 0;
}