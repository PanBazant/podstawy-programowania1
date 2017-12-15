#include <stdio.h>
#include <stdlib.h>

int *tabdwa(int n, int m){
    int **arr = malloc(n*sizeof(int**));
    int i=0;
    for(i=0;i<n;i++){
        arr[i]=malloc(m*sizeof(int*));
    }
    arr[0][0]=6;
    return *arr;
}

int *tabjeden(int n){
    int *arr = malloc(n*sizeof(int*));
    *arr=1;
    return arr;
}



int main(){
    
    int *wsk=tabdwa(4,4);
    printf("%d\n",*wsk);
    int *wsk2=tabjeden(3);
    printf("%d",*wsk2);
    
    return 0;
}
