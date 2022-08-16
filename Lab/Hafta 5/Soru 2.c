/*
Allocate the minimum char memory space required for your name and surname using the malloc
function. Then use the strcpy function to write your name and surname with spaces to this variable.
*/

#include <stdio.h>

int main(void){
	char *name;
	name = (char*)malloc(12*sizeof(char));
	strcpy(name , "Osama Anbari");
	
	printf("%s", name);
}
