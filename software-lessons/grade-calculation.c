#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	float s1 , s2 , s3 , s4;
	
	printf("vize notunuz:  ");
	scanf("%f",&s1);
	
	printf("final notunuz: ");
	scanf("%f",&s2);
	
	printf("but notunuz:  ");
	scanf("%f",&s3);
	
	s4=((s1+s2+s3)/3)*0.04;
	
	printf("Ortalamaniz\n");
	printf("%f",s4);
	return 0;
}
