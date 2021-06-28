//break example
#include <stdio.h>
void main(){
	int a ;
	double b;
	double c;
	for(a=1;a<=5;a++)
	{
	printf("Enter The Number");
	scanf("%lf",&b);
		c+=b;
			if(b<0){
		break;
	}
	}
	printf("The sum is %lf\n",c);
	
}
