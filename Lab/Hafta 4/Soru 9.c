// If the following code is executed, how many "a" will be written on the screen.

#include<stdio.h>

char f1(int b);

int main(void){
	char a;
	a = f1(10);
	print("%c",a);
}

char f1(int b){
	
	printf("a");
	
	if(b<=8){
		
		return 'a';
		
	}else{
		
		printf("a");
		f1(b--);
		
	}
}

/*
Outputs:

E. Sinirsiz sayida(Infinitive number)
*/
