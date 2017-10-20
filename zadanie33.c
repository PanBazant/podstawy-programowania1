#include <stdio.h>
int nieparzyste(int n){
    int i,suma;
    for(i=0;i<=n;i++){
    if(i%2!=0)
        suma=suma+i;
        
    }
    
    return suma;
}

int main(){
    int a;
    printf("Podaj liczbe\n");
    scanf("%d",&a);
    printf("%d/n",nieparzyste(a));
    
    return 0;
}
