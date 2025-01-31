#include <stdio.h>
#include <string.h> 

int main() {
    char nome[20];
    char codigo[15];
    float populacao;
    float area;
    float Densidade_Populacional;
    double PIB;  
    float PIB_per_Capita; 
    int pontos_turisticos;
  
    // ENTRADA DE DADOS 
    printf("Digite o nome do estado: \n");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo);

    printf("Digite o número da população: \n");
    scanf("%f", &populacao);

    printf("Digite o número de área (em Km²): \n");
    scanf("%f", &area);

    while (getchar() != '\n');

    printf("Digite o PIB do estado: \n");
    scanf("%lf", &PIB); 

    while (getchar() != '\n');

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);

    // Cálculo da densidade populacional e PIB per capita 
    Densidade_Populacional = populacao / area;
    PIB_per_Capita = PIB / populacao;

    // SAÍDA DE DADOS 
    printf("\n === Informações do estado ===\n");
    printf("Nome do estado: %s \n", nome);
    printf("Código da cidade: %s \n", codigo);
    printf("População: %.2f pessoas \n", populacao);  
    printf("Área: %.2f Km² \n", area); 
    printf("PIB: %.2f bilhões \n", PIB);  
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.3f pessoas/km² \n", Densidade_Populacional);
    printf("PIB per capita: %.3f reais \n", PIB_per_Capita);

    return 0;
}