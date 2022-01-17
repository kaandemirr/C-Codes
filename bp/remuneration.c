#include <stdio.h>
#include <stdlib.h>
//Hesapla_Fonkisyonu ve Dizi kullanarak Girilen sure sonrasi odenmesi gereken
//tutari hesaplayan ve ekran ciktisi veren c programi
int Hesapla(int dk){
	int sayac=0;
	if(dk>=120)
	return 200;
	if(dk<20)
	return 15;
	 else if(dk>20 && dk<120){
        while(dk>0)
        {
            dk-=15;
            sayac++;
        }
        return sayac*10;
    }
    //ucretlendirme Ilk 20 dakika için 15 TL ücretlendirme yapilmaktadir.
    // 20 dakikadan sonra ki her 15 dakikalik süreç için 10 TL alinmaktadir.
    // Sürenin 2 saati asmasi halinde tam günlük ücret olan 100 TL alinmaktadir.

}

int main() {
	 int adet,i;
    printf("Tarifeden faydalanan kisi sayisi : ");
    scanf("%d",&adet);

    int kisiler[adet];
    for(i=0;i<adet;i++){
        printf("%d. Kisinin Binme Dakikasi : ",i+1);
        scanf("%d",&kisiler[i]);
    }
    printf("\n\n");

    for(i=0;i<adet;i++)
        printf("%d. Kisinin Odemesi Gereken Fiyat : %d\n",i+1,Hesapla(kisiler[i]));

	return 0;
}
