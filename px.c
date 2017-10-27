#include <stdio.h>

int main(){
    int x1,y1,x2,y2,x3,y3;
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    double a,b;
    a=(y2-y1)/(x2-x1);
    b=y1-x1*a;
    if(y3==(a*x3)+b) printf("tak");
    else printf("nie");
    return 0;
}
