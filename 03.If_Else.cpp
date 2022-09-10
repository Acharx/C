#include <stdio.h>

int main(){
	
	int a=5;
	int b=6;
	int c=7;
	
	
	if ( a>b ){
		
		if(c > a){
			
			printf("Blok 1");
			
		}else{
			
			printf("Blok 2");
			
		}
		
		
		
	}else{
		
		if ( a > c  ||  a < b){
			
			printf("Blok 3");
			
		}else{
			
			printf("Blok 4");
			
		}
		
		
	}
	
	
}
