/*
First, define an array and ask the user for array size. Then, get the elements of array 
from user, too. After that, allocate new space in the array and get new elements. Finally, dump the 
resulting array to scree. (Use dynamic memory allocation.)
*/

#include <stdio.h>
#include <stdlib.h>

void enter(int *arr, int size){
	int i;
	for(i=0 ; i<size ; i++){
		printf("Enter Element %d: ",i+1);
		scanf("%d",arr+i);
	}
}

void show(int *arr, int size){
	int i;
	for(i=0 ; i<size ; i++){
		printf("\nThe Element %d: %d",i+1,*(arr+i));
	}
}

int main(void){
	 int *arr;
	 int a,b;
	 printf("Enter Size of Array : ");
	 scanf("%d",&a);
	 arr = (int*)calloc(a,sizeof(int));
	 enter(arr,a);
	 
	 printf("Enter Size of New Elements : ");
	 scanf("%d",&b);
	 arr = (int*)realloc(arr,(a+b)*sizeof(int));
	 enter(arr+a,b);
	 
	 show(arr,a+b);
}
