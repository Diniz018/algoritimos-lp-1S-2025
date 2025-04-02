#include <stdio.h>

int main(int argc, char* argv[]){
    float base, altura, area;
    
    // Entrada de dados
    printf("Digite a base do retangulo (em metros): ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo (em metros): ");
    scanf("%f", &altura);
    
    // Cálculo da área do retângulo
    area = base * altura;
    
    // Exibir resultado
    printf("A area do retangulo e: %.2f metros quadrados\n", area);
    
    return 0;
}