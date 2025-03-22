#include<stdio.h>

// declaração de variáveis.
char estado, cidade[50], estado2, cidade2[50];
int codigo, turismo, codigo2, turismo2;
float area, pib, densidade, capita, area2, pib2, densidade2, capita2, superPower1, superPower2;
unsigned long int populacao, populacao2;

int main()
{
    // Mensagem inicial da atividade
    printf("Vamos construir a base do nosso jogo Super Trunfo de Países.\n\n");
    
    // Cadastro da primeira carta
    printf("Entre uma letra de A a H para registrar o estado da carta: ");
    scanf(" %c", &estado);
    printf("Estado: %c \n\n", estado);
    
    printf("Entre um número de 01 a 04 para registrar o código da carta: ");
    scanf("%d", &codigo);
    printf("Código: %c%02d \n\n", estado, codigo);
    
    /* 
    Captura o nome da cidade.  
   Como nomes de cidades podem conter espaços, usamos 'fgets()', que permite a leitura de strings com espaços.  
   Também chamamos 'getchar()' antes para limpar o buffer e evitar que o '\n' remanescente do 'scanf()'  
   faça o 'fgets()' pular a entrada do usuário. 
   */

    printf("Entre o nome da cidade: ");
    getchar(); 
    fgets(cidade,50,stdin);  
    printf("Cidade: %s \n", cidade);
    
    printf("Entre o número de habitantes da cidade: ");
    scanf("%lu", &populacao);
    printf("População: %lu \n\n", populacao);
    
    printf("Entre a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);
    printf("Área: %.2f Km² \n\n", area);
    
    printf("Entre o PIB (Produto Interno Bruto) da cidade :");
    scanf("%f", &pib);
    printf("PIB: R$%.2f Bilhões de Reais\n\n", pib);
    
    printf("Entre o número de pontos turísticos da cidade:");
    scanf("%d", &turismo);
    printf("Pontos Turísticos: %d \n\n\n", turismo);

    // Cálculo da densidade demográfica e renda per capita da primeira carta
    densidade = (float)populacao / area;
    capita = (pib*1e9) / (float)populacao;
    
    // Exibição dos dados da primeira carta
    printf("DADOS CADASTRADOS DA PRIMEIRA CARTA\n\n");
    printf("Estado: %c \n", estado);
    printf("Código: %c%02d \n", estado, codigo);
    printf("Cidade: %s", cidade);
    printf("População: %lu \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: R$%.2f Bilhões de Reais\n", pib);
    printf("Pontos Turísticos: %d \n", turismo);
    printf("Densidade Populacional: %.1f hab/Km² \n", densidade);
    printf("PIB per Capita: R$ %.2f Reais\n\n\n", capita);
    
    // Mensagem de início da próxima etapa
    printf("VAMOS AO CADASTRADO DA SEGUNDA CARTA\n\n");
   
    // Cadastro da segunda carta
    printf("Entre uma letra de A a H para registrar o estado da carta: ");
    scanf(" %c", &estado2);
    printf("Estado: %c \n\n", estado2);
    
    printf("Entre um número de 01 a 04 para registrar o código da carta: ");
    scanf("%d", &codigo2);
    printf("Código: %c%02d \n\n", estado2, codigo2);
    
    printf("Entre o nome da cidade: ");
    getchar();
    fgets(cidade2,50,stdin);
    printf("Cidade: %s \n", cidade2);
    
    printf("Entre o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);
    printf("População: %lu \n\n", populacao2);
    
    printf("Entre a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);
    printf("Área: %.2f Km² \n\n", area2);
    
    printf("Entre o PIB (Produto Interno Bruto) da cidade : ");
    scanf("%f", &pib2);
    printf("PIB: R$%.2f Bilhões de Reais\n\n", pib2);
    
    printf("Entre o número de pontos turísticos da cidade: ");
    scanf("%d", &turismo2);
    printf("Pontos Turísticos: %d \n\n\n", turismo2);
    
    // Cálculo da densidade demográfica e renda per capita da segunda carta
    densidade2 = (float)populacao2 / area2;
    capita2 = (pib2*1e9) / (float)populacao2;
    
    // Exibição dos dados da segunda carta
    printf("DADOS CADASTRADOS DA SEGUNDA CARTA\n\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%02d \n", estado2, codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: R$%.2f Bilhões de Reais\n", pib2/1e9);
    printf("Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.1f hab/Km² \n", densidade2);
    printf("PIB per Capita: R$ %.2f Reais\n\n\n", capita2);

    // Batalha de cartas (MSG Inicial)
    printf("Vamos dar inicio a BATALHA DAS CARTAS\n\n");

    //Comparação dos Valores
    printf("Categoria População\n");
    printf("A população de %s vale %.0f\n", cidade, (float)populacao);
    printf("A população de %s vale %.0f\n", cidade2, (float)populacao2);
    printf("A população de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade, cidade2, (float)populacao>(float)populacao2);
    
    printf("\n\nCategoria Area\n");
    printf("A Area de %s vale %f\n", cidade, area);
    printf("A Area de %s vale %f\n", cidade2, area2);
    printf("A Area de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade, cidade2, area>area2);
    
    printf("\n\nCategoria PIB\n");
    printf("O PIB de %s vale %f\n", cidade, pib);
    printf("O PIB de %s vale %f\n", cidade2, pib2);
    printf("O PIB de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade, cidade2, pib>pib2);
    
    printf("\n\nCategoria Turismo\n");
    printf("Os pontos turisticos de %s vale %f\n", cidade, (float)turismo);
    printf("Os pontos turisticos de %s vale %f\n", cidade2, (float)turismo2);
    printf("Os pontos turisticos de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade, cidade2, turismo>turismo2);
    
    printf("\n\nCategoria Per Capita\n");
    printf("A per capita de %s vale %f\n", cidade, capita);
    printf("A per capita de %s vale %f\n", cidade2, capita2);
    printf("A per capita de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade, cidade2, capita>capita2);
    printf("\n\nCategoria Densidade Inversa\n");
    printf("A densidade Populacional de %s vale %f\n", cidade, (1/densidade));
    printf("A densidade Populacional de %s vale %f\n", cidade2, (1/densidade2));
    printf("A densidade Populacional de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade, cidade2, (1/densidade)>(1/densidade2));
    
    //Calculos do SuperPower
    
    superPower1 = (float)populacao + area + pib + (float)turismo + capita + (1/densidade);
    printf("O Super Poder de %s é %f\n",cidade, superPower1);
    superPower2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + capita2 + (1/densidade2);
    printf("O Super Poder de %s é %f\n", cidade2, superPower2);
    printf("O Super Poder de %s é maior que a de %s? = %d (0=Nao | 1=Sim)\n", cidade, cidade2, superPower1>superPower2);

    return 0;
}