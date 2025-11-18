#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
int posição;
    printf("desafio navato\n");
    char linha[10]={'A','B','C','D','E','F','G','H','I','J'};
        printf("  %c %c %c %c %c %c %c %c %c %c",linha[0],linha[1],linha[2],linha[3],linha[4],linha[5],linha[6],linha[7],linha[8],linha[9]);
    char tabuleiro[10][10];
    for (int l = 0; l < 10; l++)
    {
        printf("\n%d ",l);
    for (int c = 0;c < 10; c++){
        tabuleiro[l][c]=0;
        tabuleiro[2][4]=3,tabuleiro[2][5]=3,tabuleiro[2][6]=3;
        tabuleiro[4][2]=3,tabuleiro[5][2]=3,tabuleiro[6][2]=3;
       
        if (tabuleiro)
        printf("%d ",tabuleiro[l][c]);
        }
       
    }
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
printf("\n");
    printf("\ndesafio aventureiro\n");
    char linha2[10]={'A','B','C','D','E','F','G','H','I','J'};
        printf("  %c %c %c %c %c %c %c %c %c %c",linha2[0],linha2[1],linha2[2],linha2[3],linha2[4],linha2[5],linha2[6],linha2[7],linha2[8],linha2[9]);
    char tabuleiro2[10][10];
    for (int l = 0; l < 10; l++)
    {
        printf("\n%d ",l);
    for (int c = 0;c < 10; c++){
        tabuleiro2[l][c]=0;
        tabuleiro2[2][4]=3,tabuleiro2[2][5]=3,tabuleiro2[2][6]=3;
        tabuleiro2[4][2]=3,tabuleiro2[5][2]=3,tabuleiro2[6][2]=3;
        tabuleiro2[0][0]=3,tabuleiro2[1][1]=3,tabuleiro2[2][2]=3;
        tabuleiro2[6][8]=3,tabuleiro2[7][7]=3,tabuleiro2[8][6]=3;
        if (tabuleiro2)
        printf("%d ",tabuleiro2[l][c]);
        }
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    }
    printf("\n");
    printf("\nDesafio Mestre\n"); 
    printf("habilidade em cone\n");
    char linha3[5]={'A','B','C','D','E'};
        printf("  %c %c %c %c %c %c %c %c %c %c",linha3[0],linha3[1],linha3[2],linha3[3],linha3[4],linha3[5],linha3[6],linha3[7],linha3[8],linha3[9]);
    char tabuleiro3[3][5];
    for (int l = 0; l < 3; l++)
    {
        printf("\n%d ",l);
    for (int c = 0;c < 5; c++){
        tabuleiro3[l][c]=0;
        tabuleiro3[0][2]=3;
        tabuleiro3[1][1]=3,tabuleiro3[1][2]=3,tabuleiro3[1][3]=3;
        tabuleiro3[2][0]=3,tabuleiro3[2][1]=3,tabuleiro3[2][2]=3,tabuleiro3[2][3]=3,tabuleiro3[2][4]=3;
        if (tabuleiro3)
        printf("%d ",tabuleiro3[l][c]);
}
}
// Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
printf("\n");
    printf("\ndesafio mestre\n");
    printf("habilidade em octaedro\n");
    char linha4[5]={'A','B','C','D','E'};
        printf("  %c %c %c %c %c ",linha4[0],linha4[1],linha4[2],linha4[3],linha4[4]);
    char tabuleiro4[3][5];
    for (int l = 0; l < 3; l++)
    {
        printf("\n%d ",l);
    for (int c = 0;c < 5; c++){
        tabuleiro4[l][c]=0;
        tabuleiro4[0][2]=3;
        tabuleiro4[1][2]=3,tabuleiro4[1][1]=3,tabuleiro4[1][3]=3;
        tabuleiro4[2][2]=3;
        if (tabuleiro4)
        printf("%d ",tabuleiro4[l][c]);
    }
}
    

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
printf("\n");
    printf("\ndesafio mestre\n");
    printf("habilidade em cruz\n");
    char linha5[5]={'A','B','C','D','E'};
        printf("  %c %c %c %c %c ",linha5[0],linha5[1],linha5[2],linha5[3],linha5[4]);
    char tabuleiro5[3][5];
    for (int l = 0; l < 3; l++)
    {
        printf("\n%d ",l);
    for (int c = 0;c < 5; c++){
        tabuleiro5[l][c]=0;

        tabuleiro5[0][2]=3;
        tabuleiro5[1][2]=3,tabuleiro5[1][1]=3,tabuleiro5[1][0]=3,tabuleiro5[1][3]=3,tabuleiro5[1][4]=3;
        tabuleiro5[2][2]=3;
        if (tabuleiro5)
        printf("%d ",tabuleiro5[l][c]);
        
    }
  }
  return 0;
}

