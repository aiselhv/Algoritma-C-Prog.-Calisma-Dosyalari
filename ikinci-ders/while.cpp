#include<stdio.h>

int main() {
	
	int a=5;
	int b=3;
	int c=0;
	
	//While ko�ulumuz do�ru ise kodumuz �al���r
	while(a>0){
		printf("%d ", a);
		a--;
	}
	
		printf("\n");
	
	//While ko�ulumuz yanl�� ise kodumuz �al��maz
	while(b<0){
		printf("%d ", b);
		b++;
	}
	
		printf("\n");
	
	//Ay�n� �ekilde While ko�ulumuz do�ru ise kodumuz �al���r
	while(c==0){
		printf("%d ", c);
		c--;
	}
	
	return 0;
}
