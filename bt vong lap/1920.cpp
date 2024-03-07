#include <stdio.h>
#include <math.h>
int main(void) {

int n;
//19
printf("Nhap vao n: ");
scanf("%d", &n);
if(n%2==0 || n%3==0)
printf("Day ko phai so nguyen to");
else printf("Day la so nguyen to");

//20
printf("\n");
int s = 0;
for(int j=1;j<=n;j++)
{
	if(n%j==0)
	s = s + j;
}
if(n == s/2)
	printf("Day la so hoan hao");
else printf("Day ko phai la so hoan hao");
}
