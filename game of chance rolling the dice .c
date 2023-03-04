#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

/*Şans oyunu
iki zar atılır
zarların toplamı hesaplanır
ilk atışta 7 veya 11 gelirse kazanır
ilk atışta 2,3 veya 12 gelirse oyuncu kaybeder
ilk atışta 4,5,6,8,9,10 gelirse bu oyuncunun puanı olur
oyuncu 7 atmadan önce kendi puanın tutturmalıdır
*/

int main ()
{
    int zar1,zar2;
    int puan1,puan2;
    char isim1[50],isim2[50];
    char secim;
    int sonuc=0;

    printf("lütfen birinci oyuncunun adını giriniz: \n");
    gets(isim1);
    printf("lütfen ikinci oyuncunun adını giriniz: \n");
    gets(isim2);

    printf("%s oyuncu zar atsin mi ?",isim1);
    scanf("%c", &secim);

    if(secim!='e')
    {
    printf("birinci oyuncu atis yapmadı");
    }
    else
    {
    srand(time(NULL));
    zar1=rand()%6+1;
    zar2=rand()%6+1;
    puan1=zar1+zar2;
    
    printf("%s nin attığı zar sonucları: %d ve %d \n",isim1,zar1,zar2);
    printf("ikinci kullanıcı zar atisi yapıyor\n");

    zar1=rand()%6+1;
    zar2=rand()%6+1;
    puan2=zar1+zar2;
    
    printf("%s nin attığı zar sonucları: %d ve %d\n",isim1,zar1,zar2);

    if(puan1==7 || puan1==11)
    {
        printf("%s birinci kullanıcı kazandı: \n",isim1);
        sonuc=1;
        return 0;
    }
    else if(puan1==2 || puan1==3 || puan1==12)
    {
        printf("%s birinici kullanıcı kaybetti: \n",isim1);
        sonuc=1;
        return 0;
    }

    if(puan2==7 || puan2==11)
    {
        printf("%s ikinci kullanıcı kazandı: \n",isim2);
        sonuc=1;
        return 0;
    }
    else if(puan2==2 || puan2==3 || puan2==12)
    {
        printf("%s ikinci kullanıcı kaybetti: \n",isim1);
        sonuc=1;
        return 0;
    }
    else
    {
    system("cls");
    system("color 74");
    printf("%s puani: %d",isim1,puan1);
    printf("%s puani: %d",isim2,puan2);
    }
    }
    int i;
    for(i=2;i<7;i++)
    {
    printf("%s nin %d. zar atisi: \n",isim1,i);
    zar1=rand()%6+1;
    zar2=rand()%6+1;
   printf("%d ve %d \n",zar1,zar2);

   if(puan1==zar1+zar2)
   {
       printf("%s birinci kullanıcı kazandı: \n",isim1);
       sonuc=1;
       return 0;
    }
    printf("%s in %d. zar atisi: \n",isim2,i);
    zar1=rand()%6+1;
    zar2=rand()%6+1;
   printf("%d ve %d \n",zar1,zar2);

   if(puan2==zar1+zar2)
   {
       printf("%s ikinci kullanıcı kazandı: \n",isim2);
       sonuc=1;
       return 0;
    }
    }


if(sonuc!=1)
{
    printf("kazanan olmadı\n");

}

    return 0;
}