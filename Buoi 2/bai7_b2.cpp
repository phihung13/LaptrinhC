//bai7

#include <stdio.h>
#include <math.h>

int main() {
	int x,y;
	float a,b;
	
	printf("Nhap vao so nguyen x:");
	scanf("%d", &x);
	printf("Nhap vao so nguyen y:");
	scanf("%d", &y);
	
	a = sqrt(1+pow(x,2)+pow(y,2));
	b = 3 + pow(x+y,2);

	printf("Ket qua bieu thuc la: %f", a/b);

	}
