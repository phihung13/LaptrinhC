//bai6

#include <stdio.h>
#include <math.h>

int main() {
	int x;
	float a,b,c,d,e;
	
	printf("Nhap vao so nguyen x:");
	scanf("%d", &x);
	
	a = pow(x,2);
	b = 1 + a;
	c = 1 + a/b;
	d = 1 + a/c;
	e = a/d;

	printf("Ket qua bieu thuc la: %f", e);

	}
