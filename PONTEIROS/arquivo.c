#include <stdio.h>


/*
    MODOS DE ABERTURA DE ARQUIVO
    'r' -> para leitura
    'w' -> criar/sobrescrever e escrever no arquivo 
    'a' -> criar, se não existir, e adicioanar ao final do arquivo

*/

int main(int argc, char* argv[]){

    FILE *sexta = fopen("sexta.txt", "w");

    if(sexta == NULL){
        printf("Erro ao abrir o arquivo");
        return 1;
    }


    fprintf(stdout, "Hello, world!");

    fclose(sexta);

    return 0;
}