#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int rm;
    char nome[20];
    float notas[4];
    float media;
};

void cadastro(int n, struct Aluno *turma){

    // -- CADASTRO --

    for (int i = 0; i <= n - 1; i++){
        float soma = 0;
        printf("\n--------- Aluno %d ---------\n\n", i + 1);

        // RM
        printf("Digite o rm do aluno %d: ", i + 1);
        scanf("%i", &(turma[i].rm));
        printf("\n");

        // NOME
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", turma[i].nome);
        printf("\n");

        // NOTAS
        for(int j = 0; j <= 3; j++){
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &(turma[i].notas[j]));

            // SOMA
            soma += turma[i].notas[j];
        }
        // MÉDIA
        turma[i].media = soma / 4;
        printf("\n-----------------------\n");
    }
}

int main(){
    // NÚMERO DE ALUNOS PARA CADASTRO
    int n;
    do{
        printf("Digite o número de alunos que deseja cadastrar (máx: 5): ");
        scanf("%d", &n);
    }while(n > 5 || n < 1);
  
    // ALOCAÇÃO DE MEMÓRIA
    struct Aluno *turma = malloc(n * sizeof(struct Aluno));
    
    // VERIFICACAO ALOCAÇÃO

    if(turma == NULL){
        printf("Erro ao alocar a memória!\n");
        return 1;
    }

    cadastro(n, turma);

    for (int i = 0; i <= n - 1; i++){
        printf("\n\n--------- Aluno: %s ---------\n", turma[i].nome);

        printf("Nome aluno %d: %s \n", i + 1, turma[i].nome);
        printf("Media aluno %d: %.2f \n", i + 1, turma[i].media);
    }

    free(turma);

    getchar();
    printf("\n\nPressione ENTER para sair...");
    getchar(); // Espera o usuário apertar ENTER
    return 0;
}
