// Write a recursion function to sum the digits of the number given in the main function.

#include <stdio.h>

int sum(int x){
	if(x == 0){
		return 0;
	}else{
		return x%10 + sum(x/10);
	}
}

int main(void){
	
}
