// S3. Aşağıdaki kod parçalarını yazarak ekran çıktılarını yorumlayınız

#include <stdio.h>
#include <time.h>

int main(void){
	clock_t start_t, end_t;
	register int id1, id2;
	
	start_t = clock();
	
	for(id1=0; id1<2000000; id1++){
		for(id2=0; id2<200; id2++){
		}
	}
	
	end_t = clock();
	
	printf("Start degeri %lu\n", start_t);
	printf("End degeri %lu\n", end_t);
	printf("Dongu calisma suresi %.3f", (double)(end_t - start_t) / CLOCKS_PER_SEC );
}

/*
Outputs:

Start degeri 0
End degeri 140
Dongu calisma suresi 0.140
*/
