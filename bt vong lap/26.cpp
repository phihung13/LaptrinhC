#include <stdio.h>
#include <math.h>
int main(void) {
int n;
//26
printf("Nhap vao n: ");
scanf("%d", &n);
int i=1;
while(i<=n) {
	float s = sqrt(i);
	int a = s;
	if(s==a) printf("%d\n", i);
	i = i+1;
	}
}
