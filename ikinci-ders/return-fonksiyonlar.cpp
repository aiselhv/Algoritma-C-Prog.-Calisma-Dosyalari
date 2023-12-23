#include<stdio.h>

//fonksiyonumuzla geri d�n�� sa�layabiliriz, i�eride yazd�rma i�lemi gibi bir �ok i�lemde yap�labilir
//fakat return de�eri ne ise e�itlenen de�ere o de�er aktar�l�r
int cikarma(int a, int b){
	int sonuc = a - b;
	
	//alttaki kodu yorum sat�r�ndan kald�r�p deneyin
	//printf("degere esitlemeden kullandik \n");
	
	return sonuc;
}

int toplama(int a, int b){	
	int sonuc = a + b;
	
	//alttaki kodu yorum sat�r�ndan kald�r�p deneyin
	//printf("degere esitleyip kullandik \n");
	
	return sonuc;
}

//de�i�ken kullanmadan direkt d�n�� sa�layabiliriz
int carpma(int a, int b){
	return (a*b);
}

int main() {
		
	//yazd�rma i�lemi olmad��� i�in hi�bir i�lem yapmayacakt�r.
	cikarma(8, 1);
		printf("\n\n");
		
	//fakat yukar�daki i�lemi bir de�ere e�itleyerek kullanabiliriz
	int toplamaCevap = toplama(3, 8);
	printf("Toplama: %d", toplamaCevap);
		printf("\n\n");
			
	//veya printf i�erisinde diret bu �ekilde de kullan�labilir fonksiyonun de�erini unutmayal�m %d, %f...
	printf("Carpma: %d", carpma(3, 7));
	
	return 0;
}
