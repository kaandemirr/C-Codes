#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
			printf("Ogrenci Ortalama Hesaplama\n\n\n");
			
		float s1,s2,s3,proje,ortalama;
		
		
		printf("1.sinavi girin:");
		scanf("%f",&s1);
		
		printf("2. sinavi girin:");
		scanf("%f",&s2);
		
		printf("3. sinavi girin:");
		scanf("%f",&s3);
		
		printf("proje notunuzu girin:");
		scanf("%f",&proje);
		
		ortalama=(s1+s2+s3+proje)/4;
		
		if (ortalama>=50 && ortalama<=60)
	{
 	printf("Notunuz: %.2f Harf Notunuz DD",ortalama);
	}
	 if(ortalama>=61 && ortalama<=70)
 	{
 		 printf("Notunuz: %.2f Harf Notunuz CC",ortalama);
	}
 	if(ortalama>=71 && ortalama<=85)
 	{
  	printf("Notunuz: %.2f Harf Notunuz BB",ortalama);
	}
    if(ortalama>=86 && ortalama<=100)
    {
 	printf("Notunuz: %.2f Harf Notunuz AA",ortalama);
	}
    if(ortalama<=49)
    {
     printf("Notunuz: %.2f Harf Notunuz FF",ortalama);
 	}
 }

