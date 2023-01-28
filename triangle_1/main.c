#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
