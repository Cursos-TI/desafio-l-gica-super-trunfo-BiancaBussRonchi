#include <stdio.h>

int main() {
    // Dados das cidades
    char nomeA[] = "Rio de Janeiro";
    char nomeB[] = "Sao Paulo";

    int populacaoA = 6748000;
    int populacaoB = 12330000;

    float areaA = 1200.27;
    float areaB = 1521.11;

    float pibA = 407.0;   // em bilhões
    float pibB = 699.0;   // em bilhões

    int pontosTuristicosA = 25;
    int pontosTuristicosB = 40;

    // Cálculos automáticos
    float densidadeA = populacaoA / areaA;
    float densidadeB = populacaoB / areaB;
    float pibPerCapitaA = (pibA * 1000000000) / populacaoA;
    float pibPerCapitaB = (pibB * 1000000000) / populacaoB;

    int vitoriasA = 0, vitoriasB = 0;

    printf("=== Comparacao Super Trunfo: %s x %s ===\n\n", nomeA, nomeB);

    // População
    printf("Populacao: ");
    if (populacaoA > populacaoB) {
        printf("%s vence\n", nomeA); vitoriasA++;
    } else {
        printf("%s vence\n", nomeB); vitoriasB++;
    }

    // Área
    printf("Area: ");
    if (areaA > areaB) {
        printf("%s vence\n", nomeA); vitoriasA++;
    } else {
        printf("%s vence\n", nomeB); vitoriasB++;
    }

    // PIB
    printf("PIB: ");
    if (pibA > pibB) {
        printf("%s vence\n", nomeA); vitoriasA++;
    } else {
        printf("%s vence\n", nomeB); vitoriasB++;
    }

    // PIB per capita
    printf("PIB per capita: ");
    if (pibPerCapitaA > pibPerCapitaB) {
        printf("%s vence\n", nomeA); vitoriasA++;
    } else {
        printf("%s vence\n", nomeB); vitoriasB++;
    }

    // Densidade demográfica (menor vence)
    printf("Densidade demografica: ");
    if (densidadeA < densidadeB) {
        printf("%s vence\n", nomeA); vitoriasA++;
    } else {
        printf("%s vence\n", nomeB); vitoriasB++;
    }

    // Pontos turísticos
    printf("Pontos turisticos: ");
    if (pontosTuristicosA > pontosTuristicosB) {
        printf("%s vence\n", nomeA); vitoriasA++;
    } else {
        printf("%s vence\n", nomeB); vitoriasB++;
    }

    // Resultado final
    printf("\n=== Resultado Final ===\n");
    printf("%s venceu %d atributos.\n", nomeA, vitoriasA);
    printf("%s venceu %d atributos.\n", nomeB, vitoriasB);

    if (vitoriasA > vitoriasB)
        printf("\n Cidade vencedora: %s!\n", nomeA);
    else if (vitoriasB > vitoriasA)
        printf("\n Cidade vencedora: %s!\n", nomeB);
    else
        printf("\nEmpate entre as cidades!\n");

    return 0;
}
