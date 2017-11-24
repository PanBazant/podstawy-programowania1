#include <stdio.h>
#include <stdlib.h>

int main(){
    char *string;
    
    fgets(string, 50,stdin);
    fputs(string, stdout);
    int res = atoi(string);
    printf("%d\n",res);
    
    
    
    return 0;
}
