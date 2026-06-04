#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
char estado1 [3], estado2 [3];
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int ptsTurismo1, ptsTurismo2;
    unsigned long int populacao1, populacao2, ResultadoPopulacao, ResultadoSuperPoder;
    float area1, area2, PIB1, PIB2, ResultadoArea, ResultadoPib;
    float densPop1, densPop2, ResultadoDesPop;
    float pibPCapita1, pibPCapita2;
    float SuperPoder1, SuperPoder2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
printf("Digite o estado da carta 1: ", estado1);
    scanf(" %s", &estado1);
    
    printf("Digite o código da carta:", codigo1);
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade:", cidade1);
    scanf(" %19[^\n]", cidade1);
    
    printf("Digite a população da cidade:", populacao1);
    scanf("%lu", &populacao1);

    printf("Digite a area em metro quadrado:", area1);
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:", PIB1);
    scanf("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos:", ptsTurismo1);
    scanf("%d", &ptsTurismo1);

    densPop1 = (float) populacao1 / area1;
    pibPCapita1 = (PIB1 * 1000000000) / populacao1;


    printf("Digite o estado da carta 2: ", estado2);
    scanf(" %s", &estado2);
    
    printf("Digite o código da carta:", codigo2);
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade:", cidade2);
    scanf(" %19[^\n]", cidade2);
    
    printf("Digite a população da cidade:", populacao2);
    scanf("%lu", &populacao2);

    printf("Digite a area em metro quadrado:", area2);
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:", PIB2);
    scanf("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos:", ptsTurismo2);
    scanf("%d", &ptsTurismo2);

    densPop2 = (float) populacao2 / area2;
    pibPCapita2 = (PIB2 * 1000000000.0f) / (float) populacao2;


    //Calcular o super poder
SuperPoder1 = (float) populacao1 + area1 + PIB1 + (float) ptsTurismo1 + pibPCapita1 + (1.0f / densPop1);
SuperPoder2 = (float) populacao2 + area2 + PIB2 + (float) ptsTurismo2 + pibPCapita2 + (1.0f / densPop2);

printf("Super Poder Carta 1: %.2f\n", SuperPoder1);
printf("Super Poder Carta 2: %.2f\n", SuperPoder2);
    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
if(populacao1 > populacao2){
    printf("Carta 1 venceu - %s (%s): %lu\n", cidade1, estado1, populacao1);
} else{
    printf("Carta 2 venceu - %s (%s): %lu\n", cidade2, estado2, populacao2);
}
    

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
