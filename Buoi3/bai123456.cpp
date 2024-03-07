#include<stdio.h>
#include <math.h>

int bai1(void)
{
int a, b;
printf("Nhap So Luong Can mua: ");
	scanf("%d", &a);	
	if(a>10)
	{
		b = (5000*a)*90;
		b = b/100;
		printf(" So tien can tra la : %d", b);
		}
	else
	{
		b = a*5000;
		printf(" So tien can tra la : %d", b);
	}
}
int bai2(void)
{
	int a,b ;
	printf(" Nhap So a : ");
	scanf("%d", &a);
	printf(" Nhap So b : ");
	scanf("%d", &b);
	if(b%a==0)
	printf("b la uoc cua a");
	else
	printf("b khong phai la uoc cua a");
}

int bai3(void)
{
	int a,b,c;
	printf(" Nhap So a : ");
	scanf("%d", &a);
	printf(" Nhap So b : ");
	scanf("%d", &b);
	printf(" Nhap So c : ");
	scanf("%d", &c);
	if(a>b)
	{
		if(a>c)
		printf("a la so lon nhat");
		else
		printf("c la so lon nhat"); }
	else if(b>c) 
		printf("b la so lon nhat");
	else
		printf("C la so lon nhat");
}

int bai4(void)
{
	float x,y;
	printf("Nhap x : ");
		scanf("%f", &x);
	printf("Nhap y : ");
		scanf("%f", &y);
		
	if(x>0 && y>0) printf("The coordinate point(%.2f,%.2f) lies in the 1st Quadrant",x,y);
	if(x<0 && y>0) printf("The coordinate point(%.2f,%.2f) lies in the 2th Quadrant",x,y);
	if(x<0 && y<0) printf("The coordinate point(%.2f,%.2f) lies in the 3th Quadrant",x,y);
	if(x>0 && y<0) printf("The coordinate point(%.2f,%.2f) lies in the 4th Quadrant",x,y);
}
}
int bai5(void)
{
	int a,b,c,d;
	float x1, x2;
	printf(" Nhap So a : ");
	scanf("%d", &a);
	printf(" Nhap So b : ");
	scanf("%d", &b);
	printf(" Nhap So c : ");
	scanf("%d", &c);
	
	d = b*b - 4*a*c;
	if(d>0) {
	
		d = sqrt(d);
		x1 = (-b + d)/ (2*a);
		x2 = (-b - d)/ (2*a) ;
		printf("Phuong trinh co nghiem x1 = %f", x1);
		printf("Phuong trinh co nghiem x2 = %f", x2);
		}
	else if(d==0) {
			x1 = -b/(2*a); 
			printf("Phuong trinh co nghiem kep x0 = %.1f", x1);
			}
	else 
		printf("Phuong trinh vo nghiem");
}

int bai6(void)
{
	float a;
	printf(" Nhap Nhiet Do : ");
	scanf("%d", &a);
	if(a<0)
	printf(" Freezing weather ");
	if(a>0 && a<10)
	printf(" Very Cold weather ");
	if(a>10 && a<20)
	printf(" Cold weather ");
	if(a>20 && a<30)
	printf(" Normal in Temp ");
	if(a>30 && a<40)
	printf(" Its Hot ");
	if(a>=40)
	printf(" Its Very Hot ");
}
int main()
{
	bai4();
}

