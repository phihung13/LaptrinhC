#include <stdio.h>
#include <math.h>
int main(void) {
int num;
float avg, s =0;
for(int i=0;i<10;i++){
	printf("So thu %d:",i+1);
	scanf("%d",&num);
	s = s + num;
	}
avg = s/10;
printf("Tong = %f\n", s);
printf("Trung binh cong = %.2f", avg);
}
