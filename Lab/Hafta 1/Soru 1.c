// S1. Aşağıdaki kod parçasının ekran çıktısı nasıl olmalıdır? 

#include <stdio.h>

int x = 5;

int main(void) {
	
	{
		int x=10, y=20;
		{
			printf("x = %d, y = %d\n",x,y);
			{
				int y=40;
				
				x++;
				y++;
				
				printf("x = %d, y = %d\n",x,y);
			}
			printf("x = %d, y = %d\n",x,y);
		}
	}
	
	printf("x= %d", x);
	
	return 0;
}

/*
Outputs:

x = 10, y = 20
x = 11, y = 41
x = 11, y = 20
x= 5
*/
