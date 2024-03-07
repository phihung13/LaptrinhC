#include <stdio.h>
#include <math.h>
int main(void) {
int n;
printf("Nhap vao n: ");
scanf("%d", &n);

//10
float s3=0;
for(int i=1;i<=n;i++)
{
	s3 = s3+pow(i,2);
}
	printf("%f",sqrt(s3));
printf("\n");
//11
int s4=0;
for(int i=1;i<=n;i++)
{
	s4 = s4 + i*(i+1)*(i+2);
}
	printf("%d", s4);
//12
int s5=0;
if(n%2==0) {
	for(int i=1;i<=n;i++){
		if(i%2==0){
		s5 = s5 + i;
		}
	}
}
else {
	for(int i=1;i<=n;i++){
		if(i%2!=0){
		s5 = s5 + i;
		}
	}
	}
printf("\n%d", s5);
}
