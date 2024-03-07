#include <stdio.h>
#include <math.h>
int main(void) {
int n;
printf("Nhap vao n: ");
scanf("%d", &n);
//15
int s=0;
for(int i=0;i<=n;i++){
		if(i%5==0){
		s+=i;
		printf("%d ",i);
		}
	}
printf("\n%d", s);
//16
printf("\n---------\n");
int t=0;
for(int i=0;i<=n;i++){
		if(i%7==0){
		t = t+1;
		printf("%d ",i);
		}
	}
printf("\n%d", t);
//17
printf("\n---------\n");
int tich=1;
for(int i=0;i<=n;i++){
		if(i%3==0 && i%2!=0){
		tich = tich*i;
		printf("%d ",i);
		}
	}
printf("\n%d", tich);
//18
int a=0, tong=0;
printf("\n---------\n");
for(int j=1;j<=n;j++)
{
	if(n%j==0){
	a = a + 1;
	tong = tong + j;
	printf("%d ", j);
	}
}
printf("\nTong uoc so = %d",  tong);
}



