//prime number 
#include <stdio.h>
int main(){
	int num , i , c = 0;
	printf("enter the number ");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		if ((num % i) ==0)
		{
			c++;
		}
		}
		if(c == 2)
		
			printf("%d is prime number\n", num);
			
		
		else
			printf("%d is composite number \n",num);
			
}
