//bai11

#include <stdio.h>
#include <math.h>

int main() {
	//input
	int ngay, tuan;
	printf("So ngay thue khach san:");
		scanf("%d", &ngay);
	//process
	tuan = ngay/7;
	ngay = ngay - tuan*7;
	float sotien = tuan*700000 + ngay*120000;
	//output
	printf("So tien can tra la: %.3f", sotien);
	}
