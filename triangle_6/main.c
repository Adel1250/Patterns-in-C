#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int rows;
    unsigned int spaces;
    unsigned int stars;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    spaces = (rows*2-2) / 2;
    stars = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j <= spaces; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < stars; k++)
        {
            printf("*");
        }
        for (int m = 0; m <= spaces; m++)
        {
            printf(" ");
        }
        spaces --;
        stars += 2;
        printf("\n");
    }
    return 0;
}
