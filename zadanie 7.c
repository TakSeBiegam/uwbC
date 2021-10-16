#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int max, min, avg;
    printf("Podaj ile liczb chcialbys wprowadzic: ");
    scanf("%d", &n);

    int temp;
    printf("Podaj swoja 1 liczbe: ", temp);
    scanf("%d", &temp);
    min = temp;
    max = temp;

    int i;
    for(i = 1; i <= n-1 ; i++)
    {
        printf("Podaj swoja %d liczbe: ", i+1);
        scanf("%d", &temp);
        if(temp > max)
            max = temp;
        if(temp < min)
            min = temp;
    }

    printf("element najwiekszy: %d \n", max);
    printf("element najmniejszy: %d \n", min);
    printf("srednia elementow: %d \n", (min+max)/2);
    return 0;
}
