#include<stdio.h>

int main() {
	
	float sayi_bir=0; 
	float sayi_iki=0;
	
	int secim = 0;
	
	float islem = 0;
	
	printf("Hesap Makinesi\n");
	printf("--------------\n");
	printf("1.Toplama \n2.Cikarma \n3.Carpma \n4.Bolme \n\n");	
	
	printf("Yapmak istediginiz islem: ");
	scanf("%d", &secim);
	
	printf("\n");
	
	switch(secim){
		
		//secim de�i�kenimiz hangi de�ere e�itse o case �al��acakt�r.
		
		case 1:
			printf("Islem yapilacak sayilar: ");
			scanf("%f %f", &sayi_bir, &sayi_iki);
			
			islem = sayi_bir+sayi_iki;
			
			printf("Sonuc: %f", islem);
			
			break;
			
		case 2:
			printf("Islem yapilacak sayilar: ");
			scanf("%f %f", &sayi_bir, &sayi_iki);
			
			islem = sayi_bir-sayi_iki;
			
			printf("Sonuc: %f", islem);
			
			break;
			
		case 3:
			printf("Islem yapilacak sayilar: ");
			scanf("%f %f", &sayi_bir, &sayi_iki);
			
			islem = sayi_bir*sayi_iki;
			
			printf("Sonuc: %f", islem);
			
			break;
			
		case 4:
			printf("Islem yapilacak sayilar: ");
			scanf("%f %f", &sayi_bir, &sayi_iki);
			
			islem = sayi_bir/sayi_iki;
			
			printf("Sonuc: %f", islem);
			
			break;
			
		//belirledi�imiz case'ler d���nda bir durum s�z konusu oldu�unda default �al���r
		default:
			printf("Hatali Giris!");
			break;
	}	
		
	
	return 0;
}
