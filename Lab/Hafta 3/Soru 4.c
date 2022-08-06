// Using the two positive numbers given in the main function, find the largest common divisor of these numbers using a recursive function

#include <stdio.h>

int divisor(int x, int y){
	if(y>0){
		divisor(y, x%y);
	}else{
		return x;
	}
}

int main(void){
	int x,y;
	
	printf("Enter the First Numbers : ");
	scanf("%d",&x);
	printf("Enter the Second Numbers : ");
	scanf("%d",&y);
	
	printf("The Greatest Divisor is: %d",divisor(x,y));
	
}
