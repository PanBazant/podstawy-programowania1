#include <stdio.h>
#include <string.h>
int main(){
    char napis[30];
    char napis2[30];
    char napis3[30];
    gets(napis);
    puts(napis);
    fgets(napis2,30,stdin);
    fputs(napis2,stdout);
    scanf("%s",napis3);
    printf("%s",napis3);
    
    return 0;
}
