#include <stdio.h>
#include <math.h>
typedef struct punkt {
    float x;
    float y;
    float z;
} p;

float dystans (p a,p b){
    float wyn;
    wyn=sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
    return wyn;
}

int main(){
    p a={2,3,4},b={1,2,5};
    printf("%f\n",dystans (a,b));
    return 0;
}
