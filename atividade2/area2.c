#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(int argc, char* argv[]) {
    char opcao;
    float r, D, d, L, b, h, B, A; // Variáveis para cálculos e resultado
    A = 0; // Inicializando A para garantir que não fique com lixo de memória

    printf("area.c\n");
    printf("Escolha uma opcao: \n");
    printf("c - Circulo\n");
    printf("l - Losango\n");
    printf("q - Quadrado\n");
    printf("r - Retangulo\n");
    printf("t - Triangulo\n");
    printf("z - Trapezio\n");

    scanf("%c", &opcao);

    switch (opcao) {
        case 'c':
            printf("Circulo\n");
            float raio;

            // Entrada de dados
            printf("Digite o raio do circulo (em metros): ");
            scanf("%f", &raio);

            // Cálculo da área do círculo
            A = PI * raio * raio;

            // Exibir resultado
            printf("A area do circulo e: %.2f metros quadrados\n", A);
            break;

        case 'l':
            printf("Losango\n");
            float diagonal_maior, diagonal_menor;

            // Entrada de dados
            printf("Digite a diagonal maior do losango (em metros): ");
            scanf("%f", &diagonal_maior);
            printf("Digite a diagonal menor do losango (em metros): ");
            scanf("%f", &diagonal_menor);

            // Cálculo da área do losango
            A = (diagonal_maior * diagonal_menor) / 2;

            // Exibir resultado
            printf("A area do losango e: %.2f metros quadrados\n", A);
            break;

        case 'q':
            printf("Quadrado\n");
            float lado;

            // Entrada de dados
            printf("Digite o lado do quadrado (em metros): ");
            scanf("%f", &lado);

            // Cálculo da área do quadrado
            A = lado * lado;

            // Exibir resultado
            printf("A area do quadrado e: %.2f metros quadrados\n", A);
            break;

        case 'r':
            printf("Retangulo\n");
            float base, altura;

            // Entrada de dados
            printf("Digite a base do retangulo (em metros): ");
            scanf("%f", &base);
            printf("Digite a altura do retangulo (em metros): ");
            scanf("%f", &altura);

            // Cálculo da área do retângulo
            A = base * altura;

            // Exibir resultado
            printf("A area do retangulo e: %.2f metros quadrados\n", A);
            break;

        case 't':
            printf("Triangulo\n");
            float base_t, altura_t;

            // Entrada de dados
            printf("Digite a base do triangulo (em metros): ");
            scanf("%f", &base_t);
            printf("Digite a altura do triangulo (em metros): ");
            scanf("%f", &altura_t);

            // Cálculo da área do triângulo
            A = (base_t * altura_t) / 2;

            // Exibir resultado
            printf("A area do triangulo e: %.2f metros quadrados\n", A);
            break;

        case 'z':
            printf("Trapezio\n");
            float base_maior, base_menor, altura_z;

            // Entrada de dados
            printf("Digite a base maior do trapezio (em metros): ");
            scanf("%f", &base_maior);
            printf("Digite a base menor do trapezio (em metros): ");
            scanf("%f", &base_menor);
            printf("Digite a altura do trapezio (em metros): ");
            scanf("%f", &altura_z);

            // Cálculo da área do trapézio
            A = ((base_maior + base_menor) * altura_z) / 2;
            
            // Exibir resultado
            printf("A area do trapezio e: %.2f metros quadrados\n", A);
            break;

        default:
            printf("Opcao Invalida\n");
            A = 0;
            break;
    }

    // Exibindo o valor da área calculada
    if (A > 0) {
        printf("A area calculada e: %.2f metros quadrados\n", A);
    }

    return 0;
}
