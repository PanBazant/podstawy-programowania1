#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *napis1, *napis2;
    napis1= malloc(100*sizeof(char *));
    fgets(napis1, 100,stdin);
    int i;
    napis2=strchr(napis1, 'a');
    for(i=0;;i++){
        if(napis2==NULL) break;
        napis2=strchr(napis2+i, 'a');
        printf("%p\n", napis2);
    }
    
    
    
    
    return 0;
}
