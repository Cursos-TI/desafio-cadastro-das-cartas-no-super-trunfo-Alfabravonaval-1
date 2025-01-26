#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    
    int populacao, num_pontos_turisticos;
    char cidade[20], estado[20], pais[20];
    float area, pib;

    printf("digite o nome do pais: \n");
    scanf("%s", &pais);

    printf("digite o nome do estado: \n");
    scanf("%s", &estado);

    printf("digite o nome da cidade: \n");
    scanf("%d", &cidade);

    printf("digite a populacao da cidade: \n");
    scanf("%d", &populacao);

    printf("digite o num_pontos_turisticos: \n");
    scanf("%d", &num_pontos_turisticos);

    printf("digite a area da cidade em km2: \n");
    scanf("%f", &area); 

    printf("digite o pib da cidade em bilhões): \n");
    scanf("%f", &pib);

    printf("nome do pais: %s - nome do estado: %s, pais, estado \n");
    printf("populacao: %d - area: %f, populacao, area \n");
    printf("num_pontos_turisticos: %d - pib: %f,num_pontos_turisticos,pib");
    
    
    return 0;
}
