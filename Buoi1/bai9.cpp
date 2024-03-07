#include <stdio.h>
int main() {
	//bai10
	int x,h,p,s;
	printf("\nNhap vao so giay):");
	scanf("%d", &x);
	h= x/3600;
	p = (x-h*3600)/60;
	s = x - h*3600 - 60*p;

	printf("H:M:S = %d:%d:%d",h,p,s);
	return 0;
	}
