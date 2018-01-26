#include <stdio.h>

int main(int argc, char** argv){
    FILE *f;
    f=fopen(argv[1],"r");
    if (!f)
    {
        perror("Blad");
        exit(1);
}
    char c;
    int i;
    while ((c=fgets(f))!=EOF)
    {
        i++;
    }
    printf("%d",i);
    fclose(f);
    return 0;
}
