/*
First, allocate the minimum memory space required for your name with malloc. Then expand this 
memory area with realloc to include your last name.
*/

#include <stdio.h>

int main(void){
	char *name;
	
	name = (char*)malloc(5*sizeof(char));
	
	strcpy(name , "Osama Anbari");
	printf("%s", name);
	
	name = (char*)realloc(name , 12*sizeof(char));
	
	printf("%s", name);
}
