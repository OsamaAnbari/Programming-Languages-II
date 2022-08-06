// What does the following recursive code do

#include <stdio.h>

void my_recursive_function(int n){
	if(n == 0){
		return 0;
	}
	printf("%d", n);
	my_recursive_function(n-1);
}

void main(){
	my_recursive_function(7);
}

/*
Outputs:

7654321

It show the numbers from writen number to 1
*/
