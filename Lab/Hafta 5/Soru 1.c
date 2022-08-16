/*
By taking the total number of elements from the user, take the necessary place by using the calloc
function from memory. The number of elements in this memory area you allocate is taken from the user. 
Then find the largest value entered using the pointer variable you have defined and print it on the screen.
*/

#include <stdio.h>

void Largest(int *, int);
void Enter(int *, int);

int main(void){
	int a, *arr;
	
	printf("Enter the Size of Array: ");
	scanf("%d",&a);
	arr = (int*)calloc(a, sizeof(int));
	
	Enter(arr,a);
	Largest(arr,a);
}

void Enter(int *arr, int a){
	int i;
	for(i=0 ; i<a ; i++){
		printf("Enter the Value %d: ",i+1);
		scanf("%d",arr+i);
	}
}

void Largest(int *arr, int a){
	int i,lrg=0;
	for(i=0 ; i<a ; i++){
		if(lrg < *(arr+i)){
			lrg = *(arr+i);
		}
	}
	
	printf("\n----------------------------------\nThe Largest Value is %d.\n----------------------------------\n",lrg);
}
