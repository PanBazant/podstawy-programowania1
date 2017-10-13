
#include <stdio.h>

int max;

int main(){
    int a;
    int b;
    int c;
    printf("Podaj liczbe a\n");
    scanf("%d",&a);
    printf("Podaj liczbe b\n");
    scanf("%d",&b);
    printf("Podaj liczbe c\n");
    scanf("%d",&c);
    
    if(a>c && a>c)
    {
        max=a;
    }
    if(b>c && b>a)
    {
        max=b;
    }
    if(c>b && c>a)
    {
        max=c;
    }
    
    printf("Najwieksza liczba to %d\n ",max);
    
    return 0;
}
