#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
    char islem;
    float sayi1,sayi2;
    int kontrol=1;
    
    printf("*********** HESAP MAKİNESİ ***********\n\n");
    while (kontrol != 0) {
        printf("İsleminizi seçiniz(+ - * /) : ");
        scanf(" %c",&islem);
        printf("Birinci sayıyı giriniz : ");
        scanf("%f",&sayi1);
        printf("Ikinci sayıyı giriniz : ");
        scanf("%f",&sayi2);
        switch(islem){
            case '+':
                printf("Sonucunuz = %.2f\n",sayi1+sayi2);
                break;
            case '-':
                printf("Sonucunuz = %.2f\n",sayi1-sayi2);
                break;
            case '*':
                printf("Sonucunuz = %.2f\n",sayi1*sayi2);
                break;
            case '/':
                if(sayi2==0){
                    printf("Tanımsızdır\n");
                }
                printf("Sonucunuz = %.2f\n",sayi1/sayi2);
                break;
            default:
                printf("Yanlış bir değer girdiniz!!\n");
                break;
    }
        printf("\n");
        printf("İşlemi sonlardırmak için 0'a basınız.(Devam etmek için 0 dışında herhangi bir sayıya basınız.):");
        scanf("%d",&kontrol);
        printf("\n");
    }
    printf("\nBaşarıyla çıkış yaptınız!!");
    printf("\n");
    return 0;
}

