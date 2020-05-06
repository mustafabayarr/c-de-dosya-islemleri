/*
    BÝR SINIFTAKÝ ÖÐRENCÝLERÝN NUMARA, ÝSÝM VE
    NOTLARINI BÝR DOSYAYA YAZDIRMAK.

*/

#include <stdio.h>

int main(){

    FILE *fp;
    int number,not;
    char isim[20];

    fp = fopen("abc.txt","w");

    if( fp == NULL )
        printf("Dosya hata verdi.");
    else{
        printf("Numara girin : \n");
        scanf("%d",&number);
        fprintf(fp,"Numara :%d \n",number);
        printf("Isim girin : \n");
        scanf("%s",isim);
        fprintf(fp,"Isim :%s \n",isim);
        printf("Notu girin : \n");
        scanf("%d",&not);
        fprintf(fp,"Not :%d \n",not);
    }



    return 0;
}
