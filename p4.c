#include <stdio.h>
int min(int a, int b){
    return a>=b? b:a;
}

int max(int a, int b){
    return (a+b-min(a,b));
}
