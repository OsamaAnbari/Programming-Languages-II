/*
S5. Bir dairenin alanini hesaplayan programi yazin. 
Kisitlar:
• Dairenin yariçapi kullaniciya sorularak klavyeden girilmelidir ve fonksiyon main fonksiyounu 
içerisinden çagrilmalidir.
• Fonksiyon prototipi: float square (const int r)
• Pi sayisi 3.14 dür ve programin basinda sabit olarak tanimlanmalidir.
• Sonuç ekrana yazdirilirken küsürat ‘2’ olacak sekilde olmalidir. 
*/

#include <stdio.h>

static float pi = 3.14;

float square (const int r){
	return pi*r*r;
}

int main(void){
	float r,s;
	
	printf("Enter the Radius: ");
	scanf("%f",&r);
	
	s = square(r);
	printf("The space is :%0.2f",s);
}
