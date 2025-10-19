#include <stdio.h>

int main() {
    // ===== Declarações da Carta 1 =====
    char Estado[3], Cidade[20], Codig[6];
    int Codigo, NPT, Populacao;
    float DP, PIBC, SuperPoder, PIB, Area;

    // ===== Declarações da Carta 2 =====
    char Estado2[3], Cidade2[20], Codig2[6];
    int Codigo2, NPT2, Populacao2;
    float DP2, PIBC2, SuperPoder2, PIB2, Area2;

    // ===== Variáveis de comparação =====
    int opcao1, opcao2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma1, soma2;

    // ===== Entrada dos dados =====
    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", Estado);

    printf("Digite um número de 01 até 04: ");
    scanf("%d", &Codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turísticos tem na cidade: ");
    scanf("%d", &NPT);

    DP = Populacao / Area;
    PIBC = (PIB * 1000000000) / Populacao;
    SuperPoder = Populacao + Area + PIB + PIBC + (1 / DP) + NPT;
    sprintf(Codig, "%s%02d", Estado, Codigo);

    printf("\n========================================================================\n");
    printf("====================== Agora faça a segunda Carta ======================\n");
    printf("========================================================================\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", Estado2);

    printf("Digite um número de 01 até 04: ");
    scanf("%d", &Codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade2);

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB2);

    printf("Digite quantos pontos turísticos tem na cidade: ");
    scanf("%d", &NPT2);

    DP2 = Populacao2 / Area2;
    PIBC2 = (PIB2 * 1000000000) / Populacao2;
    SuperPoder2 = Populacao2 + Area2 + PIB2 + PIBC2 + (1 / DP2) + NPT2;
    sprintf(Codig2, "%s%02d", Estado2, Codigo2);


    printf("\n========================================================================\n");
    printf("================================ CARTA 01 ===============================\n");
    printf("========================================================================\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\n",
           Estado, Codig, Cidade, Populacao, Area, PIB, NPT, DP, PIBC);

    printf("\n========================================================================\n");
    printf("================================ CARTA 02 ===============================\n");
    printf("========================================================================\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bi\nPontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f\n",
           Estado2, Codig2, Cidade2, Populacao2, Area2, PIB2, NPT2, DP2, PIBC2);

  
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n> ");
    scanf("%d", &opcao1);


    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turísticos\n");
    if (opcao1 != 5) printf("5. Densidade Demográfica\n");
    printf("> ");
    scanf("%d", &opcao2);


    switch (opcao1) {
        case 1: valor1_c1 = Populacao; valor1_c2 = Populacao2; break;
        case 2: valor1_c1 = Area; valor1_c2 = Area2; break;
        case 3: valor1_c1 = PIB; valor1_c2 = PIB2; break;
        case 4: valor1_c1 = NPT; valor1_c2 = NPT2; break;
        case 5: valor1_c1 = DP; valor1_c2 = DP2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // = Atribui os valores do segundo atributo =
    switch (opcao2) {
        case 1: valor2_c1 = Populacao; valor2_c2 = Populacao2; break;
        case 2: valor2_c1 = Area; valor2_c2 = Area2; break;
        case 3: valor2_c1 = PIB; valor2_c2 = PIB2; break;
        case 4: valor2_c1 = NPT; valor2_c2 = NPT2; break;
        case 5: valor2_c1 = DP; valor2_c2 = DP2; break;
        default: printf("Opção inválida!\n"); return 0;
    }


    printf("\n==================== RESULTADO DAS COMPARAÇÕES ====================\n");

    
    printf("\nAtributo 1: ");
    switch (opcao1) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }

    if (valor1_c1 == valor1_c2) {
        printf("Empate no Atributo 1!\n");
    } else {
        if (opcao1 == 5) {

            printf("Vence menor valor → %s venceu!\n",
                   (valor1_c1 < valor1_c2) ? Cidade : Cidade2);
        } else {

            printf("Vence maior valor → %s venceu!\n",
                   (valor1_c1 > valor1_c2) ? Cidade : Cidade2);
        }
    }
    printf("%s: %.2f | %s: %.2f\n", Cidade, valor1_c1, Cidade2, valor1_c2);

    printf("\nAtributo 2: ");
    switch (opcao2) {
        case 1: printf("População\n"); break;
        case 2: printf("Área\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turísticos\n"); break;
        case 5: printf("Densidade Demográfica\n"); break;
    }

    if (valor2_c1 == valor2_c2) {
        printf("Empate no Atributo 2!\n");
    } else {
        if (opcao2 == 5) {
            // densidade: vence o menor
            printf("Vence menor valor → %s venceu!\n",
                   (valor2_c1 < valor2_c2) ? Cidade : Cidade2);
        } else {
            // demais: vence o maior
            printf("Vence maior valor → %s venceu!\n",
                   (valor2_c1 > valor2_c2) ? Cidade : Cidade2);
        }
    }
    printf("%s: %.2f | %s: %.2f\n", Cidade, valor2_c1, Cidade2, valor2_c2);


    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\n==================== SOMA FINAL DOS ATRIBUTOS ====================\n");
    printf("%s: %.2f\n%s: %.2f\n", Cidade, soma1, Cidade2, soma2);

    if (soma1 == soma2) {
        printf("\nResultado Final: Empate!\n");
    } else {
        printf("\nResultado Final: %s venceu a rodada!\n",
               (soma1 > soma2) ? Cidade : Cidade2);
    }

    return 0;
}
