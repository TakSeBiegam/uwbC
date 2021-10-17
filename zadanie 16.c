#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result = 0;
    int n;
    do{
        printf("Podaj liczbe naturalnej dla ktorej zostanie policzona suma szescianow: ");
        scanf("%d", &n);
    }while(n < 0);

    int i = 1;
    for(; i <= n; i++)
        result += i*i*i;

    printf("wynik to: %d", result);
    return 0;
}
