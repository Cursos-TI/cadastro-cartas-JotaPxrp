
#include <stdio.h>
    int main(){
        char Estado[3];
        char Cidade[20];
        int Codigo;
        int Populacao;
        float Area;
        float PIB;
        int NPT;
        char Codig[6];
        float DP;
        float PIBC;
        float SuperPoder;

        char Estado2[3];
        char Cidade2[20];
        int Codigo2;
        int Populacao2;
        float Area2;
        float PIB2;
        int NPT2;
        char Codig2[6];
        float DP2;
        float PIBC2;
        float SuperPoder2;

        int resultado1, resultado2,resultado3,resultado4,resultado5, resultado6,resultado7, resultado8;
    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", Estado);

    printf("Digite um numero de 01 até 04: ");
    scanf("%d", &Codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade); // permite espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao);

    printf("Digite a area do estado em km²: ");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB);

    printf("Digite quantos pontos turisticos tem na cidade: ");
    scanf("%d", &NPT);

    printf("========================================================================\n");
    printf("======================Agora faça a segunda Carta========================\n");
    printf("========================================================================\n");

    printf("Digite uma letra de 'A' a 'H': ");
    scanf("%s", Estado2);

    printf("Digite um numero de 01 até 04: ");
    scanf("%d", &Codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", Cidade2); // permite espaços

    printf("Digite a população da cidade: ");
    scanf("%d", &Populacao2);

    printf("Digite a area do estado em km²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &PIB2);

    DP = Populacao / Area;
    PIBC = (PIB * 1000000000) / Populacao;

    printf("Digite quantos pontos turisticos tem na cidade: \n");
    scanf("%d", &NPT2);
     sprintf(Codig, "%s%02d", Estado, Codigo);
    printf("========================================================================\n");
    printf("================================ CARTA 01================================\n");
    printf("========================================================================\n");

        printf("Carta 1:\n");
        printf("Estado: %s\n", Estado);
        printf("Código: %s\n", Codig);
        printf("Nome da Cidade: %s\n", Cidade);
        printf("População: %d\n",Populacao);
        printf("Área: %.2f km²\n", Area);
        printf("PIB: %.2f bilhões de reais\n", PIB);
        printf("Número de Pontos Turísticos: %d\n", NPT);
        printf("Densidade Populacional: %.2f hab/km²\n", DP);
        printf("PIB per capital: %.2f reais\n", PIBC);
        
        SuperPoder = Populacao + Area + PIB + PIBC + (1 / DP) + NPT;
        printf("O Super Poder desta carta é %.2f\n", SuperPoder);

        printf("========================================================================\n");
        printf("================================ CARTA 02================================\n");
        printf("========================================================================\n");

        DP2 = Populacao2 / Area2;
        PIBC2 = (PIB2 * 1000000000) / Populacao2;

     sprintf(Codig2, "%s%02d", Estado2, Codigo2);
        printf("Carta 2:\n");
        printf("Estado: %s\n", Estado2);
        printf("Código: %s\n", Codig2); 
        printf("Nome da Cidade: %s\n", Cidade2);
        printf("População: %d\n",Populacao2);
        printf("Área: %.2f km²\n", Area2);
        printf("PIB: %.2f bilhões de reais\n", PIB2);
        printf("Número de Pontos Turísticos: %d\n", NPT2);
        printf("Densidade Populacional: %.2f hab/km²\n", DP2);
        printf("PIB per capital: %.2f reais\n", PIBC2);

        SuperPoder2 = Populacao2 + Area2 + PIB2 + PIBC2 + (1 / DP2) + NPT2;
        printf("O Super Poder desta carta é %.2f\n", SuperPoder2);

        resultado1 = Populacao > Populacao2;
        resultado2 = Area > Area2;
        resultado3 = PIB > PIB2;
        resultado4 = NPT > NPT2;
        resultado5 = DP > DP2;
        resultado6 = PIBC > PIBC2;
        resultado7 = SuperPoder < SuperPoder2;

    printf("========================================================================\n");
    printf("============================= Comparação ===============================\n");
    printf("========================================================================\n");

        printf("População: %d\n", resultado1);
        printf("Área: %d\n",resultado2);
        printf("PIB: %d\n", resultado3);
        printf("Pontos Turísticos:%d\n", resultado4);
        printf("Densidade Populacional: %d\n", resultado5);
        printf("PIB per Capita:%d\n", resultado6); 
        printf("Super Poder: %d\n", resultado7); 
        return 0;
    }
    
