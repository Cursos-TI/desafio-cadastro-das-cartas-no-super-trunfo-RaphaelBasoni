#include<stdio.h>

// declaração de variáveis.
char estado[2] = "A", cidade[50] = "Rio de Janeiro", estado2[2] ="B", cidade2[50] = "São Paulo", codigo[3] ="01", codigo2[3] = "02";
int turismo = 50, turismo2 = 50, opcao;
float area = 1200.27, densidade, densidadeInv, densidadeInv2, capita, area2 = 2521, densidade2, capita2, superPower1, superPower2;
unsigned long int populacao = 6211223, populacao2 = 11451999;
double pib = 331300000000, pib2=700000000000;

int main()
{
    // Cálculo da densidade demográfica e renda per capita da primeira carta
    
    densidade = (float)populacao / area;
    capita = pib / (float)populacao;
    densidadeInv = (1/densidade);
    superPower1 = (float)populacao + area + pib + (float)turismo + capita + densidadeInv;
    
    // Cálculo da densidade demográfica, densidade inversa, renda per capita da segunda carta
    densidade2 = (float)populacao2 / area2;
    capita2 = pib2 / (float)populacao2;
    densidadeInv2 = (1/densidade2);
    superPower2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + capita2 + densidadeInv2;
    
    // Menu
    printf("\n\nVamos dar inicio a BATALHA DAS CARTAS\n\n");
    printf("Escolha em qual categoria competir: \n\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Turismo\n");
    printf("5. Per Capita\n");
    printf("6. Densidade Inversa\n\n");
    scanf("%d%", &opcao);
   
    switch (opcao){
       case 1:
         printf("\n\nCategoria População\n");
         printf("População de %s: %lu \n", cidade, populacao);
         printf("População de %s: %lu \n", cidade2, populacao2);
             if (populacao > populacao2){
             printf("%s Venceu!", cidade);}
             else if(populacao < populacao2){
             printf("%s Venceu!", cidade2);}
             else{
             printf("Empatou");
             }
       break;
       
       case 2:
         printf("\n\nCategoria Area\n");
         printf("Area de %s: %f \n", cidade, area);
         printf("Area de %s: %f \n", cidade2, area2);
             if (area > area2){
             printf("%s Venceu!", cidade);}
             else if (area < area2) {
             printf("%s Venceu!", cidade2);}
             else {
             printf("Empatou");
             }
       break;
       
       case 3:
         printf("\n\nCategoria PIB\n");
         printf("PIB de %s: %lf \n", cidade, pib);
         printf("PIB de %s: %lf \n", cidade2, pib2);
             if (pib > pib2){
             printf("%s Venceu!", cidade);}
             else if (pib < pib2) {
             printf("%s Venceu!", cidade2);}
             else {
             printf("Empatou");
             }
       break;
         
       case 4:
         printf("\n\nCategoria Turismo\n");
         printf("Turismo de %s: %d \n", cidade, turismo);
         printf("Turismo de %s: %d \n", cidade2, turismo2);
             if (turismo > turismo2){
             printf("%s Venceu!", cidade);}
             else if (turismo < turismo2) {
             printf("%s Venceu!", cidade2);}
             else {
             printf("Empatou");
             }
       break;
       
       case 5:
         printf("\n\nCategoria Per Capita\n");
         printf("Per capita de %s: %f \n", cidade, capita);
         printf("Per capita de %s: %f \n", cidade2, capita2);
             if (capita > capita2){
             printf("%s Venceu!", cidade);}
             else if (capita < capita2) {
             printf("%s Venceu!", cidade2);}
             else {
             printf("Empatou");
             }
       break;
       
       case 6:
         printf("\n\nCategoria Densidade Inversa\n");
         printf("Densidade inversa de %s: %f \n", cidade, densidadeInv);
         printf("Densidade inversa de %s: %f \n", cidade2, densidadeInv2);
             if (densidadeInv < densidadeInv2){
             printf("%s Venceu!", cidade);}
             else if (densidadeInv > densidadeInv2){
             printf("%s Venceu!", cidade2);}
             else {
             printf("Empatou");
             }
       break;
       
       default:
       printf("Opção Inválida, escolha um número entre 1 a 6 apenas");
    }
        

return 0;
}