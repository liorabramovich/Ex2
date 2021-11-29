#include <stdio.h>
#define capacity 10 
#define Maxvalue 999999999

  int Admatrix3[capacity][capacity];

int FloydWarshell(int i, int j);

void Adjmatrix()   
{
    for (int i = 0; i < capacity; i++)
        for (int j = 0; j < capacity; j++)
        {
            scanf(" %d", & Admatrix3[i][j]);
            if ( i != j && Admatrix3[i][j] == 0 )
            {
                Admatrix3[i][j] = Maxvalue;
            }
            else if (i == j)
                Admatrix3[i][j] = 0;
        }
}

void path(int i, int j )   
{
    int ans = FloydWarshell(i,j);
    if(ans==-1)
       printf("False\n");  
    else
        printf("True\n");
}





int FloydWarshell(int i, int j) 
{
    if (i == j)
        return -1;

    int admatrix4[capacity][capacity];

    for (int i = 0; i < capacity; i++)
    {
        for (int j = 0; j < capacity; j++)
        {
            admatrix4[i][j] = Admatrix3[i][j];
        }
    }

    for (int l = 0; l < capacity; l++)
    {
        for (int i = 0; i < capacity; i++)
        {
            for (int j = 0; j < capacity; j++)
            {
                if (admatrix4[i][l] != Maxvalue && admatrix4[l][j] != Maxvalue && admatrix4[i][l] + admatrix4[l][j] < admatrix4[i][j])
                    admatrix4[i][j] = admatrix4[i][l] + admatrix4[l][j];
            }
        }
    }

    if (admatrix4[i][j] != Maxvalue && admatrix4[i][j] != 0 )
    
        return admatrix4[i][j];
    return -1;
}


