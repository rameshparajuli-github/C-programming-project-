//Gto statemet 
#include <stdio.h>
void main(){
	const a=5;
	int b;
	double c;
	double d;
	for (b=1;b<=a;b++)
	{
		printf("Enter the Number");
		scanf("%lf",&c);
		
	
	if (c==0)
	{
		goto exit;
		c+=d;
	}
}
       exit :
       printf("the sum is %.1lf",c,d,c+d);

}
