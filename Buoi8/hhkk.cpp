#include<stdio.h>
#include<conio.h> 
void main(void){  
char ch;  
clrscr();  
printf("\nNhap vao mot ky tu (A-Z hoac a-z): ");  
scanf("%c",&ch);  if(ch<'A' || ch>'z'){    
printf("\nKy tu nhap vao khong nam trong bang chu cai tieng Anh!");  
}  else{    
switch(ch){      
case 'a':      
case 'A':      
case 'e':      
case 'E':      
case 'i':      
case 'I':      
case 'o':      
case 'O':      
case 'u':      
case 'U':        
printf("\n'%c' la nguyen am!",ch);        
break;      
default:        
printf("\n'%c' la phu am!",ch);   
 } 
 } 
 getch();}
