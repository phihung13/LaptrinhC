#include <stdio.h>
#include <math.h>

int main(void)
{
 	for(int i=100;i<=999;i++){
 		int n1 = (i/100);
    	int n2 = (i%100)/10;
    	int n3 = (i%100)%10;
 		if (pow(n1,3) + pow(n2,3) + pow(n3,3) == i) printf("%d, ",i);
 	}
}
