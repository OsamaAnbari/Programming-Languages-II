/*
2. Boy ve kilo bilgisini alarak vücut kitle indeksini hesaplayan kitleIndeks isimli bir fonksiyon yaziniz. Bu fonksiyon asagida 
verilen tabloya göre deger döndürmektedir. Yazdiginiz fonksiyonu main fonksiyonunda çagirarak kullanin ve bir 
program yaziniz. Programin örnek çalismasi sekilde verildigi gibi olmalidir. Vücut kitle indeksi hesabi asagida verilmistir.
Write a function named bodyIndex that computes body mass index by taking height and weight information. 
Write a program that calls the function in the main. The sample output of the program should be as it is 
given.
*/

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int bodyindex(float height, float weight){
	float mass = weight/(height*height);
	
	if (mass>=0 && mass<=18){
		return 1;
	}
	if (mass>=19 && mass<=25){
		return 2;
	}
	if (mass>=26 && mass<=30){
		return 3;
	}
	if (mass>=30){
		return 4;
	}
}

int main(int argc, char *argv[]) {
	float height,weight;
	int durum;
	
	printf("Enter the Height in m: ");
	scanf("%f",&height);
	printf("Enter the Weight in kg: ");
	scanf("%f",&weight);
	
	durum = bodyindex(height, weight);
	
	switch (durum){
		case 1:
			printf("Durum : Zayif");
			break;
		case 2:
			printf("Durum : Normal");
			break;
		case 3:
			printf("Durum : Kilolu");
			break;
		case 4:
			printf("Durum : Obez");
			break;
	}
	
	return 0;
}
