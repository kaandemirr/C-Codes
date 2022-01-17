#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
		int s1;
		float s2;
		float alan,cevre;
		
		printf("yaricapi giriniz:  ");
		scanf("%d",&s1);
		
		printf("pi kac alinacak:    ");
		scanf("%f",&s2);	
		
		
		alan=s1*s1*s2;
		cevre=(s1*s2)*2;
	
		
		printf("alan:%.2f ",alan);
		printf("cevre:%.2f",cevre);
		
		
	return 0;
}
