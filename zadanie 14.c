#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sprawdz_liczbe;
    do
    {
        printf("Podaj liczbe calkowita z zakresu 1-100: ");
        scanf("%d", &sprawdz_liczbe);
    }while(sprawdz_liczbe <= 0 || sprawdz_liczbe > 100);
    int i;
    if(sprawdz_liczbe == 2 || sprawdz_liczbe == 3 || sprawdz_liczbe == 5 || sprawdz_liczbe == 7)
    {
        printf("%d to liczba pierwsza\n", sprawdz_liczbe);
    }
    else
    {
        if(sprawdz_liczbe % 2 == 0 || sprawdz_liczbe % 3 == 0 || sprawdz_liczbe % 5 == 0 || sprawdz_liczbe % 7 == 0)
        {
            printf("%d nie jest liczba pierwsza\n", sprawdz_liczbe);
        }
        else
        {
            printf("%d to liczba pierwsza\n", sprawdz_liczbe);
        }
    }

    return 0;
}
