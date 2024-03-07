#include <stdio.h>
#include <math.h>
int main(void) {
int n;
printf("Nhap vao n: ");
scanf("%d", &n);
//13
int s6=0;
for(int i=1;i<=n;i++){
		if(i%2!=0){
		s6 = s6 + pow(i,2);
		}
	}
printf("%d", s6);
//14
float s7=1;
for(float i=1;i<=n;i++)
{
	s7 = s7 * (2*i-1)/(2*i);
}
printf("\n%.3f", s7);
}
