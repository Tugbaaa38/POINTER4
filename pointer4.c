#include <stdio.h>
#include <stdlib.h>

//Parametre degiskeni pointer olan fonksiyonlar
// fonksiyon cagrilirken adres bilgisi ile cagrilmalidir.Boyle bir islev,parametre degiskenine adresi kopyalanan yerel bir degiskenin degerini degistirebilir.

void DegerDegistir(int *sayi)
{
	*sayi=100;
}


int main() {

   int num=80;
   printf("Deger degismeden once num=%d\n",num);
   DegerDegistir(&num);
   printf("Deger degistirdikten sonra num=%d",num);
   
	return 0;
}