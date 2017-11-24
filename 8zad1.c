#include <stdio.h>
#include <stdlib.h>

double string_to_double(char *string){
    double x;
    x=atof(string);
    return x;

    
}

int main(){
    char *string;
    fgets(string,50,stdio);
    fputs(string,stdout);
    double x;
    x=string_to_double(string);
    printf("%lf",x);
    
    return 0;
}
