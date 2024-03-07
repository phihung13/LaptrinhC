//bai3
#include <stdio.h>
#include <math.h>
int main() {
	float a, b, c, p, chuvi, dientich;
	printf("Nhap vao canh a:");
	scanf("%f", &a);
	printf("Nhap vao canh b:");
	scanf("%f", &b);
	printf("Nhap vao canh c:");
	scanf("%f", &c);
	
	p = (a+b+c)/2;
	chuvi = p*2;
	dientich = sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("Chu vi cua tam giac la: %f\n", chuvi);
	printf("Dientich cua tam giac la: %f", dientich);
	}
