#include <stdio.h>

int main() {
    // Carta 1
    char estado1[100] = "M";
    char codigo1[500] = "M03";
    char nome1[500] = "SS do Paraiso";
    int populacao1 = 72000;
    float area1 = 814.925;
    float pib1 = 2.200000000;
    int pontos_turisticos1 = 12;
    float densidade_demografica = 88.10;

    // Carta 2
    char estado2[100] = "S";
    char codigo2[30] = "S02";
    char nome2[100] = "São Simão";
    int populacao2 = 13442;
    float area2 = 618.000;
    float pib2 = 501.300000;
    int pontos_turisticos2 = 5;
    float densidade_demografica2 = 21.78;

    int opcao;

    printf("=== SUPER TRUNFO MUNICÍPIOS ===\n\n");
    printf("Carta 1: %s (%s)\n", nome1, codigo1);
    printf("Carta 2: %s (%s)\n\n", nome2, codigo2);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade demografica\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nComparando POPULAÇÃO...\n");
            if (populacao1 > populacao2)
                printf("%s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nComparando ÁREA...\n");
            if (area1 > area2)
                printf("%s venceu!\n", nome1);
            else if (area2 > area1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nComparando PIB...\n");
            if (pib1 > pib2)
                printf("%s venceu!\n", nome1);
            else if (pib2 > pib1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nComparando PONTOS TURÍSTICOS...\n");
            if (pontos_turisticos1 > pontos_turisticos2)
                printf("%s venceu!\n", nome1);
            else if (pontos_turisticos2 > pontos_turisticos1)
                printf("%s venceu!\n", nome2);
            else
                printf("Empate!\n");
            break;
        
        case 5:
            printf("\nComparando DENSIDADE DEMOGRAFICA...\n");
            if(densidade_demografica < densidade_demografica2)
                printf("%s venceu!\n", nome1);
            else if (densidade_demografica2 < densidade_demografica)
                printf("%s venceu!\n", nome2);
            else 
                printf("Empate!\n");
             break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}