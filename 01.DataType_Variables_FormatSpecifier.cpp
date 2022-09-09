#include <stdio.h>

int main(){
	
	int a1= 42;
	char b1 = 6;
	char b2 = 'A';
	float c1= 4.52;
	double d1 = 0.44;
	
	printf("%d %c %d %f %f %s\n",a1,b1,b2,c1,d1,"Deneme 1");
	
	
	printf("%d char \n",sizeof(char));
	printf("%d int \n",sizeof(int));
	printf("%d short int\n",sizeof(short int));
	printf("%d long int\n",sizeof(long int));
	printf("%d float\n",sizeof(float));
	printf("%d double\n",sizeof(double));
	
	return 0;
	
	
}
