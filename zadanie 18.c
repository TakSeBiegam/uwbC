#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1 = 1; int q = 1; int n = 0;
    long int ostatnia_liczba;
    printf("Podaj wyraz pierwszy: ");
    scanf("%d", &a1);

    printf("roznice kwadratow: ");
    scanf("%d", &q);

    printf("Podaj ile wyliczyc n wyrazow: ");
    scanf("%d", &n);


    printf("wyraz numer 1 ma wartosc: %d \n", a1);
    int i;
    ostatnia_liczba = a1;
    for(i = 2; i <=n; i++)
    {
        int nowa_liczba = ostatnia_liczba * q;
        printf("wyraz numer %d ma wartosc: %d \n", i, nowa_liczba);
        ostatnia_liczba = nowa_liczba;
    }
    return 0;
}
