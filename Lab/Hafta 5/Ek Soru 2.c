/*
First, define an array and ask the user for array size. Then, get the elements of array 
from user, too. After that, allocate new space in the array and get new elements. Finally, dump the 
resulting array to scree. (Use dynamic memory allocation.)
*/

#include <stdio.h>
#include <conio.h>

int main(void){
	int a;
	char *arr;
	
	printf("Enter the Size of Array: ");
	scanf("%d",&a);
	
	arr = (char*)calloc(a, sizeof(char));
	
	int i;
	for(i=0 ; i<a ; i++){
		printf("Enter the Value %d: ",i+1);
		scanf("%c",arr+i);
	}
	
	printf("%s",arr);
	
	arr = (char*)realloc(arr, (a-3)*sizeof(char));
	
	printf("%s",arr);
}
