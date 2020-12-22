#include <stdio.h>

int main(){
	
	int x, y, n;
	
	printf("Lutfen sayi girin:");
	scanf("%d", &n);
	
	x = 1;
	
	for(; x<=24; x++){
		
		if(n % x == 0){
			
			printf("%d \n", x);
			
		}
		
	}
	
	
	
}
