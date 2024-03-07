#include <stdio.h>
#include <math.h>
int main(void) {

int a;

printf("Nhap vao a: ");
scanf("%d", &a);
for(int i=1;i<=abs(a);i++)
{
	if(abs(a)%i==0){
		printf("%d\n", i);
		}
	}
}
