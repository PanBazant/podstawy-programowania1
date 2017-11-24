#include <stdio.h>
#include <stdlib.h?

int main(){
    char *string;
    
    fgets(string, 50, stdin);
    
    long long int res3=atoll(string);
    printf("%lld",res3);
    
    
    
    
    
    return 0;
}
