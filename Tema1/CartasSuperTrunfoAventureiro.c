#include<stdio.h>

// declaração de variáveis.
char estado, cidade[50], estado2, cidade2[50];
int codigo, populacao, turismo, codigo2, populacao2, turismo2;
float area, pib, densidade, capita, area2, pib2, densidade2, capita2;

int main()
{
    // Mensagem inicial da atividade
    printf("Vamos construir a base do nosso jogo\n Super Trunfo de Países.\n\n");
    printf("Um sistema para cadastrar as cartas\n com informações sobre as cidades.\n\n");
    
    // Cadastro da primeira carta
    printf("Entre uma letra de A a H para registrar\n o estado da carta: \n");
    scanf(" %c", &estado);
    printf("Estado: %c \n\n", estado);
    
    printf("Entre um número de 01 a 04 para registrar o código da carta: \n");
    scanf("%d", &codigo);
    printf("Código: %c%02d \n\n", estado, codigo);
    
    /* 
    Captura o nome da cidade.  
   Como nomes de cidades podem conter espaços, usamos 'fgets()', que permite a leitura de strings com espaços.  
   Também chamamos 'getchar()' antes para limpar o buffer e evitar que o '\n' remanescente do 'scanf()'  
   faça o 'fgets()' pular a entrada do usuário. 
   */
    printf("Entre o nome da cidade:\n");
    getchar(); 
    fgets(cidade,50,stdin);  
    printf("Cidade: %s \n", cidade);
    
    printf("Entre o número de habitantes da cidade:\n");
    scanf("%d", &populacao);
    printf("População: %d \n\n", populacao);
    
    printf("Entre a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);
    printf("Área: %.2f Km² \n\n", area);
    
    printf("Entre o PIB (Produto Interno Bruto) da cidade : \n");
    scanf("%f", &pib);
    printf("PIB: R$%.2f Bilhões de Reais\n\n", pib);
    pib = pib*1e9; //Conversão de bilhões pra Reais
    
    printf("Entre o número de pontos turísticos da cidade:\n");
    scanf("%d", &turismo);
    printf("Pontos Turísticos: %d \n\n\n", turismo);
    // Cálculo da densidade demográfica e renda per capita da primeira carta
    densidade = (float)populacao / area;
    capita = pib / (float)populacao;
    
    // Exibição dos dados da primeira carta
    printf("DADOS CADASTRADOS DA PRIMEIRA CARTA\n\n");
    printf("Estado: %c \n", estado);
    printf("Código: %c%02d \n", estado, codigo);
    printf("Cidade: %s", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f Km² \n", area);
    printf("PIB: R$%.2f Bilhões de Reais\n", pib/1e9);//Conversão 
    printf("Pontos Turísticos: %d \n", turismo);
    printf("Densidade Populacional: %.1f hab/Km² \n", densidade);
    printf("PIB per Capita: R$ %.2f Reais\n\n\n", capita);
    
    // Mensagem de início da próxima etapa
    printf("VAMOS AO CADASTRADO DA SEGUNDA CARTA\n\n");
   
    // Cadastro da segunda carta
    printf("Entre uma letra de A a H para registrar\n o estado da carta: \n");
    scanf(" %c", &estado2);
    printf("Estado: %c \n\n", estado2);
    
    printf("Entre um número de 01 a 04 para registrar o código da carta: \n");
    scanf("%d", &codigo2);
    printf("Código: %c%02d \n\n", estado2, codigo2);
    
    printf("Entre o nome da cidade:\n");
    getchar();
    fgets(cidade2,50,stdin);
    printf("Cidade: %s \n", cidade2);
    
    printf("Entre o número de habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("População: %d \n\n", populacao2);
    
    printf("Entre a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);
    printf("Área: %.2f Km² \n\n", area2);
    
    printf("Entre o PIB (Produto Interno Bruto) da cidade : \n");
    scanf("%f", &pib2);
    printf("PIB: R$%.2f Bilhões de Reais\n\n", pib2);
    pib2 = pib2*1e9;
    
    printf("Entre o número de pontos turísticos da cidade:\n");
    scanf("%d", &turismo2);
    printf("Pontos Turísticos: %d \n\n\n", turismo2);
    
    // Cálculo da densidade demográfica e renda per capita da segunda carta
    densidade2 = (float)populacao2 / area2;
    capita2 = pib2 / (float)populacao2;
    
    // Exibição dos dados da segunda carta
    printf("DADOS CADASTRADOS DA SEGUNDA CARTA\n\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%02d \n", estado2, codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf("PIB: R$%.2f Bilhões de Reais\n", pib2/1e9);
    printf("Pontos Turísticos: %d \n", turismo2);
    printf("Densidade Populacional: %.1f hab/Km² \n", densidade2);
    printf("PIB per Capita: R$ %.2f Reais\n\n\n", capita2);
    return 0;
}
