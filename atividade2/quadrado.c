#include <stdio.h>

int main(int argc, char* argv[]){
    float lado, area;
    
    // Entrada de dados
    printf("Digite o lado do quadrado (em metros): ");
    scanf("%f", &lado);
    
    // Cálculo da área do quadrado
    area = lado * lado;
    
    // Exibir resultado
    printf("A area do quadrado e: %.2f metros quadrados\n", area);
    
    return 0;
}