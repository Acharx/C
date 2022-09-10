#include <stdio.h>

int main(){
	
	int x;
	
	printf("Lutfen islem numarasini seciniz");
	scanf("%d",&x);
	
	switch(x){
		case 1:
			printf("Case 1 secildi");
			break;
		
		case 2:
			printf("Case 2 secildi");
			break;
		
		case 3:
			printf("Case 3 secildi");
			break;
					
		default:
			printf("Gecersiz islem");
			break;
				
	}
	
	
	
}
