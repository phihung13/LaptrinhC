#include <stdio.h>
int main() {
	//bai 6
	int x, Nam, Tuan, Ngay;
	printf("\n Nhap vao so ngay:");
	scanf("%d", &x);
	Nam = x/365;
	Tuan = (x - Nam*365)/7;
	Ngay = x - Nam*365 - Tuan*7;
	printf("\n Nam = %d", Nam);
	printf("\n Tuan = %d", Tuan);
	printf("\n Ngay = %d\n", Ngay);
	}
