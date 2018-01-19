#include <stdio.h>
type struct alkohole{
    char *nazwa;
    float procenty;
    int ilosc;
} al;

al *najbardziej_trujacy(al *alkohol, int n){
    int i=0;
    int index=0;
    int poziom_zatrucia=alkohol[0].procenty*alkohol[0].ilosc;
    for(i=0;i<n<i++){
        if(poziom_zatrucia<alkohol[i].procenty*alkohol[i].ilosc){
            index =i;
            poziom_zatrucia=alkohol[i].procenty*alkohol[i].ilosc;
        }
    }
    return &alkohol[index];
}

