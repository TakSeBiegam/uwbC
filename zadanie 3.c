#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj znak poczatkowy: ");
    scanf("%d", &n);

    int i;
    if(n % 2 == 0)
        n++;
    for(i = 0; i < 20; i+=2)
    {
        int temp = i+n;
        printf("%d, ", temp);
    }

    return 0;
}
