#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj ile znak�w - musi byc wczytane: ");
    scanf("%d", &n);
    int i;
    for(i = 0; i < n; i++)
        printf("-");

    return 0;
}
