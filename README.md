# Matriz-escada
Descrição

Joãozinho está aprendendo sobre matrizes. Hoje ele aprendeu como deixar matrizes na forma escada, e está exercitando. Para ajudá-lo, você deve escrever um programa que determine se o resultado dele realmente está no formato correto.

Uma matriz está na forma escada quando, para cada linha, as condições a seguir forem satisfeitas:

i) Se a linha só possuir zeros, então todas as linhas abaixo desta também só possuem zeros.

ii) Caso contrário, seja X o elemento diferente de zero mais à esquerda da linha; então, para todas as linhas abaixo da linha de X, todos os elementos nas colunas à esquerda de X e na coluna de X são iguais a zero.

Formato de entrada

A primeira linha possui dois inteiros N e M, as dimensões da matriz. Cada uma das N linhas seguintes contém M inteiros não-negativos, os elementos da matriz.

Considere:

1 <= N <= 500 e 1 <= M <= 500.

 Cada elemento da matriz está entre 0 e 100000

Formato de saída

Seu programa deve produzir uma única linha, contendo o caractere ‘S’ caso a matriz esteja no formato escada, ou ‘N’, caso contrário.

Não coloque nenhum final de linha depois do caractere.
