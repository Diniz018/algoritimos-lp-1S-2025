#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(int argc, char* argv[]){

    char opcao;
    float r, D, d, L, b, h, B, A;

    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);

    switch(opcao){
        
    case 'c':
        printf("Circulo\n");
        float raio, area;
    
    // Entrada de dados
    printf("Digite o raio do circulo (em metros): ");
    scanf("%f", &raio);
    
    // Cálculo da área do círculo
    area = PI * raio * raio;
    
    // Exibir resultado
    printf("A area do circulo e: %.2f metros quadrados\n", area);
        break;

    case 'l':
        printf("Losango\n");
        break;

    case 'q':
        printf("Quadrado\n");
        break;

    case 'r':
        printf("Retangulo\n");
        break;

    case 't':
        printf("Triangulo\n");
        break;

    case 'z':
        printf("Trapezio\n");
        break;

    default:
        printf("Opcao Invalida");
        A = 0;
        break;

    }

    printf("A = %.2f\n", A);
    return 0; 
}
