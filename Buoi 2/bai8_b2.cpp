//bai8

#include <stdio.h>
#include <ctype.h>

int main() {
	char x,y,a,b;
	
	printf("Nhap vao mot ky tu in thuong:");
		scanf("%c", &x);
	printf("Nhap vao mot ky tu in hoa:\n");
		scanf("%c", &y);
		
	a = toupper(x);
	b = tolower(y);
	
	printf("Output: %c\n",a);
	printf("Output: %c\n",tolower(y));
	
	return 0;
	}
