#include <stdio.h>
#include <math.h>
int kiemtra(int a, int b, int c) {
		if(a%400==0 || b%4==0 || c%100!=0){
			if(a>0 && a<30)
				return 0;
			return 1;
		}
		else {
			if(a>=1 && a<=31)
				return 0;
			return 1;
			if(b>=1 && b<=12)
				return 0;
			return 1;
			if(c>0)
				return 0;
			return 1; }			
		}
	
	int fibo(int n) {
		int t1=1, t2=1, f=1, i;
		printf("1 ");
		while(f<=n) {
			printf("%d ", f);
			f = t1 + t2;
			t1 = t2;
			t2 = f;
		}
	}
	
	int main(void) {
	int k;
	do{
	printf("Choose one:\n"
			"   1 - Quadratic Equation\n"
			"   2 - Bank deposit problem\n"
			"   3 - Quit\n"
	);
	printf("Ban chon:");
	scanf("%d", &k);
	}while(k<= 0 || k >= 4);
	
	if(x==1) {
			int n;
			do{
				printf("Nhap n: ");
				scanf("%d", &n);	
			}while(n<1); 
			fibo(n); 
			}
	if(x==2) {
			int a, b, c;
			printf("Nhap ngay, thang, nam: ");
			scanf("%d %d %d", &a, &b, &c);
			if(kiemtra(a, b, c))
				printf("Ngay thang nam da nhap khong hop le");
			else 
				printf("Ngay thang nam da nhap hop le"); }
	if(x==3)
			return 0;
	}
