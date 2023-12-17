#include<stdio.h> //C dilinde standart giri�/��k�� i�lemlerini sa�layan stdio k�t�phanesini programa ekler.
#define MAX 50 	  //MAX isimli de�i�kene 50 de�erini atar ve program i�erisinde "MAX" ile kullanabiliriz

//Program yap�m�z:
int main() {
	
	//Tan�mlama ifadeleri:
	int a = 3; //Tam say�lar
	float b = 3.14; //Kesirli Say�lar
	double c = 6.73; //Kesirli Say�lar
	
	char karakter = 'A'; //Karakter
	char str[MAX] = "Ali"; //MAX de�eri uzunlu�unda string ifade tutmak
	
	
	
		
	//Yazd�rma ��lemi
	printf("Hello World:) \n");
	
	/*
		\n alt sat�ra inmek i�in
		\t bir "TAB" bosluk b�rakmak i�in
	*/
	
	//De�i�kenleri Yazd�rma
	printf("%d \n", a); //int de�erler i�in "%d"
	printf("%f \n", b); //float de�erler i�in "%f"
	printf("%.2f \n", b); //de�erlerin virg�lden sonra ka� basamakla g�r�nece�ini s�n�rlamak i�in i�in "%.2f","%.1f" �eklinde kullan�lur 
	printf("%f \n", c); //double de�erler i�in "%f"
	
	printf("%c \n", karakter); //char de�erler i�in "%c"
	printf("%s \n", str); //string de�erler i�in "%s"
	
	
	
	
	//Veri alma i�lemi
	//De�i�kenleri yazd�r�rken kulland���m�z "%..." ifadesi ile ','den sonra &degisken_adi �eklinde kullan�l�r
	
	int veri1 = 0;
	
	printf("Lutfen bir sayi giriniz: "); //Kullan�c�ya bilgi verelim
	scanf("%d", &veri1); //�nt oldu�u i�in %d ve ','den sonra &veri1 ile de�i�kenimizi kullan�c�dan ald�k
	
	printf("Girdi�iniz sayi %d", veri1); //�eklinde veriyi kontrol edelim:) 
	
	
	
	
	//Matematiksel i�lemler
	/*
		a++;		// a de�eri (a+1) de�erine e�itlenir
		a--;		// a de�eri (a-1) de�erine e�itlenir
		a = a+5;   	// a de�eri (a+5) de�erine e�itlenir
		a = b + c; 	// a de�eri (b+c) de�erine e�itlenir
		
		a = b/c;	// a degeri (b/c) de�erine e�itlenir (c 0'dan farkl� olmak �zere)
		a = a*17;	// a degeri (a*17) de�erine e�itlenir
	*/
		
	return 0;
}
