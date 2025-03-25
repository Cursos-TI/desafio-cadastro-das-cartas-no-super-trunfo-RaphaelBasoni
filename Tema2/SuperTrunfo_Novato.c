#include<stdio.h>

// declaração de variáveis.
char estado, cidade[50], estado2, cidade2[50];
int codigo, turismo, codigo2, turismo2;
float area, densidade, densidadeInv, densidadeInv2, capita, area2, densidade2, capita2, superPower1, superPower2;
unsigned long int populacao, populacao2;
double pib, pib2;

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
         scanf("%lf", &pib);
         printf("PIB: R$%lf \n\n", pib);

         printf("Entre o número de pontos turísticos da cidade:");
         scanf("%d", &turismo);
         printf("Pontos Turísticos: %d \n\n\n", turismo);

    // Cálculo da densidade demográfica e renda per capita da primeira carta
    densidade = (float)populacao / area;
    capita = pib / (float)populacao;
    densidadeInv = (1/densidade);
    superPower1 = (float)populacao + area + pib + (float)turismo + capita + densidadeInv;
    
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
    printf("O Super Poder de %s é %f\n",cidade, superPower1);
    
    
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
         scanf("%lf", &pib2);
         printf("PIB: R$%lf \n\n", pib2);

         printf("Entre o número de pontos turísticos da cidade: ");
         scanf("%d", &turismo2);
         printf("Pontos Turísticos: %d \n\n\n", turismo2);

    // Cálculo da densidade demográfica, densidade inversa, renda per capita da segunda carta
    densidade2 = (float)populacao2 / area2;
    capita2 = pib2 / (float)populacao2;
    densidadeInv2 = (1/densidade2);
    superPower2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + capita2 + densidadeInv2;
    
    // Exibição dos dados da segunda carta
    printf("DADOS CADASTRADOS DA SEGUNDA CARTA\n\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%02d \n", estado2, codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: R$%.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.1f hab/Km² \n", densidade2);
    printf("PIB per Capita: R$ %.2f Reais\n\n\n", capita2);
    printf("O Super Poder de %s é %f\n", cidade2, superPower2);
    
    
    // Batalha de cartas (MSG Inicial)
    printf("Vamos dar inicio a BATALHA DAS CARTAS\n\n");

         //Comparação dos Valores
         printf("Categoria População\n");
             if (populacao > populacao2){
             printf("%s Venceu!", cidade);}
             else {
             printf("%s Venceu!", cidade2);}

         printf("\n\nCategoria Area\n");
             if (area > area2){
             printf("%s Venceu!", cidade);}
             else {
             printf("%s Venceu!", cidade2);}

         printf("\n\nCategoria PIB\n");
             if (pib > pib2){
             printf("%s Venceu!", cidade);}
             else {
             printf("%s Venceu!", cidade2);}

         printf("\n\nCategoria Turismo\n");
             if (turismo > turismo2){
             printf("%s Venceu!", cidade);}
             else {
             printf("%s Venceu!", cidade2);}
        
         printf("\n\nCategoria Per Capita\n");
             if (capita > capita2){
             printf("%s Venceu!", cidade);}
             else {
             printf("%s Venceu!", cidade2);}
    
         printf("\n\nCategoria Densidade Inversa\n");
             if (densidadeInv < densidadeInv2){
             printf("%s Venceu!", cidade);}
             else {
             printf("%s Venceu!", cidade2);}
       
         printf("\n\nCategoria Super Poder\n");
             if (superPower1 > superPower2){
             printf("%s Venceu!", cidade);}
             else {
             printf("%s Venceu!", cidade2);}  
        

return 0;
}
