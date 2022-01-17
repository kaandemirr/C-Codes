#include <stdio.h>
#include <stdlib.h>


int main() {
	int sayiadedi=0,i;
	int sayilar[i];
	printf("Kac Adet Sayi Girilecek:");
	scanf("%d",&sayiadedi);
	for(i=0;i<sayiadedi;i++){
			printf("%d.Sayi:",i+1);
			scanf("%d",&sayilar[i]);
		
	}
	float enbuyuk=sayilar[0],enkucuk=sayilar[0],toplam=0;
	for(i=0;i<sayiadedi;i++){
		if(sayilar[i]>enbuyuk)
		enbuyuk=sayilar[i];
		if(sayilar[i]<enkucuk)
		enkucuk=sayilar[i];
		toplam+=sayilar[i];
	}
	float ortalama;
	ortalama=toplam/sayiadedi;
	
	printf("En Buyuk Sayi:%.0f\nEn Kucuk Sayi:%.0f\nOrtalama:%.3f",enbuyuk,enkucuk,ortalama);
	
	return 0;
}
