#include <stdio.h>

/**
 Declaração de função
 A função tem por objetivo: ler um valor dentre 2 opções válidas
 A função deve retornar o valor válido
**/
int ler_valor_valido(int opcao1, int opcao2){
    //Código da função
    int opcao_valida;

    do{
       printf("Escolha uma opcao:\n%d - ", opcao1);
    }
    while(opcao_valida!= opcao1 && opcao_valida != opcao2);

    return opcao_valida;
}

int main (int argc, char* argv[]){

    int opcao, resposta;

    do{
        printf("Escolha uma opcao:\n1 - Iniciar quiz\n0 - Sair\n");
        scanf("%d", &opcao);
    }
    while(opcao != 1 && opcao != 0);

    if(opcao == 1){
        do{
            printf("Qual a capital do Brasil?\n1 - Rio de Janeiro\n2 - Brasilia\n");
            scanf("%d", &resposta);
        }
        while(resposta !=1 && resposta != 2);

        if(resposta == 2){
            printf("Voce acertou!\n");
        }
        else {
            printf("Pode melhorar!\n");
        }

    }


    return 0;
}