//multiplcation the number //
#include <stdio.h>
void main(){
	int a;
	int b;
	int c;
	printf("enter the number\n ");
	scanf("%d",&a);
	printf("enter the number how many times you multiply \n");
	scanf("%d",&c);
	for (b=1;b<=c;b++)
	{
			printf("%d * %d  = %d\n",a,b,a*b);
	}
	if(b == 10)
	{
			printf("\n",b);
	}

}
