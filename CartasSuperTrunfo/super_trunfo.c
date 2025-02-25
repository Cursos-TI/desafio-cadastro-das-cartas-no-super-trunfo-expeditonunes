#include <stdio.h>

int main(){

    printf("Desafio cadastro das Cartas no Super Trunfo!\n");  
    printf("Novo commit\n");
    
    char Estado[10];
        char Codigo[10];    
        char Cidade[15];
        int  Populacao; 
        int  Pontos;
        float Area;
        float PIB; 

        printf("Digite o Estado: \n"); 
        scanf("%s", &Estado); 

        printf("Digite o estado seguido pelo codigo da carta: \n"); 
        scanf("%s", &Codigo); 
       
        printf("Digite a Cidade: \n"); 
        scanf("%s", &Cidade); 

        printf("Digite a População: \n");   
        scanf("%d", &Populacao); 

        printf("Digite o Número de Pontos Turisticos: \n"); 
        scanf("%d", &Pontos); 

        printf("Digite a Área em km²: \n"); 
        scanf("%f", &Area); 

        printf("Digite o PIB \n"); 
        scanf("%f", PIB); 


        printf("Estado: %s\n", Estado); 
        printf("Codigo: %s\n", Codigo); 
        printf("Cidade: %s\n", Cidade);
        printf("População: %d\n", Populacao); 
        printf("Area: %f\n", Area); 
        printf("PIB: %f\n", PIB); 
        printf("Pontos Turisticos: %d\n", Pontos);


        


        return 0; 
    
        






}