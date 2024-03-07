#include <stdio.h>
#include <math.h>
int main(void) {

int n;
//21
printf("Nhap vao n: ");
scanf("%d", &n);
int i, a = 0;
int s;
while(n>0){
	n = n/10;
	a = a + 1;
	}
printf("So luong chu so la: %d\n", a);
}



