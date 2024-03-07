//bai2
#include <stdio.h>
#include <math.h>
int main() {
	float cv1,cv2,s,ch;
	
	printf("Nhap vao canh vuong 1:");
	scanf("%f", &cv1);
	printf("Nhap vao canh vuong 2:");
	scanf("%f", &cv2);
	
	s = (cv1*cv2)/2;
	ch = sqrt(pow(cv1,2)+pow(cv2,2));
	
	printf("Dien tich cua tam giac la: %f", s);
	printf("\nCanh huyen cua tam giac la: %f", ch);
	return 0;
	}
