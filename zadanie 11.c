#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wynik = 1;
    int liczba_wprowadzana = 1;
    printf("Program zlicza iloczyn podanych liczb az nie podamy liczby 0\n");
    do
    {
        wynik *= liczba_wprowadzana;
        printf("Podaj liczbe: ");
        scanf("%d", &liczba_wprowadzana);

    }while(liczba_wprowadzana != 0);
    printf("Iloczyn wprowadzonych liczb wynosi: %d", wynik);

    return 0;
}
