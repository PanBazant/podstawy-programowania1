#include <stdio.h>

int same(float a,float b){
    int x,y;
    x=a;
    y=b;
    a=a-x;
    b=b-y;
    return a==b?1:0;
}
