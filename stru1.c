#include <stdio.h>

struct trojkat{
    float a;
    float b;
    float c;
    
};
float obw(struct trojkat xd){
    return xd.a+xd.b+xd.c;
}
int main(){
    
    struct trojkat xd= {3.5,2.3,6.4};
    
    printf("%f %f %f\n",xd.a,xd.b,xd.c);
    float obwod=obw(xd);
    printf("%f\n",obwod);
    return 0;
}
