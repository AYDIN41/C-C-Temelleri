#include <stdio.h>
int main(void)
{
    char  isim;
    int yas;
    char sonuc;

    printf("Onedio testine ho�gelniz\n");
    printf("Testimizin ad� hangi filozofsunuz?\n");
    printf("Isminizi bas harfini giriniz..\n");
    scanf(" %c",&isim);
    printf("Sizin isminiz %c\n",isim);

    printf("Kac yas�ndas�n�z?\n");
    scanf("%d",&yas);

    if (yas<21 && yas>0){
            printf("felsefenin anlam�n� biliyormunusuz?\n");
            printf("E/H diye cevap veriniz\n");
            scanf(" %c", &sonuc);

            if  ( sonuc == 'E'){

                    printf("Inanc�n�z tam m�?\n");
                    printf("E/H diye cevap veriniz\n");
                    scanf(" %c", &sonuc);


            } else if (sonuc == 'H') {

                    printf("Inanc�n�z tam m�?\n");
                    printf("E/h diye cevap veriniz\n");
                     scanf(" %c", &sonuc);

            } if (sonuc == 'E'){
                printf("Mevlanas�n");
                }else if (sonuc == 'H'){
                        printf("Nicesin");
                } else
                printf(" Sen Agnostiksin!\n");
                printf(" Tester : HAYIR DEG�L�M\n");
                printf(" Yazilimci : CIKAR GOSTER\n");


    }
    return 0;
}
