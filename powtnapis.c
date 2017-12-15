#include <stdio.h>

int znaki(char *napis){
    int i;
    for(i=0;napis[i];i++);
    return i;
}

int liczba(char *napis){
    int i,ilosc=0;
    for(i=0;napis[i]!='\0';i++){  // napis[i]
        if(napis[i]==' ' && i>0 && napis[i-1]!=' ')
            ilosc++;
    }
    if(napis[i-1]!=' ')
        ilosc++;
    return ilosc;
}

int main(){
    
    char napis[] ="  Tata lubi   x5";
    printf("%d", liczba(napis));;
    
    return 0;
}
