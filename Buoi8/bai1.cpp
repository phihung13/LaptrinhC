#include<stdio.h>
#include<math.h>

int bai1(int n) {
	float m = sqrt(n);
	if(n<2) return 0;
	for(int i=2;i<=m;i++)
		if(n%i==0) return 0;
	else return 1;
	}
int main(void) {
	float n;
	do {
		printf("Nhap vao n:");
		scanf("%f", &n);
		} while(n<2);

		for(int i=2;i<=n;i++){
			if( bai1(i)==1)
			printf("%4d\n", i);
		}
	printf("\n\n");
	return 0;
	}
