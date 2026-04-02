#include <stdio.h>

    int main() {

        char Estado1[10]= "Paraná", Estado2[10]= "Bahia", Estado3[10]= "Tocantins", Estado4[10]= "Pernambuco";
        char Code1[10]= "A01", Code2[10]= "A02", Code3[10]= "A03", Code4[10]= "A04";
        char Cidade1[10]= "Curitiba", Cidade2[10]="Salvador", Cidade3[10]= "Palmas", Cidade4[10]= "Recife";
        int População1 = 3, População2 = 2, População3 = 323, População4 = 1;
        float Área1 = 432, Área2 = 693.44, Área3 = 2219, Área4 = 218.84;
        float Pib1 = 98, PIB2 = 62.95, PIB3 = 14.168, PIB4 = 54.691;
        int Pontost1 = 23, Pontost2 = 29, Pontost3 = 35, Pontost4 = 17;

        printf("Carta 1\n");

        printf("\n");


        printf("Estado: %s\n", Estado1);
        printf("Codigo da carta: %s\n", Code1);
        printf("Nome da cidade: %s\n", Cidade1);
        printf("População: %i Milhões de habitantes\n", População1);
        printf("Área: %.0fKm²\n", Área1);
        printf("PIB: %.0f Bilhões de Reais\n", Pib1);
        printf("Pontos Turisticos:  %d\n", Pontost1);

        printf("\n");

        printf("Carta 2\n");

        printf("\n");

        printf("Estado: %s\n", Estado2);
        printf("Codigo da carta: %s\n", Code2);
        printf("Nome da cidade: %s\n", Cidade2);
        printf("População: %i Milhões de habitantes\n", População2);
        printf("Área: %.0fKm²\n", Área2);
        printf("PIB: %.0f Bilhões de Reais\n", PIB2);
        printf("Pontos Turisticos: %d\n", Pontost2);

        printf("\n");

        printf("Carta 3\n");
    
        printf ("\n");

        printf("Estado: %s\n", Estado3);
        printf("Codigo da carta: %s\n", Code3);
        printf("Nome da cidade: %s\n", Cidade3);
        printf("População: %i\n", População3);
        printf("Área: %0.fKm²\n", Área3);
        printf("PIB: %0.f Milhões de Reais\n", PIB3);
        printf("Pontos Turisticos: %d\n", Pontost3);

        printf("\n");

        printf("Carta 4\n");

        printf("\n");

        printf("Estado: %s\n", Estado4);
        printf("Codigo da carta: %s\n", Code4);
        printf("Nome da Cidade: %s\n", Cidade4);
        printf("População: %i Milhão de habitantes\n", População4);
        printf("Área: %0.fKm²\n", Área4);
        printf("PIB: %0.f  Bilhões de Reais\n", PIB4);
        printf("Pontos Turisticos: %d\n", Pontost4);





        return 0;

    }