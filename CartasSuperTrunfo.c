#include <stdio.h>

    int main() {

        //Área para definição das variáveis para armazenar as propriedades das cidades

        char Estado1[10]= "Paraná", Estado2[10]= "Bahia";
        char Code1[10]= "A01", Code2[10]= "A02";
        char Cidade1[10]= "Curitiba", Cidade2[10]="Salvador";
        unsigned long int População1 = 3000000, População2 = 2000000;
        float Área1 = 432, Área2 = 693.44;
        float PIB1 = 98, PIB2 = 62.95;
        int Pontost1 = 23, Pontost2 = 29;
        float densip1 = (float) População1 / Área1, densip2 = (float) População2 / Área2;
        float Pibper1 = (float) População1 / PIB1, Pibper2  = (float) População2 / PIB2;
        float superpoder1, superpoder2;
        double inverdensip1, inverdensip2;
        inverdensip1 = 1/densip1;
        inverdensip2 = 1/densip2;
        superpoder1  = População1 + Área1 + PIB1 + Pibper1 + inverdensip1 + Pontost1;
        superpoder2  = População2 + Área2 + PIB2 + Pibper2 + inverdensip2 + Pontost2;
        float resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;
        resultado1  = População1 > População2;
        resultado2 = Área1 >  Área2;
        resultado3 = PIB1 > PIB2;
        resultado4  = Pontost1 > Pontost2;
        resultado5 = densip1 > densip2;
        resultado6 = Pibper1 > Pibper2;
        resultado7 = superpoder1  > superpoder2;

        //Área para exibição dos dados das cidades

        printf("Carta 1\n");

        printf("\n");


        printf("Estado: %s\n", Estado1);
        printf("Codigo da carta: %s\n", Code1);
        printf("Nome da cidade: %s\n", Cidade1);
        printf("População: %lu\n", População1);
        printf("Área: %.0fKm²\n", Área1);
        printf("PIB: %.0f Bilhões de Reais\n", PIB1);
        printf("Pontos Turisticos:  %d\n", Pontost1);
        printf("Densidade Populacional: %.2f Hab/Km²\n", densip1);
        printf("PIB per Capita: %.2f Reais\n", Pibper1);
        printf("Densidade populacional inversa carta1: %f\n", inverdensip1);
        printf("\n");
        printf("Super poder carta 1: %.2f\n", superpoder1);

        printf("\n");

        printf("Carta 2\n");

        printf("\n");

        printf("Estado: %s\n", Estado2);
        printf("Codigo da carta: %s\n", Code2);
        printf("Nome da cidade: %s\n", Cidade2);
        printf("População: %lu\n", População2);
        printf("Área: %.0fKm²\n", Área2);
        printf("PIB: %.2f Bilhões de Reais\n", PIB2);
        printf("Pontos Turisticos: %d\n", Pontost2);
        printf("Desindade Populacional: %.2f Hab/Km²\n", densip2);
        printf("PIB per Capita: %.2f Reais\n", Pibper2);
        printf("Densidade populacional inversa  carta2: %f\n",inverdensip2);
        printf("\n");
        printf("Super poder carta 2: %.2f\n", superpoder2);

        printf("\n");

        // Área para comparação das cartas

        printf("***Comparação das Cartas***");

        printf("\n");

        printf("População: Carta 1 venceu (%.0f)\n", resultado1);
        printf("Área: Carta 1 venceu (%.0f)\n", resultado2);
        printf("PIB: Carta 1 venceu (%.0f)\n", resultado3);
        printf("Pontos Turisticos: Carta 1 venceu (%.0f)\n", resultado4);
        printf("Densidade Populacional: Carta 1 venceu (%.0f)\n", resultado5);
        printf("PIB per Capita: Carta 1 venceu (%.0f)\n", resultado6);
        printf("Super Poder: Carta 1 venceu (%.0f)\n", resultado7);
        



        return 0;

    }