#include<stdio.h>
#include<conio.h>
int main(){
	int l,b,area = 0;
	printf("Enter the length \n");
	scanf("%d",&l);
	printf("Enter the breadth\n");
	scanf("%d",&b);
	area= l * b;
	printf("The area of rectangle is ",area);
	return 0;
}
