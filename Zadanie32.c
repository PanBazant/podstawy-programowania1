#include <stdio.h>
void dzielniki(){
    int a;
    printf("Podaj liczbe\n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(a%i==0) printf("%d\n",i);
    }
}


int main(){
    
    dzielniki();
    
    
    
    return 0;
}
