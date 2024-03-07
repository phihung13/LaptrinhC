#include <stdio.h>
#include <math.h>
int main(void) {
int num,a;

printf("Nhap vao a: ");
scanf("%d", &a);
for(int i=0;i<a;i++)
{
	num = 9*(10^i);
	printf("num = %d\n", num);
}
printf("Tong = %d\n", num);
}
