#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare (const void * a,const void * b){
    return (*(float*)a - *(float*)b);
}

int sort(int *tab,int l){
    int i,j;
    for( i=0;i<l-1;i++){
        for(j=i+1;j<l;j++)
            if(tab[j]<tab[i]){
                int p=tab[j];
                tab[j]=tab[i];
                tab[i]=p;
                
            }
    }
}

int main(){
    srand(time(NULL));
    int arr[100];
    int i;
    
    for (i=0;i<100;i++){
        arr[i]= (rand()%100)/100.0;
    }
    for (i=0;i<100;i++){
        printf("%d\n",arr[i]);
    }
    qsort(arr, 100, sizeoff(float),compare);
    printf("\n\n\n\n\n");
    for (i=0;i<100;i++){
        printf("%d\n",arr[i]);
        return 0;
}


/* int compare( const void * a , const void *b) {

int *wsk_a = (int *)a;
int *wsk_b = (int *)b;

int liczba_a =*wsk_a;

int liczba_b = *wsk_b;
