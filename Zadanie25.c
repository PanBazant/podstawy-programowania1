#include <stdio.h>

int main(){
    int x=0;
    int i;
    int a;
    int b;
    int suma,roznica,iloczyn,iloraz;
    do{
        printf("\nPodaj pierwsza liczbe ");
        scanf("%d",&a);
        printf("Podaj druga liczbe ");
        scanf("%d",&b);
        printf("Aby wykonac dodawanie nacisnij 1\nAby wykonac odejmnowanie nacisnij 2\nAby wykonac mnozenie nacisnij 3\nAby wykonac dzielenie nacisjij 4\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:printf("%d",a+b);
                break;
            case 2:printf("%d",a-b);
                break;
            case 3:printf("%d",a*b);
                break;
            case 4:printf("%d",a+b);
                break;
        }
    }    while(i != 0);
    
    return 0;
}
