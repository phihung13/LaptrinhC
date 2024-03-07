#include <stdio.h>
#include <math.h>
int main(void) {

int n;
//3
printf("Nhap vao n: ");
scanf("%d", &n);
for(int i=1;i<=n;i++)
{
	if(i%2==0)
	printf("%d ", i);
}
printf("\n");
//4
for(int j=n;j>0;j--)
{
	if(j%3==0)
	printf("%d ", j);
}
//5
printf("\n");
for(int j=1;j<=n;j++)
{
	if(j%2!=0){
		if(j%3==0)
		printf("%d ",j);
	} 
}
//6
printf("\n");
for(int j=1;j<=n;j++)
{
	if(n%j==0)
	printf("%d ", j);
}
}

