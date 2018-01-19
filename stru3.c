#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct punkt {
    float x;
    float y;
    float z;
} p;

float dystans (p *a,p *b){
    float wyn;
    wyn=sqrt((a->x-b->x)*(a->x-b->x)+(a->y-b->y)*(a->y-b->y)+(a->z-b->z)*(a->z-b->z));
    return wyn;
}

int main(){
    int *tab=malloc(sizeof(int));
    *tab=5;
    p *a=malloc(3*sizeof(p)), *b=malloc(3*sizeof(p));
    a->y=2; a->x=1; a->z=4; b->x=2; b->y=3; b->z=5;
    printf("%f\n",dystans (a,b));
    return 0;
}

