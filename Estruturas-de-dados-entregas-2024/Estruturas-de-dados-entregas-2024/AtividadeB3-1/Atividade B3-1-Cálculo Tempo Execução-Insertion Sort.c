/*---------------------------------------------------------------*/
/*          FATEC-São Caetano do Sul Estrutura de Dados          */
/*                        Prof Veríssimo                         */
/*                       Atividade B3-1                          */
/*           Objetivo: Cálculo Tempo Execução-Insertion Sort     */
/*            Developer: Bianca Soares                           */
/*                        Data:13/08/2024                        */
/*---------------------------------------------------------------*/

for (j = 2; j < length; j++) { // | 3t | *1 atribuição, *1 lógica, *1 aritmética
    
    key = A[j]; // | 2t | *1 atribuição, *1 acesso
    i = j - 1; // | 2t | *1 atribuição, *1 aritmética

    while (i >= 0 && A[i] > key) { // | 4t | *3 lógicas, *1 acesso,
      
      A[i + 1] = A[i]; // | 4t | *2 acessos, *1 atribuição, *1 aritmética
      
      i = i - 1; // | 2t |  *1 aritmética, *1 atribuição
    }
    A[i + 1] = key; // | 3t | 1* aritmética, 1* acesso, 1* atribuição
  }

//Cálculos do FOR
// t + n(3t) + t 
// n(2t)
// n(2t)

//Cálculos do WHILE
// n(4t)
// n(4t)
// n(2t)

// n(3t)

//CONTA TOTAL 
//T(n) = 2t + 3tn + 4tn + 8tn² + 3tn

//---- RESULTADO ----
//T(n) = 2t + 10tn + 8tn² 