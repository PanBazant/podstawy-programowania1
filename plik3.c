#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    if (argc<3){
        printf("podaj wiecej argumentow");
        exit(1);
    }
    FILE *f1;
    FILE *f2;
    f1 = fopen(argv[1],"r");
    f2 = fopen (argv[2],"w");
    if (!f1 && !f2)
    {
        perror("cos poszlo nie tak");
        exit(1);
    }
    char* napis = (char*)malloc(512*sizeof(char));
    while (fgets (napis,512, f1)!=NULL)
    {
        fputs (napis, f2);
    }
    fclose(f1);
    fclose(f2);
    return 0;
}
