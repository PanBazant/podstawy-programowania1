#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    FILE *f;
    f=fopen(argv[1],"w");
    if(!f)
    {
        perror("blad");
        exit(1);
    }
    int i,j;
    for(i=1;i<=10;1++){
        fprintf(f,"%d \t",i*j);
    } fprintf(f,"\n");
}
fclose(f);
    
    return 0;
}
