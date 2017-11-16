#include <stdio.h>

int funkcja(int *wsk1,int * wsk2){
    if(*wsk1>*wsk2)
    {return *wsk1;}
    
    else{ return *wsk2;}
}

int *funkcja2(int *wsk1,int *wsk2){
    if(*wsk1>*wsk2)
    {return wsk1;}
    
    else{ return wsk2;}
}
int *funkcja3(int *wsk1, int *wks2) {
    if(wsk1>wsk2) return wsk1;
    else return wsk2;
}

float *funkcja4(){
    float *wsk= malloc(sizeof(float *));
    return wsk;
}

double *funkcja5(*double wsk){
    free(wsk);
    wsk=NULL;
    return=wsk;
}

int main(){
    float *a=funkcja4();
    *c=10.224;
    free(a);
    c=NULL;
    c = realloc(a, sizeof(float *));
    printf("%f\n",*c)
    int a=10;
    int b=20;
    int wynik = *funkcja2(&a,&b);
    int *wsk_wynik = funkcja2(&a,&b);
    int *wskaznik_wynik_3 = funkcja3(&a,&b);
    printf("%d\n",funkcja(&a,&b));
    printf("%d\n",*funkcja2(&a,&b));
    return 0;
}
