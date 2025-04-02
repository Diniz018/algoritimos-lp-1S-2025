#include <stdio.h>
#define PI 3.14159

int main(int argc, char* argv[]){
    float raio, area;
    
    // Entrada de dados
    printf("Digite o raio do circulo (em metros): ");
    scanf("%f", &raio);
    
    // Cálculo da área do círculo
    area = PI * raio * raio;
    
    // Exibir resultado
    printf("A area do circulo e: %.2f metros quadrados\n", area);
    
    return 0;
}