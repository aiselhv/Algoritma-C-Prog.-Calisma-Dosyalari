#include<stdio.h>

/*
	*
	**
	***
	****
	*****
*/

//�eklinde y�ld�zlar ile ��gen yapal�m

int main(){
	
	int satir_sayisi = 0;
	int yildiz_sayisi = 0;
	
	for(satir_sayisi=0; satir_sayisi<5; satir_sayisi++){
		
		for(yildiz_sayisi=0; yildiz_sayisi<=satir_sayisi; yildiz_sayisi++){
			printf("*");
		}
		
		printf("\n"); //sat�r atlamak i�in
	}
	
	return 0;
}
