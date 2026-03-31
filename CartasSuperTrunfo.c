#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    
      printf("Ola mundo, no codespace\n");
        printf("\n");

          // Área para definição das variáveis para armazenar as propriedades das cidades



                  char Estado[50] = "Paraná";
                          char Code[10] = "A01";
                                  char Cidade[20] = "Curitiba";
                                          int População = 11900000;
                                                  float Area = 200000;
                                                          float PIB = 765;
                                                                  int Pontosturisticos = 32;


                                                                    // Área para entrada de dados

                                                                      // Área para exibição dos dados da cidade
                                                                               printf("Estado: %s\n", Estado);
                                                                                        printf("Codigo da carta: %s\n", Code);
                                                                                                 printf("Cidade: %s\n",Cidade);
                                                                                                          printf("População: %d\n", População);
                                                                                                                   printf("Área: %.0fKm²\n", Area);
                                                                                                                            printf("PIB: %.0fBilhões\n", PIB);
                                                                                                                                     printf("Pontos Turisticos: %d\n", Pontosturisticos);

                                                                                                                                              

                                                                                                                                              return 0;
                                                                                                                                              }