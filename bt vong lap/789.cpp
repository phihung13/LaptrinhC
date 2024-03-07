#include <stdio.h>
#include <math.h>
int main(void) {

float n,s,t;
//7
s=0;
printf("Nhap vao n: ");
scanf("%f", &n);
for(int i=1;i<=n;i++)
{
	s = s+i;
}
	printf("%f",s);
//8
t=1;
printf("\n");
for(int i=1;i<=n;i++)
{
	t = t*i;
}
	printf("%f",t);
//9
float s2;
printf("\n");
s2 = s/n;
printf("%.2f",s2);
}
