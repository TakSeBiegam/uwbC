#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, wynik = 1;
    printf("Program zlicza iloczyn liczb nieparzystych z przedzialu a --- b\n");
    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", &b);
    if(a > b)
    {
        int temp = 0;
        temp = a;
        a = b;
        b = temp;
    }
    if(a % 2 == 0)
        a++;


    for(; a <= b; a += 2)
        wynik *= a;

    printf("iloczyn liczb wynosi: %d", wynik);
    return 0;
}
