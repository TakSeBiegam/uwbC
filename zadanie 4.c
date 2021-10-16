#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    do{
    printf("Podaj znak poczatkowy: ");
    scanf("%d", &n);
    }while(n<=0);

    int i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("*");
        }
    printf("\n");
    }

    return 0;
}
