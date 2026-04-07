#include <stdio.h>

    int main() {

        //Área para definição das variáveis para armazenar as propriedades das cidades

        char Estado1[10]= "Paraná", Estado2[10]= "Bahia";
        char Code1[10]= "A01", Code2[10]= "A02";
        char Cidade1[10]= "Curitiba", Cidade2[10]="Salvador";
        int População1 = 3000000, População2 = 2000000;
        float Área1 = 432, Área2 = 693.44;
        float PIB1 = 98, PIB2 = 62.95;
        int Pontost1 = 23, Pontost2 = 29;
        float densip1 = (float) População1 / Área1, densip2 = (float) População2 / Área2;
        float Pibper1 = (float) População1 / PIB1, Pibper2  = (float) População2 / PIB2;

        //Área para exibição dos dados das cidades

        printf("Carta 1\n");

        printf("\n");


        printf("Estado: %s\n", Estado1);
        printf("Codigo da carta: %s\n", Code1);
        printf("Nome da cidade: %s\n", Cidade1);
        printf("População: %i\n", População1);
        printf("Área: %.0fKm²\n", Área1);
        printf("PIB: %.0f Bilhões de Reais\n", PIB1);
        printf("Pontos Turisticos:  %d\n", Pontost1);
        printf("Densidade Populacional: %.2f Hab/Km²\n", densip1);
        printf("PIB per Capita: %.2f Reais\n", Pibper1);

        printf("\n");

        printf("Carta 2\n");

        printf("\n");

        printf("Estado: %s\n", Estado2);
        printf("Codigo da carta: %s\n", Code2);
        printf("Nome da cidade: %s\n", Cidade2);
        printf("População: %i\n", População2);
        printf("Área: %.0fKm²\n", Área2);
        printf("PIB: %.0f Bilhões de Reais\n", PIB2);
        printf("Pontos Turisticos: %d\n", Pontost2);
        printf("Desindade Populacional: %.2f Hab/Km²\n", densip2);
        printf("PIB per Capita: %.2f Reais\n", Pibper2);



        return 0;

    }