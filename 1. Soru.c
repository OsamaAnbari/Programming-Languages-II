#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int calculate(int stdnum, int pasgrd){
	int grades[stdnum];
	int i, avg=0 , fail=0;
	
	for(i=0; i<stdnum; i++){
		int x;
		printf("Enter Grade of Student %d: ",(i+1));
		scanf("%d",&grades[i]);
		avg = avg + grades[i];
		
		if(grades[i]<pasgrd){
			fail++;
		}
	}
	
	avg = avg/stdnum;
	printf("\n---------------------------------------\n");
	printf("The Average is : %d",avg);
	
	return fail;
}

int main(int argc, char *argv[]) {
	
	int stdnum, pasgrd;
	
	do{
		printf("Enter Number of Students: ");
		scanf("%d",&stdnum);
		if(stdnum>100){
			printf("Pleas Enter Number Less Than 100 ...\n");
		}
	}while(stdnum>100);
	
	
	printf("Enter Passing Grade: ");
	scanf("%d",&pasgrd);
	printf("\n---------------------------------------\n");
	
	int fail = calculate(stdnum, pasgrd);
	
	printf("\nFailed Students Number : %d", fail);
	
	return 0;
}
