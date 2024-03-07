#include <stdio.h>
#include <math.h>
int main(void) {

int a,s;

printf("Nhap vao a: ");
scanf("%d", &a);
s=a;
for(int i=1;i<=10;i++)
{
	a = s*i;
	printf("%d x %d = %d\n", s,i,a);
}
}
