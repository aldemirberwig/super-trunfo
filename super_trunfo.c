#include <stdio.h>   // Biblioteca para entrada e saída. Para printf e scanf.
//#include <string.h>  // Biblioteca para manipulação de strings.

/*
Variáveis

- Cada carta tem suas próprias variáveis (estado1, codigo1, nomeCidade1, etc.).

- Strings (char[]) foram usadas para código e nome da cidade.

- Tipos numéricos (int e float) foram usados para população, área, PIB e pontos turísticos.

- Entrada de dados (scanf)

- Para o estado, usamos " %c" → o espaço antes do %c evita que o Enter anterior seja lido.

- Para o código da carta, usamos "%s" → lê uma string até o espaço.

- Para o nome da cidade, usamos " %[^\n]" → permite ler nomes compostos (ex.: Rio de Janeiro).

- Para os demais dados (int e float), usamos os formatos adequados.

Saída formatada (printf)

- Cada campo da carta é exibido de forma clara e individual.

- O %.2f garante que float (área e PIB) apareçam com duas casas decimais.

*/

int main() {
    // Declaração das variáveis da Carta 1
    char estado1;             
    char codigo1[4];          
    char nomeCidade1[50];     
    int populacao1;           
    float area1;              
    float pib1;               
    int pontosTuristicos1;    

    // Declaração das variáveis da Carta 2
    char estado2;             
    char codigo2[4];          
    char nomeCidade2[50];     
    int populacao2;           
    float area2;              
    float pib2;               
    int pontosTuristicos2;    

    // Entrada de dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em milhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em milhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Saída organizada
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f milhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f milhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0; // Programa finalizado
}
