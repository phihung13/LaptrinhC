#include<conio.h>
#include<stdio.h>
int main()
{
    int i=0;
    float a,tong=0;
    printf("Nhap vao mot so thuc: ");scanf("%f",&a);
    while(tong<=a)
    {
    	i++;
        tong+=1.0/i;    
    }
    printf("N = %d ",i);
} 
