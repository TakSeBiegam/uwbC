#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba_calkowita;
    printf("Podaj liczbe calkowita z przedzialu 1 - 100: ");
    scanf("%d", &liczba_calkowita);

    printf("Podana liczba dzieli sie przez: ");
    int i;
    for(i = 1; i <= 100; i++)
    {
        if(liczba_calkowita % i == 0)
            printf("%d, ", i);
    }

   return 0;
}
