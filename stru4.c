#include <stdio.h>

typedef struct punkt {
    int x;
    int y;
} p;

typedef struct wektor{
    int zwrot;
    int wartosc;
    float kierunek;
} w;

void zmien(w *wektor){
    wektor->zwrot!=wektor->zwrot;
}

int main(){
    w wektor1 ={1,4,0.23};
    zmien(&wektor1);
    printf("%d\n",wektor1.zwrot);
}
