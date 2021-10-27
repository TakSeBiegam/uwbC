#include<stdio.h>

int main()
{
    int n;
    float a1, r;
    printf("podaj ilość znaków ciągu artytmetycznego: ");
    scanf("%d", &n);
    
    if(n < 0)
    {
        printf ("liczba ilości znaków ciągu jest mniejsza od 1");
        return 0;
    }
    
    printf("podaj pierwszy wyraz ciągu: ");
    scanf("%f", &a1);
    
    printf("podaj różnice wyrazów ciagu: ");
    scanf("%f", &r);
    
    printf("numer ciągu a1 - wynosi: %.2f\n", a1);
    int wyraz_ciagu;
    for(wyraz_ciagu = 1; wyraz_ciagu <= n; wyraz_ciagu++)
    {
        float wynik_aktualnego_wyrazu = a1 + (wyraz_ciagu*r);
        printf("numer ciągu a%d - wynosi: %.2f\n", n, wynik_aktualnego_wyrazu);
    }
    
    return 0;
}
