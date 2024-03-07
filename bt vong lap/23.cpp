#include <stdio.h>
#include <math.h>
int main(void) {
int n;
//23
printf("Nhap vao n: ");
scanf("%d", &n);
int sotachra, k=0, s= 1;
for (;n!=0;){
	sotachra = n%10;
	if(sotachra %2==0){
		printf("%d ", sotachra);
		s = s*sotachra;
		}
	n/=10;
	}
	printf("\n%d", s);
}
