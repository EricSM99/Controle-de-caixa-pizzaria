
#include <stdio.h>
#include<stdlib.h>

int menu();

int main()
{
    int i;
    int dia, mes, ano;
    int valorp, valorm, valorg, valorb, p, p1, m, m1, g, g1, borda, litro1, litro2, valor1, valor2;
    int escolha;
    int funcionario1, resultado2;
    char funcionario[50][100];
    float resultado, resultado1, pix, credito, debito;
    char resp = 's';

    while(resp == 's'){

    escolha = menu();

   switch(escolha){

    case 1:

        printf("Digite o dia: ");
        scanf("%d", &dia);
        printf("Digite o mes: ");
        scanf("%d", &mes);
        printf("Digite o ano: ");
        scanf("%d", &ano);
        system("cls");

        break;

    case 2:

        printf("PIZZAS VENDIDAS\n");
        printf("\nDigite o valor da pizza P: ");
        scanf("%d", &valorp);
        printf("Digite a quantidade de pizza P vendidas: ");
        scanf("%d", &p);
        p1 = p * valorp;
        printf("\nDigite o valor da pizza M: ");
        scanf("%d", &valorm);
        printf("Digite a quantidade de pizza M vendidas: ");
        scanf("%d", &m);
        m1 = m * valorm;
        printf("\nDigite o valor da pizza G: ");
        scanf("%d", &valorg);
        printf("Digite a quantidade de pizza G vendidas: ");
        scanf("%d", &g);
        g1 = g * valorg;
        printf("\nDigite o valor da borda: ");
        scanf("%d", &valorb);
        printf("Digite a quantidade de pizza com bordas: ");
        scanf("%d", &borda);
        borda = borda * valorb;
        system("cls");

        printf("REFRIGERANTES VENDIDOS\n");
        printf("\nDigite o valor do refrigerante de 1L: ");
        scanf("%d", &valor1);
        printf("Digite a quantidade de refrigerante de 1L: ");
        scanf("%d", &litro1);
        litro1 = litro1 * valor1;
        printf("\nDigite o valor do refrigerante de 2L: ");
        scanf("%d", &valor2);
        printf("Digite a quantidade de refrigerante de 2L: ");
        scanf("%d", &litro2);
        litro2 = litro2 * valor2;
        system("cls");

        printf("Qual o valor recebido no PIX: ");
        scanf("%f", &pix);
        printf("Qual o valor recebido no CREDITO: ");
        scanf("%f", &credito);
        printf("Qual o valor recebido no DEBITO: ");
        scanf("%f", &debito);
        system("cls");

        break;

    case 3:

        printf("Digite a quantidade de funcionarios: ");
        scanf("%d", &funcionario1);

        for(i=0; i < funcionario1; i++){
            printf("Quais funcionario trabalharam:\n ");
            scanf("%s", funcionario[i]);
    }

    resultado = (p1 + m1 + g1 + borda + litro1 + litro2);
    resultado1 = (resultado - pix - credito - debito);
    resultado2 = (p + m + g);
    system("cls");

    printf("%d / %d / %d\n\n", dia, mes, ano);
    printf("Valor apurado hoje: R$%.2f\n", resultado);
    printf("Pix: R$%.2f\n", pix);
    printf("Credito: R$%.2f\n", credito);
    printf("Debito: R$%.2f\n", debito);
    printf("Dinheiro no caixa: R$%.2f\n\n", resultado1);
    printf("Funcionarios que trabalharam:\n\n");

    for (i=0; i<funcionario1; i++){
        printf("%s\n", funcionario[i]);

    }

    printf("\n\nTotal de pizzas vendidas: %d\n\n", resultado2);

    }

    printf("Deseja continuar? s ou n ");
    fflush(stdin);
    scanf("%c",&resp);
    system("cls");
  }



return 0;
  }

int menu(){
    int escolha;

    printf("//////  //  //////  //////      ////      ////////  //      //// \n");
    printf("//  //         //      //      //  //     //    //         //  // \n");
    printf("//////  //    //      //      ////////    //    //  //    //////// \n");
    printf("//      //   //      //      //      //   //    //  //   //      // \n");
    printf("//      //  //////  //////  //        //  //    //  //  //        // \n");
    printf("\n");
    printf("<1> DATA DE HOJE\n");
    printf("<2> FECHAMENDO DO CAIXA\n");
    printf("<3> FUNCIONARIOS QUE TRABALHARAM HOJE\n");
    printf("<4> SAIR\n\n");
    printf("Digite uma opcao: ");
    scanf("%i",&escolha);
    system("cls");

    return escolha;

}
