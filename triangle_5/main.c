#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int rows;
    unsigned int cntr;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    cntr = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", cntr);
            cntr++;
        }
        printf("\n");
    }
    return 0;
}
