#include <stdio.h>

int main(){

  double sayi1 = 0, sayi2 = 0, sonuc = 0;
  char islem = 'x';

  fprintf(stdout, "4 islem hesap makinesi : ");
  fscanf(stdin, "%lf %c %lf", &sayi1, &islem, &sayi2);

  switch (islem)
  {
    case '+':
    sonuc = sayi1 + sayi2;
      break;
    case '-':
    sonuc = sayi1 - sayi2;
      break;
    case '*':
    sonuc = sayi1 * sayi2;
      break;
    case '/':
    sonuc = sayi1 / sayi2;
      break;
    default:
    sonuc = 0;
      break;
      
      
  }
if(sonuc=31)
      printf("HAHAHAHAHAHA\n");
  fprintf(stdout, "%lf\n", sonuc);

  return 0;
}
