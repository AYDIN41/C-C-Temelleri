/*#include <stdio.h>
int main(void)
{
    int adet;
float adetfiyati;

printf("Kac adet urun alacaksiniz?\n");
scanf("%d", &adet);

if(adet>=400) {
    adetfiyati= 0.75;
}

else if (adet>=300 && adet<400) {
    adetfiyati= 1.35;
}

else if (adet>=200 && adet<300) {
    adetfiyati= 2;

}

else if (adet>=100 && adet<200) {
    adetfiyati= 2.5;
}
else if (adet>0 && adet<100) {
    adetfiyati= 3;
}

else {
        printf("Lutfen 1 veye 1 den buyuk adet sayisi giriniz");
}

printf("Toplam odenecek tutar : %f", adet* adetfiyati );

}*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
        setlocale(LC_ALL,"Turkish");

//0-100   adet     -> adet fiyat� = 3TL
//100-200 adet     -> adet fiyat� = 2.5TL
//200-300 adet     -> adet fiyat� = 2TL
//300-400 adet     -> adet fiyat� = 1.25TL
//400-... adet     -> adet diyat� = 0,75TL


    int adet;
    float x;

    printf("Ka� adet �r�n al�caks�n�z? \n");
    scanf( "%d" , &adet);
    float toplam;

    if( adet >=400){
         x = 0.75;

    }
    else if ( adet >= 300 && adet < 400){
        x = 1.25;

    }
    else if (adet >= 200 && adet < 300){
        x =  2;

    }
    else if ( adet >= 100 && adet < 200){
        x = 2.5;

    }
    else if ( adet > 0 && adet < 100){
        x = 3;

    }
    else{
        printf("L�tfen 1 veya 1 den b�y�k adet say�s� giriniz...\n");
}
      printf("Toplam �denecek tutar : %f", adet* x);

    return 0;
}
