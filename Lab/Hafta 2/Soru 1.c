/*
1. Klavyeden öğrenci sayısı (en fazla 100) ve ders geçme notunu alarak bu bilgileri tanımlanacak “hesapla” fonksiyonuna 
gönderen bir “main” fonksiyonu hazırlayınız. “hesapla” fonksiyonu kendisine gelen öğrenci sayısı kadar notu klavyeden 
okuyarak 100 elemanlı bir diziye kaydetmeli ve geçme notuna göre kaç tane öğrencinin dersten kaldığını bularak 
fonksiyondan geri döndürürken, sınıf ortalamasını da ekrana yazdırmalıdır. Buna göre aşağıda verilen alanlara “main” ve 
“hesapla” fonksiyonlarını yazınız.
Write a "main" function that takes the number of students (less than or equal to 100) and the passing grade from the 
keyboard and sends this information to the "calculate" function. The "calculate" function will read grades of each 
student from the keyboard and record them in an array with 100 elements. According to the passing grade, find out 
how many students failed and return it from function, and print the class average on the function. Accordingly, write 
"main" and "calculate" functions in the following fields.
*/

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
