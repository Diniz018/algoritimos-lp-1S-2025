#include <stdio.h>

int main(int argc, char* argv[]){
    
    int n, k;
    float MediaGeral = 0, MaiorNota = 0, MenorNota = 10.0;
    int AlunosAprovados = 0;

    //Solicita o número de alunos
    printf("Digite o numero de alunos:");
    scanf("%d", &n);

    //Declara o vetor para armazenar as notas
    float notas[n];

    //Leitura das notas dos alunos 
    for (int i = 0; i < n; i++){
        do{
            printf("Digite a nota do aluno %d (entre 0.0 e 10.0):", i + 1);
            scanf("%f", &notas[i]);
    } while (notas[i] < 0.0 || notas[i] > 10.0);  //Verifica se a nota está no intervalo correto

    MediaGeral += notas[i];  //Soma as notas para cálculo da média
    
    if(notas[i] > MaiorNota){
        MaiorNota = notas[i];  //Atuaiza a maior nota
    }

    if(notas[i] < MenorNota){
        MenorNota = notas[i];  //Atualize a menor nota
    }

    if(notas[i] >= 6){
        AlunosAprovados++;  //Conta alunos aprovados
    }
}

//Cálculo da Média Geral
MediaGeral /=n;

//Solicita a posição k do aluno
printf("Digite o numero do aluno para ver a nota (1 a %d):",n);
scanf("%d", &k);

if(k >= 1 && k <= n){
    printf("A nota do aluno %d é: %.2f\n", k, notas[k - 1]);
} 

   else{
    printf("Numero de aluno inválido");
   }

   //Exibe os Resultados
   printf("\nResultados:\n");
   printf("Media geral da turma: %2f\n", MediaGeral);
   printf("Maior nota: %.2f\n", MaiorNota);
   printf("Menor nota: %.2f\n", MenorNota);
   printf("Quantidade de alunos aprovados: %d\n", AlunosAprovados);



    return 0;
}