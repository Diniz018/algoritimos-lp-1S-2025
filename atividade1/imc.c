#include <stdio.h>

int main(int argc, char* argv[]){
    float peso, altura, imc;
    
    // Entrada de dados
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    
    // Cálculo do IMC
    imc = peso / (altura * altura);
    
    // Exibir resultado
    printf("Seu IMC e: %.2f\n", imc);
    
    // Classificação do IMC
    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    } else if (imc < 24.9) {
        printf("Classificacao: Peso normal\n");
    } else if (imc < 29.9) {
        printf("Classificacao: Sobrepeso\n");
    } else if (imc < 34.9) {
        printf("Classificacao: Obesidade grau 1\n");
    } else if (imc < 39.9) {
        printf("Classificacao: Obesidade grau 2\n");
    } else {
        printf("Classificacao: Obesidade grau 3 (morbida)\n");
    }
    
    return 0;
}