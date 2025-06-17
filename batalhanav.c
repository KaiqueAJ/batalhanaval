#include <stdio.h>


int main() {
    int tabuleiro[10][10];
    int soma;

    // declara todas as matrizes como 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }


    
    // declara as casas necessárias como 3
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            tabuleiro[j][i] = 3;
        }
        
    }



    // declara as casas necessárias como 3
    for (int i = 5; i < 8; i++)
    {
        for (int j = 5; j < 6; j++)
        {
            tabuleiro[i][j] = 3;
        }
        
    }



    // declara as casas necessárias como 3 na diagonal
    for (int i = 6; i < 9; i++) // linhas
    {
        for (int j = 0; j < 1; j++) // colunas
        {
            tabuleiro[i][i - 6] = 3;
        }
        
    }



    // declara as casas necessárias como 3 na diagonal
    for (int i = 8; i > 5; i--) // linhas
    {
        for (int j = 0; j < 1; j++) // colunas
        {
            tabuleiro[i][i + j] = 3;
        }
    }


    // mostra o tabuleiro na mesa
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf(" %d |", tabuleiro[i][j]);
        }
        
        printf("\n");
    } 

       // mostra o tabuleiro na mesa
       for (int i = 0; i < 10; i++)
       {
           for (int j = 0; j < 10; j++)
           {
               printf(" %d |", tabuleiro[i][j]);
           }
           
           printf("\n");
       } 
    
}