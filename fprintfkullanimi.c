#include <stdio.h>

int main(){

    FILE *fp;
    fp = fopen("file.txt","w");
    fprintf(fp,"file.txt dosyasindan selamlar."); //dosyaya çıktı verir.
    fclose(fp);
    printf("file.txt dosyasindan selamlar."); //konsola çıktı verir.



    return 0;
}
