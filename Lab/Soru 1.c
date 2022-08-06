// 1. Write screen output, when fun is called in main function with n=0, a=5 and b=7.

#include <stdio.h>

void fun(int n, int a, int b){
	if (n >=10){
		return;
	}
	fun(n+2 , a , b+2);
	printf("%d %d %d\n", n , a , b);
}

int main(void){
	fun(0 , 5 , 7);
	
	return 0;
}

/*
Outputs:

8 5 15
6 5 13
4 5 11
2 5 9
0 5 7
*/
