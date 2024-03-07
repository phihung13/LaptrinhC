#include <stdio.h>
#include <math.h>
int main(void) {

int n;
//1
printf("Nhap vao n: ");
scanf("%d", &n);
for(int i=1;i<=n;i++)
{
	printf("%d ", i);
}
//2
printf("\n");
for(int i=n;i>0;i--)
{
	printf("%d ", i);
}
}
