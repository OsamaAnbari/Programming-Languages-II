// Write a recursion program that finds the largest element in the entered array in C language.

#include <stdio.h>

int calculate(int y[], int x, int largest){
	if (x==0){
		return largest;
	}else{
		if(y[x] > largest)
			largest = y[x];
		return calculate(y, x-1, largest);
	}
}

int main(void){
	
	int x, i;
	
	printf("Enter Size of Array: ");
	scanf("%d", &x);
	
	int y[x];
	
	for (i=0 ; i<x ; i++){
		printf("Enter number %d: ",(i+1));
		scanf("%d", &y[i]);
	}
	
	int z = calculate(y,x-1,0);
	
	printf("The Largest Value is: %d", z);
	
	return 0;
}
