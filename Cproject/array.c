 //array
#include <stdio.h>
int main (){
	int a[5];
	int b;
	int sum=0 ;
	float avg;
		printf("enter the 5 number ");
	for (b=0; b<=4 ;b++)
		scanf("%d",&a[b]);
			for (b=0; b<=4 ;b++)
	  sum =sum + a[b];
	  printf("enter the 5 number is %d\n",sum);
	  avg=sum /5.0;
	  printf("\nthe average value is  %f ",avg);
		
		return 0;
}

