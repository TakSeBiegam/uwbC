#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ostatnia_wczytana_wartosc, aktualna_wczytana_wartosc;
    printf("Program zatrzyma sie po wprowadzeniu 2 indentycznych liczb\n");
    printf("Wprowadz liczbe: ");
    scanf("%d", &aktualna_wczytana_wartosc);

    while(ostatnia_wczytana_wartosc != aktualna_wczytana_wartosc)
    {
        printf("Wprowadz liczbe: ");
        ostatnia_wczytana_wartosc = aktualna_wczytana_wartosc;
        scanf("%d", &aktualna_wczytana_wartosc);
    }


    return 0;
}
