#include<stdio.h>
#include<math.h>

int bai3(int x, int y, int r) {
	int d2 = x*x + y*y;
	int r2 = r*r;
	if (d2<r2) return 1;
	else if(d2==r2) return 0;
	else return -1;
}

int main(void) {
	int x,y,r;
	printf("Nhap vao x,y:");
	scanf("%d%d", &x,&y);
	do{
		printf("Nhap r:");
		scanf("%d", &r);
	}while(r<0);
	if(bai3(x,y,r) == 1) printf("The point is in the circle");
	else if(bai3(x,y,r) == 0) printf("The point is on the circle");
	else printf("The point is out of the cicle");

	}
