#include <stdio.h>
#include <math.h>
int main(void) 
{
int num, hang_chuc, hang_dv;
printf("Nhap vao mot so bat ki: ");
scanf("%d", &num);

hang_chuc = num/10;
hang_dv = num%10;

if (num == 0)
	printf("Khong");
if (num == 10)
	printf("Muoi");
	
switch(hang_chuc)
{
	case 2: printf("Hai muoi ");
		break;
	case 3: printf("Ba muoi ");
		break;
	case 4: printf("Bon muoi ");
		break;
	case 5: printf("Nam muoi ");
		break;
	case 6: printf("Sau muoi ");
		break;
	case 7: printf("Bay muoi ");
		break;
	case 8: printf("Tam muoi ");
		break;
	case 9: printf("Chin muoi ");
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

