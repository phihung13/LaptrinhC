#include <stdio.h>
#include <math.h>
int PTbac2()
{
			    int a, b, c, denta;
			    
			    printf("1 - Quadratic Equation\n");
			    printf("Nhap a:");
			    scanf("%d",&a);
			    printf("Nhap b:");
			    scanf("%d",&b);
			    printf("Nhap c:");
			    scanf("%d",&c);
			    denta = b*b - 4*a*c;
			    
			    if(denta < 0)
			    {
			        printf("Phuong trinh %dx^2 + %dx + %d = 0 vo nghiem", a, b, c);
			    }
				else if(denta==0)
				{
			        printf("Phuong trinh %dx^2 + %dx + %d = 0 co nghiem duy nhat: x1 = x2 = %f", a, b,c, (float)-b/(2*a));
			    }
				else
				{
			        printf("Phuong trinh %dx^2 + %dx + %d = 0 co hai nghiem là:\n", a, b,c);
			        printf("x1 = %f \n",(float)(-b + sqrt(denta)) / (2*a));
			        printf("x1 = %f \n",(float)(-b - sqrt(denta)) / (2*a));
			    }
			    return 0;
}

int Bank()
{
				printf("2- Bank deposit problem\n");
				float d,r;
			    int n;
			    
			    do{
				    printf("Nhap tien von:");
				    scanf("%f", &d);
				}while(d<=0);
			    
			    do{
				    printf("Nhap lai suat:");
				    scanf("%f", &r);
				}while(r<0.0 || r>=1.0);
			    
			    do{
				    printf("Nhap vao so nam:");
				    scanf("%d", &n);
				}while(n<=0);
			    
			    float lai = d*pow((1+r),n);
			    
			    printf("Tien lai = %.4f",lai);
			    return 0;
}

int main(void) 
{
				int k;
				do{
					printf("Choose one:\n"
						   "   1 - Quadratic Equation\n"
						   "   2 - Bank deposit problem\n"
						   "   3 - Quit\n"
						  );
					printf("Ban chon:");
					scanf("%d", &k);
				}while(k<= 0 || k >= 4); // k = 1 to 3
				
				if(k==1) 
				{
					PTbac2();
				}
				else if(k==2)
				{
					Bank();
				}
				else if(k==3) return 0;
}
