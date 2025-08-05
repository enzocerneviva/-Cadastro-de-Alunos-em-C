# 📚 Cadastro de Alunos em C

Este projeto foi desenvolvido como exercício prático de linguagem C, com o objetivo de aplicar conceitos fundamentais como estruturas (`struct`), alocação dinâmica de memória e manipulação de arrays.

## ✨ Funcionalidades

- Cadastro de alunos com:
  - RM (registro do aluno)
  - Nome (sem espaços, por enquanto)
  - Quatro notas
- Cálculo da média individual de cada aluno
- Impressão dos dados ao final da execução
- Verificação do número máximo de alunos permitido
- Liberação da memória alocada dinamicamente

## 💡 Conceitos aplicados

- Ponteiros e alocação dinâmica (`malloc` / `free`)
- Vetores e structs compostos
- Entrada de dados com `scanf`
- Estrutura de repetição `for` e `do...while`
- Organização de código com funções

## 📷 Exemplo de uso

```bash
Digite o numero de alunos que deseja cadastrar (máx: 5): 2

--------- Aluno 1 ---------

Digite o rm do aluno 1: 123
Digite o nome do aluno 1: João
Digite a nota 1 do aluno 1: 7.5
Digite a nota 2 do aluno 1: 8.0
Digite a nota 3 do aluno 1: 6.5
Digite a nota 4 do aluno 1: 9.0

--------- Aluno 2 ---------

Digite o rm do aluno 2: 456
Digite o nome do aluno 2: Maria
Digite a nota 1 do aluno 2: 8.0
Digite a nota 2 do aluno 2: 9.0
Digite a nota 3 do aluno 2: 9.5
Digite a nota 4 do aluno 2: 10.0


--------- Aluno: João ---------
Nome aluno 1: João 
Media aluno 1: 7.75 


--------- Aluno: Maria ---------
Nome aluno 2: Maria 
Media aluno 2: 9.13
```

🚀 Como executar
Para compilar e rodar o programa:
```
gcc main.c -o cadastro
./cadastro
```
No Windows:
```
gcc main.c -o cadastro.exe
cadastro.exe
```
📌 Melhorias futuras
Permitir nomes compostos (usando fgets)

Salvar os dados em arquivo .txt

Ordenar alunos por média

Mostrar estatísticas da turma

👤 Autor
Enzo Cerneviva
Estudante de Ciência da Computação - FIAP
LinkedIn: https://www.linkedin.com/in/enzocerneviva
GitHub: https://github.com/enzocerneviva
