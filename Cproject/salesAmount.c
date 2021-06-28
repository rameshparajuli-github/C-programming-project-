 #include<stdio.h>
 #include<conio.h>
 #include<math.h>
 int main(){



float totalCommision =0;
float salesAmount;
printf( "Enter a value :");
scanf("%f",&salesAmount);

if(salesAmount <= 5000)
 {
	totalCommision = 5*5000/100;
}
else if(salesAmount >= 5000 && salesAmount <= 10000) {
	totalCommision = 10*5000/100;
}

else
{
salesAmount > 10000 ;
totalCommision = 15*5000/100;
printf("Sales Amount= %f\n",salesAmount);
printf("Total Commision= %f",totalCommision);

}
return 0;
}

   
