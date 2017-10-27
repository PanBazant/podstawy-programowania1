#include <stdio.h>
int kwadrat(int n){
    int x;
    int i;
    for(i=0;i*i<=n;i++){ //najpierw zwieksza potem sprawdza <=
    }
    return i-1; // dlatego trzeba odjac 1
}

int main(){
    int i;
    int x;
    printf("Podaj liczbe\n");
    scanf("%d",&i);
    x=kwadrat(i);
    printf("%d\n",x);
    return 0;
}
