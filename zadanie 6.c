#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int ile_parzystych = 0;
    printf("Podaj ile liczb chcialbys wprowadzic: ");
    scanf("%d", &n);

    int i;
    int temp;
    for(i = 1; i <= n ; i++)
    {
        printf("Podaj swoja %d liczbe: ", i);
        scanf("%d", &temp);
        if(temp % 2 == 0)
            ile_parzystych++;
    }

    printf("Podales: %d parzystych liczb", ile_parzystych);
    return 0;
}
