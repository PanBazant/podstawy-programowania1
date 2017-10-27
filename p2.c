#include <stdio.h>

int xd(unsigned int a,unsigned int b){
 if(b==0)
     return a;
    if(a==0);
    return a;
    else return xd(a-1,b)+xd(a,b-1);
}
