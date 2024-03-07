#include <stdio.h>
#include <math.h>
int main(void) {
int n;
//22
printf("Nhap vao n: ");
scanf("%d", &n);
int sotachra, k=0;
for (;n!=0;){
	sotachra = n%10;
	k = k + sotachra;
	n/=10;
	printf("%d ", sotachra);
	}
	printf("\n%d", k);
}
