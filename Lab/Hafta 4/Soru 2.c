// Write a recursive function that takes the address of the array and the number of elements as a parameter and returns the number  of odd numbers in the array. (Do not use global variable) 

#include <stdio.h>

int fun(int *arr, int x){
	if(x == 0){
		return 0;
	}else{
		int n = (*arr)%2;
		if (n != 0){
			printf("%d\n", *arr);
		}
		fun(arr+1, x-1);
	}
}



int main(void){
	int x,i;
	
	printf("Enter Size of Array: ");
	scanf("%d",&x);
	
	int y[x];
	
	for(i=0 ; i<x ; i++){
		printf("Enter Element %d: ",(i+1));
		scanf("%d",&y[i]);
	}
	
	fun(y,x);
}
