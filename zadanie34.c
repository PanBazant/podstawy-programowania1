#include <stdio.h>
void kwadrat(int n){
    int i;
    for(i=0;i<n;i++){ //(i=1;i<n;i=i+2) i bez if, szybciej
        if(i%2!=0)
            printf("%d\n",i*i);
    }
}
int main(){
    int a;
    printf("Podaj liczbe\n");
    scanf("%d",&a);
    kwadrat(a);
    return 0;
}
