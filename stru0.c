#include <stdio.h>
#include <stdlib.h>

typedef int fajnytyp;

enum Tydzien {PON, WT, NDZ};

struct Struktura{
    int x;
    int y;
};

int main()
{
    fajnytyp x = 20;
    printf("\n%d\n", x);
    
    enum Tydzien dzien = PON;
    switch(dzien)
    {
        case PON:
            printf("poniedzialek");
            break;
        case WT:
            printf("wtorek");
            break;
        default:
            printf("jakis dzieĹ„");
    }
    
    printf("\n%d", dzien);
    printf("\n%i", WT);
    
    
    struct Struktura zmienna;
    zmienna.x = 20;
    zmienna.y = 10;
    printf("%d", zmienna.x + zmienna.y);
    
    struct Struktura b = {1,2};
    printf("%d", b.x + b.y);
    
    struct Struktura *wsk = &b;
    printf("\nWYNIK = %d\n",wsk->x + (*wsk).y);
    
    return 0;
}
