#include <stdio.h>

int main(){
    int k,n,C;
    printf("Nhap (k,n): ");
    scanf("%d%d",&k,&n);
    
//n!  
float n_than=1;
for(int i=1;i<=n;i++)
{
	n_than = n_than*i;
}
	
//k!
float k_than=1;
for(int i=1;i<=k;i++)
{
	k_than = k_than*i;
}
//(n-k)!
float c = 1;
for(int i=1;i<=(n-k);i++)
{
	c = c*i;
}

float Ckn = n_than/(k_than*c);
printf("C(k,n) = %f", Ckn);
}

