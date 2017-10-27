#include <stdio.h>
int f(int a, int b,int c){
    int m;
    m=max(a,b,c);
    if(a*a+b*b+c*c-m*m==m*m)
        printf("T");
    else printf("N");
}
