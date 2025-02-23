#include <stdio.h>




int main() {

    printf("cadastrar carta super trunfo!\n");

    //variaves carta 1.

    char estado1[30];
    char cidade1[30];
    char codigo1[10];
    float populacao1;
    float area1;
    float densidade_populacional1;
    float pib1;
    float pib_per_capita1;
    int pontos_turisticos1;

    //variaves carta 2.

    char estado2[30];
    char cidade2[30];
    char codigo2[10];
    float populacao2;
    float area2;
    float densidade_populacional2;
    float pib2;
    float pib_per_capita2;
    int pontos_turisticos2;


    
    // Cadastro das Cartas:

    //entrada e saidas

    
    printf("Digite o nome do estado:\n");
    scanf("%s",&estado1);

    printf("Digite o nome da cidade:\n");
    scanf("%s" ,&cidade1);
    
    printf("Digite o codigo da carta:\n");
    scanf("%s" ,&codigo1);
    
    printf("Digite a população:\n");
    scanf("%f" ,&populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f" ,&area1);

    printf("Digite o pib:\n");
    scanf("%f" ,&pib1);
    
    printf("Digite quantos pontos turisticos:\n");
    scanf("%d" ,&pontos_turisticos1);



     printf("Digite o nome do estado:\n");
    scanf("%s",&estado2);

    printf("Digite o nome da cidade:\n");
    scanf("%s" ,&cidade2);
    
    printf("Digite o codigo da carta:\n");
    scanf("%s" ,&codigo2);
    
    printf("Digite a população:\n");
    scanf("%f" ,&populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f" ,&area2);

    printf("Digite o pib:\n");
    scanf("%f" ,&pib2);
    
    printf("Digite quantos pontos turisticos:\n");
    scanf("%d" ,&pontos_turisticos2);


//base de caulculos .

    pib_per_capita1= (float)(pib1 / populacao1);

    densidade_populacional1=(float)(populacao1 / area1);

    pib_per_capita2= (float)(pib2 / populacao2);

    densidade_populacional2=(float)(populacao2 / area2);
    
       

    // Exibição dos Resultados carta 1.

        printf("\n=== CARTA 1 ===\n");
    printf("nome do estado: %s\n" , estado1);
    printf("nome da cidade: %s\n" ,cidade1);
    printf("codigo da carta: %s\n" ,codigo1);
    printf("populaçao: %2f\n" ,populacao1);
    printf("área em  %.2f km²\n" ,area1);
    printf("densidade populacional é: %.2f\n" ,densidade_populacional1);
    printf("pib: %.2f\n" ,pib1);
    printf("pib per capita é: %.2f\n" ,pib_per_capita1);
    printf("pontos turisticos: %d\n" ,pontos_turisticos1);

   //exibição de resultado carta 2.

       printf("\n=== CARTA 2 ===\n");
    printf("nome do estado: %s\n" , estado2);
    printf("nome da cidade: %s\n" ,cidade2);
    printf("codigo da carta: %s\n" ,codigo2);
    printf("populaçao: %2f\n" ,populacao2);
    printf("área em %.2f km²\n" ,area2);
    printf("densidade populacional é: %.2f\n" ,densidade_populacional2);
    printf("pib: %.2f\n" ,pib2);
    printf("pib per capita é: %.2f\n" ,pib_per_capita2);
    printf("pontos turisticos: %d\n" ,pontos_turisticos2);

    // Comparação de Cartas:
    printf("\n=== RESULTADO ===\n");
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

    printf("####   A cidade vencedora é:  #### %s\n", cidade1,cidade2);

    return 0;
}
