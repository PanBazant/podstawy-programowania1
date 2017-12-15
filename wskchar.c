#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j;
    char xd='a';
    char ***napis=malloc(50*sizeof(char***));
    for(i=0;i<50;i++){
        napis[i]=malloc(50*sizeof(char**));
    }
    
    for(i=0;i<50;i++){
        for(j=0;j<50;j++){
            napis[i][j] = "xd-i";
        }
    }
    
    
    for(i=0;i<50;i++){
        for(j=0;j<50;j++){
            printf("%s\t",napis[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
