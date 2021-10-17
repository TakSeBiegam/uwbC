#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int r = rand()%1024+1;
    int liczba_uzytkownika = 1;
    printf("Odgadnij liczbe komputera z zakresu 1-1024\n");
    printf("Podaj liczbe: ");
    scanf("%d", &liczba_uzytkownika);
    do
    {
        if(liczba_uzytkownika > r)
        {
            printf("Za wiele!\n");
        }
        else
        {
            printf("Za malo!\n");
        }
        printf("Podaj liczbe: ");
        scanf("%d", &liczba_uzytkownika);

    }while(liczba_uzytkownika != r);

    printf("Trafiles");
    return 0;
}
