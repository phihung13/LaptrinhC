#include <stdio.h>
#include <math.h>
int main(void) {
	int n, s;
	printf("Nhap vao so nguyen N:");
	scanf("%d", &n);
	printf("N = %d\n", n);
	
	for (int i =0; i<=10; i ++){
		s = n * i;
		printf("%d x %d = %d\n", n, i,s);
		}
}
