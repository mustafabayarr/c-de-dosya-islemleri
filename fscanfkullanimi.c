#include <stdio.h>

int main(){

    FILE *fp;
    char arr[250];
    fp = fopen("file.txt","r");
    while( fscanf(fp,"%s",arr) != EOF ){
        printf("%s",arr);
    }
    fclose(fp);

    return 0;
}
