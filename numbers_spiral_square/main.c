#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int matrix[2*n-1][2*n-1];
    int num = n;
    int dim = 2*n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < dim; j++)
        {
            matrix[i][j] = num;
        }
        for (int k = i; k < dim; k++)
        {
            matrix[k][dim-1] = num;
        }
        for (int x = dim-1; x >= i; x--)
        {
            matrix[dim-1][x] = num;
        }
        for (int y = i; y < dim; y++)
        {
            matrix[y][i] = num;
        }
        dim--;
        num--;
    }
    for (int i = 0; i < n*2-1; i++)
    {
        for (int j = 0; j < n*2-1; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
