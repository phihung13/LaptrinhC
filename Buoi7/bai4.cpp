#include <stdio.h>
#include <math.h>
int main(void) {
int n;
printf("Nhap vao n: ");
scanf("%d", &n);
//s1
float s2;
printf("\n");
s2 = s/n;
printf("%.2f",s2);

//s3
float s7=1;
for(float i=1;i<=n;i++)
{
	s7 = s7 * (2*i-1)/(2*i);
}
printf("\n%.3f", s7);
}
