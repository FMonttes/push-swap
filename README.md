# Push Swap

O **Push Swap** é um projeto do curso de programação **42**, cujo objetivo é implementar um algoritmo eficiente para ordenar uma lista de números usando apenas duas pilhas (Stacks). O desafio consiste em desenvolver a solução de ordenação de maneira otimizada, minimizando o número de operações realizadas nas pilhas.

## Descrição

O projeto consiste em criar um algoritmo que ordene um conjunto de números utilizando duas pilhas e um conjunto limitado de operações. A aplicação realiza as operações de **push** e **swap** entre as pilhas para ordenar os números de forma eficiente.

### Operações Permitidas

As operações que podem ser realizadas nas pilhas são:

- **sa**: Troca os dois primeiros elementos da pilha A.
- **sb**: Troca os dois primeiros elementos da pilha B.
- **ss**: Realiza as operações `sa` e `sb` ao mesmo tempo.
- **pa**: Coloca o primeiro elemento da pilha B no topo da pilha A.
- **pb**: Coloca o primeiro elemento da pilha A no topo da pilha B.
- **ra**: Rotaciona a pilha A (move todos os elementos uma posição para cima).
- **rb**: Rotaciona a pilha B (move todos os elementos uma posição para cima).
- **rr**: Realiza as operações `ra` e `rb` ao mesmo tempo.
- **rra**: Inverte a rotação da pilha A (move todos os elementos uma posição para baixo).
- **rrb**: Inverte a rotação da pilha B (move todos os elementos uma posição para baixo).
- **rrr**: Realiza as operações `rra` e `rrb` ao mesmo tempo.

## Objetivo

O objetivo principal é ordenar a pilha A, usando as operações permitidas e, ao mesmo tempo, minimizar o número total de operações. A solução ideal deve ser a mais eficiente possível, com um número de operações o menor possível, já que a eficiência do algoritmo será medida pelo número total de operações feitas.

## Como Funciona

O algoritmo deve seguir um conjunto de passos para ordenar a pilha A da seguinte maneira:

1. **Divisão**: A pilha A será dividida em duas pilhas, com base em um critério de valor.
2. **Ordenação**: As pilhas serão manipuladas através das operações permitidas até que todos os números de A sejam ordenados.
3. **Resultado**: A pilha A será ordenada da menor para a maior.

## Como Rodar o Projeto

### Pré-requisitos

- **C**: Linguagem utilizada para desenvolver a solução.
- **Make**: Usado para compilar e executar o projeto.

### Passos para Compilar e Executar

1. Clone o repositório:
    ```bash
    git clone https://github.com/usuario/push_swap.git
    cd push_swap
    ```

2. Compile o projeto utilizando o **Make**:
    ```bash
    make
    ```

3. Para rodar o programa, use o comando:
    ```bash
    ./push_swap <números>
    ```

Exemplo:

```bash
./push_swap 3 2 1 5 4
