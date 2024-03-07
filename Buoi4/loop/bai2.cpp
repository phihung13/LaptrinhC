#include <stdio.h>
#include <math.h>
int main(void) {

int num=1,a;

printf("Nhap vao a: ");
scanf("%d", &a);
for(int i=1;i<=a;i++)
{
	num = num*i;
}
printf("Giaithua = %d\n", num);
}
