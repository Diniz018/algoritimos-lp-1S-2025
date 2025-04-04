#include <stdio.h>

int main(int argc, char* argv[]){

    printf("Ola, seu Assistente Virtual ira te ajudar com sua escolha de filme\n");
    
    char opcao;
    printf("Escolha seu tipo de filme: \n");
    printf("l- Leve: \n");
    printf("i- Intenso: \n");
    scanf("%c", &opcao); 
    
    if(opcao == 'l'){
        char generoleve;
        printf("Qual genero do filme?: \n");
        printf("c- Comedia: \n");
        printf("a- Animacao; \n");
        scanf("%c", &generoleve);

    }    

        else if (opcao "c"){
        printf("Assista o filme As Branquelas\n");
        }

   return 0; 

}
