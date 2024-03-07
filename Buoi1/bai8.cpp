#include <stdio.h>
int main() {
	//bai 8
	int trongluong1, trongluong2, khoiluong1, khoiluong2;
	float avg,tkl;
	printf("\nNhap vao trong luong item.1:");
	scanf("%d", &trongluong1);
	printf("Nhap vao so luong item.1:");
	scanf("%d", &khoiluong1);
	printf("\nNhap vao trong luong item.2:");
	scanf("%d", &trongluong2);
	printf("Nhap vao so luong item.2:");
	scanf("%d", &khoiluong2);
	tkl = khoiluong1 + khoiluong2;
	avg = (trongluong1*khoiluong1 + trongluong2*khoiluong2)/tkl;
	printf("Gia tri trung binh cua cac mat hang: %f\n", avg);
	}
