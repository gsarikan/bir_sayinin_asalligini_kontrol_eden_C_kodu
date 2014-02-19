#include <stdio.h>
#include <stdlib.h>

long asal_mi(long N){
     
     int i;
     int kontrol=1;
     
     int kok = sqrt(N);
     
     for(i = 2; i <= kok; i++){
           if(!asal_mi(i)){
           continue;
           }
           
           if(N % i == 0){
                kontrol = 0;
                break;
           }
     }
     return kontrol;
}

int main(int argc, char *argv[])
{

  long sayi;
  
  printf("Kontrol edilecek sayiyi giriniz: ");
  scanf("%ld", &sayi);
  
  if(sayi<2){
             printf("Lutfen 1'den buyuk bir sayi giriniz: \n");
             scanf("%ld", &sayi);
             }
  
  if(asal_mi(sayi)){
			printf("%ld sayisi asaldir. \n", sayi);
		} else {
			printf("%ld sayisi asal degildir. \n", sayi);
		} 
  
  system("PAUSE");	
  return 0;
}
