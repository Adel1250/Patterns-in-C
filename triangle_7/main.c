#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int rows;
    unsigned int spaces;
    unsigned int cntr;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    spaces = (rows*2-2)/2;
    cntr = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < cntr; k++)
        {
            printf("%d ", cntr+k);
        }
        for (int n = 1; n <= cntr-1; n++) {
            printf("%d ", cntr*2-n-1);
        }
        for (int m = 0; m < spaces; m++)
        {
            printf(" ");
        }
        spaces--;
        cntr++;
        printf("\n");
    }
    return 0;
}
