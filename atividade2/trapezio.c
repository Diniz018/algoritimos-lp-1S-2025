#include <stdio.h>

int main(int argc, char* argv[]){
    float base_maior, base_menor, altura, area;
    
    // Entrada de dados
    printf("Digite a base maior do trapezio (em metros): ");
    scanf("%f", &base_maior);
    printf("Digite a base menor do trapezio (em metros): ");
    scanf("%f", &base_menor);
    printf("Digite a altura do trapezio (em metros): ");
    scanf("%f", &altura);
    
    // Cálculo da área do trapézio
    area = ((base_maior + base_menor) * altura) / 2;
    
    // Exibir resultado
    printf("A area do trapezio e: %.2f metros quadrados\n", area);
    
    return 0;
}