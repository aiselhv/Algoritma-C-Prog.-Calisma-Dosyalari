#include<stdio.h>

int main() {
	
	int a=7;
	int b=3;
	int c=5;
	
	//do while'da ise ko�ulumuz yanl�� olsa bile do i�erisindeki kodumuz en az bir kere �al���r
	
	//Ko�ulumuz do�ru oldu�u s�rece �al��acak
	do{
		printf("%d ", a);
		a--;
	}while(a>0);
	
		printf("\n");
	
	//Ko�ulumuz yanl�� fakat en az bir kere �al���yor
	do{
		printf("%d ", b);
		b++;
	}while(b<0);
	
		printf("\n");
	
	//Ko�ulumuz yanl�� fakat en az bir kere �al���yor ve ard�ndan c 1 azalt�l�yor 
	//ard�ndan ko�ulumuz do�ru oldu�u i�in tekrardan �al��mak durumunda kal�yor
	do{
		printf("%d ", c);
		c--;
	}while(c==4);
	

	return 0;
}
