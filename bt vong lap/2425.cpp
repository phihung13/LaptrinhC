#include <stdio.h>
#include <math.h>
int main(void) {
int n;
//24
printf("Nhap vao n: ");
scanf("%d", &n);
float s;
int a;
s = sqrt(n);
a=s;
if (s==a)
	printf("%d la so chinh phuong",n);
else
	printf("%d ko phai la so chinh phuong",n);
	
//25
printf("\n");
int temp,k, rev = 0;
temp = n;
while(temp>0)
{
	k = temp%10;
	rev = rev*10 + k;
	temp/=10;
	}
if(rev==n)
printf("%d la so doi xung", n);
else
printf("%d ko doi xung",n);
}
