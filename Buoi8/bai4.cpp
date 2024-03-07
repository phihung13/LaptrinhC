#include<stdio.h>
#include<math.h>

double bai4(int n) {
	int p = 1;
	int i;
	for(i=2;i<=n;i++) p*=i;
	return p;
}

int main(void) {
	int n;
	do{
		printf("Nhap n:");
		scanf("%d", &n);
	}while(n<0);
	printf("Giai thua cua %d = %d", n, bai4(n));

	}
