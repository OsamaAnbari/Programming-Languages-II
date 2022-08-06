/*
Soru 1: Main fonksiyonu içerisinde verilen bir dogal sayiya kadar olan (bu sayi dahil) tüm sayilarin 
toplamini rekürsif bir fonksiyon kullanarak hesaplayaniz.
*/

#include <stdio.h>

int calculate(int x){
	if(x==0){
		return 0;
	}else{
		return x + calculate(x-1);
	}
}

int main(void) {
	
	int x,y;
	printf("Enter the Number: ");
	scanf("%d",&x);
	
	y = calculate(x);
	
	printf("The Summation is : %d",y);
	
	return 0;
}
