#include <stdio.h>

int main() {
    // Variáveis utilizadas: 
    unsigned long int populacao1, populacao2;
    int turisticos1, turisticos2;
    float km21, km22, pib1, pib2;
    float densidade1, densidade2, percapta1, percapta2;
    float superPoder1, superPoder2;
    char estado1[30], estado2[30], codigocarta1[3], codigocarta2[3], cidade1[30], cidade2[30];

    //Cabeçalho do Super Trunfo:
    printf("Super Trunfo - Cidades Brasileiras\n\n");

    // --- ENTRADA DE DADOS CARTA 1 ---
    printf("--- Insira os dados da carta 1:\n");
    printf("Estado: "); scanf("%s", estado1);
    printf("Código (uma letra de A a H): "); scanf("%s", codigocarta1);
    printf("Cidade: "); scanf("%s", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &km21);
    printf("PIB: "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &turisticos1);

    densidade1 = (float)populacao1 / km21;
    percapta1 = pib1 / (float)populacao1;

        // --- ENTRADA DE DADOS CARTA 2 ---
    printf("\n--- Insira os dados da carta 2:\n");
    printf("Estado: "); scanf("%s", estado2);
    printf("Código (uma letra de A a H): "); scanf("%s", codigocarta2);
    printf("Cidade: "); scanf("%s", cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &km22);
    printf("PIB: "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &turisticos2);

    densidade2 = (float)populacao2 / km22;
    percapta2 = pib2 / (float)populacao2;

        // --- EXIBIÇÃO E COMPARAÇÃO ---
    printf("\n============================\n");
    printf("Comparação de Cartas (Atributo: População):\n");
    printf("============================\n\n");

       // Exibição dos dados das cartas
    printf("Carta 1 - %s (%s): %lu habitantes.\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu habitantes.\n\n", cidade2, estado2, populacao2);

    printf("--- Comparando atributos...... ---\n\n");

       // Comparação de população usando a lógica if-else
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);}
    else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);}

    return 0;
}