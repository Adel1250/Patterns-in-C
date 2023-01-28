#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int rows;
    unsigned int cntr;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    cntr = rows;
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < cntr; j++) {
            printf("%d ", j+1);
        }
        cntr--;
        printf("\n");
    }
    return 0;
}
