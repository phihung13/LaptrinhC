#include <stdio.h>
#include <math.h>
int main() {
	//bai1
	int x1,y1,x2,y2;
	float h;
	printf("\nNhap vao x1):");
		scanf("%d", &x1);
	printf("\nNhap vao y1):");
		scanf("%d", &y1);
	printf("\nNhap vao x2):");
		scanf("%d", &x2);
	printf("\nNhap vao y2):");
		scanf("%d", &y2);
		
	h= sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	printf("Khoang cach tu A(%d,%d) den B(%d,%d) la: %0.4f",x1,y1,x2,y2,h);
	return 0;
	}
	
