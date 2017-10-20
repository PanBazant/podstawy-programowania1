#include <stdio.h>

int fib(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main()
{
    int a;
    printf("Podaj liczbe\n");
    scanf("%d",&a);
    int wynik=fib(a);
    printf("%d",wynik);
    return 0;
}
