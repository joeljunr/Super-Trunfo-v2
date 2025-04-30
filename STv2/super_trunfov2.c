#include <stdio.h>

int main(){
    char nomedapessoa[50];
    char nomedacidade1[50] , nomedacidade2[50];
    int populacao1, populacao2, pontosturisticos, pontosturisticos2, opcaomenu;
    float area1, area2, pib, pib2, 
    densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;

    // Aqui começamos a primeira carta // 
    // Pra deixar o código mais atraente, adicionei saudações
    
    printf("Seja Bem Vindo ao Super Trunfo! \n");
    printf("Digite seu nome: \n");
    scanf("%s", &nomedapessoa);
    printf("Seja Bem Vindo, %s!\n", nomedapessoa);

    printf("Digite o nome de um país: \n");
    scanf("%s", nomedacidade1);

    printf("Digite a população desse país: \n");
    scanf("%d", &populacao1);

    printf("Digite a area do país: \n");
    scanf("%f", &area1);

    printf("Digite o PIB do país: \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos);


    densidadepopulacional1 = (float)populacao1 / area1;
    pibpercapita1 = (pib * 1000000000) / (float)populacao1;
    //Aqui corrigi a falha que estava dando no PIB per capita,
    //pois o PIB estava em bilhões e a população em pessoas

    // Aqui calculamos a densidade populacional e o PIB per capita

    printf("** Vamos cadastrar sua segunda carta , %s :)   ***\n",nomedapessoa);

    printf("Digite o nome de outro país: \n");
    scanf("%s", nomedacidade2);

    printf("Digite a população desse país: \n");
    scanf("%d", &populacao2);

    printf("Digite a area do país: \n");
    scanf("%f", &area2);

    printf("Digite o PIB do país: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    densidadepopulacional2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;



    printf("\n");
    printf("\n");


    printf("*** CARTA 1 *** \n");
    printf("Nome do País : %s \n", nomedacidade1);
    printf("População : %d \n", populacao1);
    printf("Área : %.2f km² \n ", area1);
    printf("PIB : %.2f bilhões de reais\n", pib);
    printf("Números de Pontos Turísticos : %d \n", pontosturisticos);
    printf("Densidade Demográfica : %.2f hab.km²\n", densidadepopulacional1);
    printf("PIB per capita : %.2f reais \n ", pibpercapita1);
    

    printf("\n");
    printf("\n");
    
    printf("*** CARTA 2 *** \n");
    printf("Nome do País : %s \n", nomedacidade2);
    printf("População : %d \n", populacao2);
    printf("Área : %.2f km² \n ", area2);
    printf("PIB : %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos : %d \n", pontosturisticos2);
    printf("Densidade Demográfica : %.2f hab.km²\n", densidadepopulacional2);
    printf("PIB per capita : %.2f reais \n", pibpercapita2);

    printf("\n");
    printf("\n");

    printf("## MENU INTERATIVO DE COMPARAÇÃO ##\n");
    printf("Escolha o atributo que deseja comparar: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Número de Pontos Turísticos \n");
    printf("5 - Densidade Populacional \n");
    printf(" Digite a opção desejada:%d", opcaomenu);
    scanf("%d", &opcaomenu);
    if (opcaomenu ==1){
        if (populacao1 > populacao2){
            printf(" O pais %s GANHOU, pois tem a população de %d e é maior que a população de %s, que tem %d de população ",nomedacidade1,populacao1,nomedacidade2,populacao2);
        }else if (populacao1 < populacao2){
            printf(" O pais %s GANHOU, pois tem a população de %d e é maior que a população de %s, que tem %d de população ",nomedacidade2,populacao2,nomedacidade1,populacao1);
        }else{
            printf(" Os dois países tem a mesma população de %d ", populacao1);
        }
    }else if (opcaomenu ==2){
        if (area1 > area2){
            printf(" O pais %s GANHOU, pois tem a área de %.2f e é maior que a área de %s, que tem %.2f de área ",nomedacidade1,area1,nomedacidade2,area2);
        }else if (area1 < area2){
            printf(" O pais %s GANHOU, pois tem a área de %.2f e é maior que a área de %s, que tem %.2f de área ",nomedacidade2,area2,nomedacidade1,area1);
        }else{
            printf(" Os dois países tem a mesma área de %.2f ", area1);
        }
    }else if (opcaomenu ==3){
        if (pib > pib2){
            printf(" O pais %s GANHOU, pois tem o PIB de %.2f e é maior que o PIB de %s, que tem %.2f de PIB ",nomedacidade1,pib,nomedacidade2,pib2);
        }else if (pib < pib2){
            printf(" O pais %s GANHOU, pois tem o PIB de %.2f e é maior que o PIB de %s, que tem %.2f de PIB ",nomedacidade2,pib2,nomedacidade1,pib);
        }else{
            printf(" Os dois países tem o mesmo PIB de %.2f ", pib);
        }
    }else if (opcaomenu ==4){
        if (pontosturisticos > pontosturisticos2){
            printf(" O pais %s GANHOU, pois tem o número de pontos turísticos de %d e é maior que o número de pontos turísticos de %s, que tem %d de pontos turísticos ",nomedacidade1,pontosturisticos,nomedacidade2,pontosturisticos2);
        }else if (pontosturisticos < pontosturisticos2){
            printf(" O pais %s GANHOU, pois tem o número de pontos turísticos de %d e é maior que o número de pontos turísticos de %s, que tem %d de pontos turísticos ",nomedacidade2,pontosturisticos2,nomedacidade1,pontosturisticos);
        }else{
            printf(" Os dois países tem o mesmo número de pontos turísticos de %d ", pontosturisticos);
        }
    }else if (opcaomenu ==5){
        if (densidadepopulacional1 < densidadepopulacional2){
            printf(" O pais %s GANHOU, pois tem a densidade populacional de %.2f e é menor que a densidade populacional de %s, que tem %.2f de densidade populacional ",nomedacidade1,densidadepopulacional1,nomedacidade2,densidadepopulacional2);
        }else if (densidadepopulacional1 < densidadepopulacional2){
            printf(" O pais %s GANHOU, pois tem a densidade populacional de %.2f e é menor que a densidade populacional de %s, que tem %.2f de densidade populacional ",nomedacidade2,densidadepopulacional2,nomedacidade1,densidadepopulacional1);
        }else{
            printf(" Os dois países tem a mesma densidade populacional de %.2f ", densidadepopulacional1);
        }
    }else{
        printf(" Opção inválida! \n");
        printf(" Você digitou a opção %d, mas as opções válidas são de 1 a 5. \n", opcaomenu);
        printf(" Por favor, digite uma opção válida. \n");
        printf(" Obrigado por usar o nosso programa! \n");
        printf(" Até logo, %s! \n", nomedapessoa);



    return 0;
}
    }