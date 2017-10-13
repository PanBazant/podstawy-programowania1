#include <stdio.h>
#include <math.h>
int main(){
    float a;
    float b;
    float c;
    float delta;
    float pdelta;
    float xjeden;
    float xdwa;
    printf("Podaj a\n");
    scanf("%f",&a);
    printf("Podaj b\n");
    scanf("%f",&b);
    printf("Podaj c\n");
    scanf("%f",&c);
    
    delta=(b*b)-4*(a*c);
    float xzero;
    if(delta==0){
        xzero=(-b/2*a);
        printf("Miejsce zero wynosi %f",xzero);
    }
    if(delta<0){
        printf("Delta ujemna, brak rozwiazań rzeczywistych");
    }
    else{
    
    pdelta=sqrt(delta);
    xjeden=(-b-pdelta)/(2*a);
    xdwa=(-b+pdelta)/(2*b);
    
    printf("x1 wynosi %f, x2 wynosi %f",xjeden,xdwa);
    }
    return 0;
}
