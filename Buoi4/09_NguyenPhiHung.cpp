#include <stdio.h>
#include <math.h>
int main(void) 
{
int num, hang_chuc, hang_dv, hang_tram;
printf("Nhap vao mot so: ");
scanf("%d", &num);

hang_tram = num/100;
hang_chuc = (num-hang_tram*100)/10;
hang_dv = num%10;

if (num == 0)
	printf("Khong");
if (num == 10)
	printf("Muoi");
switch(hang_tram)
{
	case 1: printf("Mot tram ");
		break;
	case 2: printf("Hai tram ");
		break;
	case 3: printf("Ba tram ");
		break;
	case 4: printf("Bon tram ");
		break;
	case 5: printf("Nam tram ");
		break;
	case 6: printf("Sau tram ");
		break;
	case 7: printf("Bay tram ");
		break;
	case 8: printf("Tam tram ");
		break;
	case 9: printf("Chin tram ");
		break;
	}
if(hang_chuc == 0 && hang_dv == 0) {
	switch(hang_chuc)
{
	case 0:
		break;
		}
	}
if(hang_chuc == 0 && hang_dv != 0) {
	switch(hang_chuc)
{
	case 0: printf("le ");
		break;
		}
	}
switch(hang_chuc)
{
	case 1: printf("muoi ");
		break;
	case 2: printf("hai muoi ");
		break;
	case 3: printf("ba muoi ");
		break;
	case 4: printf("bon muoi ");
		break;
	case 5: printf("nam muoi ");
		break;
	case 6: printf("sau muoi ");
		break;
	case 7: printf("bay muoi ");
		break;
	case 8: printf("tam muoi ");
		break;
	case 9: printf("chin muoi ");
		break;
	}
switch(hang_dv)
{
	case 1: printf("mot");
		break;
	case 2: printf("hai");
		break;
	case 3: printf("ba");
		break;
	case 4: printf("bon");
		break;
	case 5: printf("nam");
		break;
	case 6: printf("sau");
		break;
	case 7: printf("bay");
		break;
	case 8: printf("tam");
		break;
	case 9: printf("chin");
		break;
}
}

