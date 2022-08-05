/*
Soru 1: Main fonksiyonu içerisinde verilen bir dogal sayiya kadar olan (bu sayi dahil) tüm sayilarin 
toplamini rekürsif bir fonksiyon kullanarak hesaplayaniz.
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calculate(int x){
	if(x==0){
		return 0;
	}else{
		return x + calculate(x-1);
	}
}

int main(int argc, char *argv[]) {
	
	int x,y;
	printf("Enter the Number: ");
	scanf("%d",&x);
	
	y = calculate(x);
	
	printf("The Summation is : %d",y);
	
	return 0;
}
