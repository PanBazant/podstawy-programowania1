float troj(float a,float b){
    float pole;
    pole=(a*b)/2.0;
    return pole;
}
#include <stdio.h>
int main(){
    float a,b;
    printf("Podaj pole podstawy\n");
    scanf("%f",&a);
    printf("Podaj wysokosc\n");
    scanf("%f",&b);
    printf("%f",pole(a,b));
    
    return 0;
}
