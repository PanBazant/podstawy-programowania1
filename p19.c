#include <stdio.h>

int a(int n){
    if(n<6) return n;
    else {
        int i,suma=0;
        for(i=1;i<=3;i++){
            suma=suma+a(n-2*i);
        }
        return suma;
    }
}
