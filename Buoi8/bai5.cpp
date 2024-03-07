#include<stdio.h>
#include<math.h>

double bai5(int n) {
	int t1 =1, t2 =1, f= 1,i;
	for(i=3;i<=n;i++){
		f= t1 + t2;
		t1 = t2;
		t2 = f;
		}
	return f;
}

int main(void) {
	int n;
	do{
		printf("Nhap n:");
		scanf("%d", &n);
	}while(n<1);
	int x = bai5(n);
	printf("%d", x);

	}
