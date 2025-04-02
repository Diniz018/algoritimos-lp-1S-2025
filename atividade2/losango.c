#include <stdio.h>

int main(int argc, char* argv[]){
    float diagonal_maior, diagonal_menor, area;
    
    // Entrada de dados
    printf("Digite a diagonal maior do losango (em metros): ");
    scanf("%f", &diagonal_maior);
    printf("Digite a diagonal menor do losango (em metros): ");
    scanf("%f", &diagonal_menor);
    
    // Cálculo da área do losango
    area = (diagonal_maior * diagonal_menor) / 2;
    
    // Exibir resultado
    printf("A area do losango e: %.2f metros quadrados\n", area);
    
    return 0;
}