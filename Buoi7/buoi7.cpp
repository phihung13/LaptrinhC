#include <stdio.h>
#include <math.h>
int main(void) {
	float f,c;
	for(float i= 0; i <=10; i++) {
		f = (9*i)/5 + 32;
		printf("%.f     %.2f\n", i,f);
		}
	for(float j= 32; j <=42; j++) {
		c = 5*(j - 32)/9;
		printf("%.f     %.2f\n", j,c);
		}	
}
