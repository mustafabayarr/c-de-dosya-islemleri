#include <stdio.h>

int main(){

    FILE *fp;
    char arr[250];
    fp = fopen("file.txt","r"); //file.txt dosyasını okur.
    while( fscanf(fp,"%s",arr) != EOF ){ //dosya sonuna gelene kadar dizinin bütün elemanlarını alır.
        printf("%s",arr); // döngünün içinde bütün karakterleri yazdırır.
    }
    fclose(fp); // son olarak dosyayı kapatıyoruz.

    return 0;
}
