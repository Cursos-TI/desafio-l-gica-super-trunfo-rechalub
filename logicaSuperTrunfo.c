#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //variaves:

    
    char estado[55];
    char cidade[30];
    char codigo[12];
    float populacao1 ,populacao2;
    float area1, area2;
    float densidade_populacional;
    float pib1,pib2;
    float pib_per_capita;
    int pontos_turisticos1,pontos_turisticos2;


    
    // Cadastro das Cartas:

    //entrada e saidas

    
    printf("Digite o nome do estado:\n");
    scanf("%s",&estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s" ,&cidade);
    
    printf("Digite o codigo da carta:\n");
    scanf("%s" ,&codigo);
    
    printf("Digite a população:\n");
    scanf("%f" ,&populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f" ,&area1);

    printf("Digite o pib:\n");
    scanf("%f" ,&pib1);
    
    printf("Digite quantos pontos turisticos:\n");
    scanf("%d" ,&pontos_turisticos1);



     printf("Digite o nome do estado:\n");
    scanf("%s",&estado);

    printf("Digite o nome da cidade:\n");
    scanf("%s" ,&cidade);
    
    printf("Digite o codigo da carta:\n");
    scanf("%s" ,&codigo);
    
    printf("Digite a população:\n");
    scanf("%f" ,&populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f" ,&area2);

    printf("Digite o pib:\n");
    scanf("%f" ,&pib2);
    
    printf("Digite quantos pontos turisticos:\n");
    scanf("%d" ,&pontos_turisticos2);


//base de caulculos .

    pib_per_capita= (float)(pib1 / populacao1);

    densidade_populacional=(float)(populacao1 / area1);

    pib_per_capita= (float)(pib2 / populacao2);

    densidade_populacional=(float)(populacao2 / area2);
    
    // Comparação de Cartas:
    
     if (populacao1 > populacao2) {
     printf("Cidade 1 tem maior população!\n");
    } else  if (populacao1 < populacao2){ 
     printf("Cidade 2 tem maior população!\n");
    } else {
     printf("Cidade tem população igual!\n");
    }
     if (area1 > area2){
        printf("Cidade 1 tem maior área!\n");
     } else  if (area1 < area2){
        printf("Cidade 2 tem maior área!\n");
     } else {
      printf("Cidade tem área igual!\n");
     }
     if (pib1 > pib2){
        printf("Cidade 1 tem maior pib!\n");
     } else if (pib1 < pib2){
        printf("Cidade 2 tem maior pib!\n");
     } else {
      printf("Cidade te pib igual!\n");
     }
     if (pontos_turisticos1 > pontos_turisticos2){
        printf("Cidade 1 tem maior pontos turisticos!\n");
     } else if (pontos_turisticos1 < pontos_turisticos2){
        printf("Cidade 2 tem maior pontos turisticos!\n");
     } else {
      printf("Cidade tem mesmo número de pontos turísticos!\n");
     }     

    // Exibição dos Resultados:
    printf("A cidade vencedora é: %s\n", cidade);
    printf("nome do estado: %s\n" , estado);
    printf("nome da cidade: %s\n" ,cidade);
    printf("codigo da carta: %s\n" ,codigo);
    printf("populaçao: %2f\n" ,populacao1,populacao2);
    printf("área em km: %.2f\n" ,area1,area2);
    printf("densidade populacional é: %.2f\n" ,densidade_populacional);
    printf("pib: %.2f\n" ,pib1,pib2);
    printf("pib per capita é: %.2f\n" ,pib_per_capita);
    printf("pontos turisticos: %d\n" ,pontos_turisticos1,pontos_turisticos2);

    return 0;
}
