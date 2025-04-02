#include <stdio.h>

int main(int argc, char* argv[]){
    float base, altura, area;
    
    // Entrada de dados
    printf("Digite a base do triangulo (em metros): ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo (em metros): ");
    scanf("%f", &altura);
    
    // Cálculo da área do triângulo
    area = (base * altura) / 2;
    
    // Exibir resultado
    printf("A area do triangulo e: %.2f metros quadrados\n", area);
    
    return 0;
}