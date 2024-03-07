#include<stdio.h>
#include<math.h>

int nguyento(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    if(n%i==0) return 0;
    return 1;
}
int main()
{  
    int i=2;
    int n,count=0;
    printf("Nhap n = ");
    scanf("%d",&n);
    while(count<n)
    {
        if(nguyento(i)==1)
        {
            printf("%d ",i);
            count++;
        }
        i++;
    }
}
