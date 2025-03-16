#include <stdio.h>

int main(){

    printf("Desafio cadastro das Cartas no Super Trunfo!\n");

    printf("**Carta 1** \n"); 
    
    
        char estado1[20],estado2[20];  
        char codigo1[10],codigo2[10];     
        char cidade1[20],cidade2[20]; 
        int  populacao1,populacao2;  
        int  pontosturisticos1,pontosturisticos2;
        float area1,area2;
        float pib1,pib2; 
        float densidade_populacional1,densidade_populacional2;
        float PIB_per_capita1,PIB_per_capita2;
        float Superpoder1, Superpoder2;
        
        // Carta 1
        printf("Digite o Estado: \n"); 
        scanf("%s", &estado1); 

        printf("Digite a letra inicial do estado seguido pelo codigo da carta: \n"); 
        scanf("%s", &codigo1); 
       
        printf("Digite a Cidade: \n"); 
        scanf("%s", &cidade1); 

        printf("Digite a População: \n");   
        scanf("%d", &populacao1); 

        printf("Digite o Número de Pontos Turisticos: \n"); 
        scanf("%d", &pontosturisticos1); 

        printf("Digite a Área em km²: \n"); 
        scanf("%f", &area1); 

        printf("Digite o Produto Interno Bruto(em bilhões de reais): \n"); 
        scanf("%f", &pib1); 
       
        // Carta 2
        printf("Desafio cadastro das Cartas no Super Trunfo!\n");
        printf("Carta 2 \n");
                
        printf("Digite o Estado: \n"); 
        scanf("%s", &estado2); 

        printf("Digite a letra inicial do estado seguido pelo codigo da carta: \n"); 
        scanf("%s", &codigo2); 
       
        printf("Digite a Cidade: \n"); 
        scanf("%s", &cidade2); 

        printf("Digite a População: \n");   
        scanf("%d", &populacao2); 

        printf("Digite o Número de Pontos Turisticos: \n"); 
        scanf("%d", &pontosturisticos2); 

        printf("Digite a Área em km²: \n"); 
        scanf("%f", &area2); 

        printf("Digite o Produto Interno Bruto(em bilhões de reais): \n"); 
        scanf("%f", &pib2); 

        // A densidade populacional e PIB Per Capita serão calculados através dos dados coletados. 

        densidade_populacional1 = (float) populacao1 / area1;
        densidade_populacional2 = (float) populacao2 / area2;
        
        PIB_per_capita1 = (float) pib1 / populacao1 * 1000000000; 
        PIB_per_capita2 = (float) pib2 / populacao2 * 1000000000;

         // Calcular o Super Poder de cada carta

         Superpoder1 = area1 + pib1 + (float) pontosturisticos1 + (1 / densidade_populacional1) + PIB_per_capita1;
         Superpoder2 = area2 + pib2 + (float) pontosturisticos2 + (1 / densidade_populacional2) + PIB_per_capita2;


        // Exibição de dados Carta 1
        printf("***CARTA 1*** \n"); 
        printf("Código: %s\n", codigo1); 
        printf("Estado: %s\n", estado1); 
        printf("Cidade: %s\n", cidade1); 
        printf("População: %d habitantes\n", populacao1); 
        printf("Área em Km2: %.2f\n", area1); 
        printf("Pontos Turisticos: %d\n", pontosturisticos1); 
        printf("Produto Interno Bruto: R$ %.2f Bilhões\n", pib1);
        printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional1); 
        printf("PIB per capita: R$ %.2f / habitante\n",PIB_per_capita1); 
        printf("SuperPoder: %.2f\n", Superpoder1); 

        // Exibição de dados Carta 2
        printf ("***CARTA 2*** \n"); 
        printf("Código: %s\n", codigo2); 
        printf("Estado: %s\n", estado2); 
        printf("Cidade: %s\n", cidade2); 
        printf("População: %d habitantes\n", populacao2); 
        printf("Área em Km2: %.2f\n", area2); 
        printf("Pontos Turisticos: %d\n", pontosturisticos2); 
        printf("Produto Interno Bruto: R$ %.2f Bilhões\n", pib2); 
        printf("Densidade Populacional: %.2f habitantes/km2\n", densidade_populacional2); 
        printf("PIB per capita: R$ %.2f / habitante\n",PIB_per_capita2);
        printf("SuperPoder: %.2f\n", Superpoder2); 

        //Resultado comparativo das Cartas

        printf("\n*** VAMOS COMEÇAR! ***\n\n");
        printf("População: Carta 1 venceu? (%d)\n", populacao1 > populacao2);
        printf("Área: Carta 1 venceu? (%d)\n", area1 > area2);
        printf("PIB: Carta 1 venceu? (%d)\n", pib1 > pib2);
        printf("Número de pontos turísticos: Carta 1 venceu? (%d)\n", pontosturisticos1 > pontosturisticos2);
        printf("Densidade demográfica: Carta 1 venceu? (%d)\n", (1 / densidade_populacional1) > (1 / densidade_populacional2));
        printf("PIB per Capita: Carta 1 venceu? (%d)\n", PIB_per_capita1 > PIB_per_capita2);
        printf("Super Poder: Carta 1 venceu? (%d)\n", Superpoder1 > Superpoder2);

        printf("\n\n *** AGRADECEMOS POR JOGAR ***\n\n");


        return 0; 


} 