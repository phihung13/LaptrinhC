 #include <stdio.h>
 #include <math.h>
 #include <conio.h>

char KTKT()
{
			 char c;
			 fflush(stdin);	
			 printf("Nhap vao ky tu: "); scanf("%c",&c);
			 switch(c){
			  case 'u':
			  case 'e':
			  case 'o':
			  case 'a':
			  case 'i': printf("\nKy tu %c la Nguyen Am",c); break;
			  default : printf("\n Ky tu %c khong phai la Nguyen Am",c);
			}
			 getch();
 }

int Sum_Uoc(int q){
				int i, s=0;
				for(int i = 1; i <= q; i++)
			  	{
			    if(q % i == 0)
			    {
			      s = s + i;
			    }
			  }
			  return s;
			}
			
			int Num_CP( int n){
				int flag = 0;
			    int i = 0;
			    while(i <= n){
			        if( pow( i, 2) == n ) {   
			            flag = 1;
			            break;
			        }
			        i++;
			    }
			    return flag;
}

int main(){
				int n,k;
				do{
				printf("Choose one:\n"
						"   1 - Kiem tra Nguyen Am\n"
						"   2 - Tong uoc so cua N\n"
						"   3 - Kiem tra so Chinh Phuong\n"
				);
				printf("Ban chon:");
				scanf("%d", &k);
				}while(k<= 0 || k >= 4);
				
				if(k==1){
					KTKT();
					}
				if(k==2){
					printf("Nhap so N:");
			    	scanf("%d",&n);
			    	printf("Tong uoc so cua %d la %d",n,Sum_Uoc(n));
					}
				if(k==3){
					printf("Nhap so N:");
			    		scanf("%d",&n);
			    		int check = Num_CP(n);
			            if( check == 1 ) printf("%d la so chinh phuong\n", n);
			            else printf("%d khong phai la so chinh phuong\n", n);
					}
}

