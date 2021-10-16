#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(;;)
    {
        for(i = 1; i <= 10; i++)
            printf("%d, ",i);
        printf("\n");

        for(j = 10; j >= 1; j--)
            printf("%d, ", j);
        printf("\n");
    }

    return 0;
}
