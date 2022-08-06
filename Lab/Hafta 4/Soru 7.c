// What does the following function print for n = 25?

#include <stdio.h>

void fun(int n){
	if (n == 0){
		return;
	}
	fun(n/2);
	printf("%d", n%2);
}

int main(void){
	fun(25);
	
	return 0;
}

/*
Outputs:

11001
*/
