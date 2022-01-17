#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	printf("Kurallar Basit 3 Yazi veya 3 Tura Gelirse Kazanirsin\nEger 2 Tura Gelirse Devam Edebilirsin Ancak 2 Yazi Gelirse Kaybedersin\n");
	int yazi,tura,q,w,e;
	char t;
	srand(time(0));
	q=rand()%2;
	w=rand()%2;
	e=rand()%2;
	if(q==1){
		printf("1.Tura\n");
	}else{printf("1.Yazi\n");
	}
	if(w==1){
		printf("2.Tura\n");
	}else{printf("2.Yazi\n");
	}
	if(e==1){
		printf("3.Tura\n");
	}else{printf("3.Yazi\n");
	}
	int toplam=q+w+e;
	if(toplam==2){printf("Bir Hak Daha Kazandin\n\n");
	printf("Tekrar Denemek Ister Misin?\n(Evet Icin 'e'||Hayir Icin 'n')\n");
	scanf("%s",&t);
	if(t=='e'){
		return main();}
		else{return 0;
		}
	}if(toplam==0){
		printf("Kazandin");
	}if(toplam==3){
		printf("Kazandin");}
		if(toplam==1){printf("Kaybettin");
		}
		
	
	
	
	return 0;
}
