#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Podaj liczbe napisow, ktore chcesz wprowadzic\n");
    int n,i;
    char liczba[20];
    fgets(liczba,20,stdin);
    n=atoi(liczba);
    char **tab=malloc(n*sizeof(char**));
    for (i=0;i<n;i++){
        tab[i]=malloc(20*sizeof(char*));
        fgets(tab[i],20,stdin);
    }
    for(i=0;i<n;i++){
        fputs(tab[i],stdout);
    }
    return 0;
}

