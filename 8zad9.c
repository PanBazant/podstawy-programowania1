#include <stdio.h>
#include <string.h>
#include <stdio.h>
int main(){
    char *napis1,*napis2,*napis3;
    
    napis3= malloc(100*sizeof(char*));
    napis2= malloc(100*sizeof(char*));
    napis1= malloc(100*sizeof(char*));
    fgets(napis1,50, stdin);
    fgets(napis2, 50, stdin);
    strcpy(napis1,napis2);
    strcat(napis3,napis2);
    fputs(napis3,stdout);
    
    
    
    return 0;
}
