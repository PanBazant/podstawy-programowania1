#include <stdio.h>
int pow(int n){
    if (n==0)
        return 1;
    else return 2*pow(n-1);
}

int main(){
    int x;
    scanf("%d",%x);
    printf("%d",pow(x))
    return 0;

}



/*int pow( int k, int n){
    if (n==0)
        return 1;
    else return k*pow(k,n-1);
}

int main(){
 int x,y;
 scanf("%d,%d",&x,*y);
 printf("%d",pow(x,y));
 return 0;
