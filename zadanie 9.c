#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ilosc_liczb_ujemnych = 0;
    printf("Program zakonczy sie po podaniu 5 liczb ujemnych\n");

    int liczba_wprowadzana;
    while(ilosc_liczb_ujemnych < 5)
    {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba_wprowadzana);
        if(liczba_wprowadzana < 0)
            ilosc_liczb_ujemnych++;
    }

    return 0;
}
