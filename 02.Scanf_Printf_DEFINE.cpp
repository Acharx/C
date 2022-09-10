#include <stdio.h>

#define PI 3.14


int main(){
		
	float yaricap=0;
	float cevre=0;
	float alan=0;
	
	printf("yaricapi giriniz :");
	scanf("%f",&yaricap);
	
	cevre = 2*PI*yaricap ;
	alan = PI*yaricap*yaricap;
	
	printf("cevre = %f \n",cevre);
	
	printf("alan = %f ",alan);
	
}
