//switch case 
#include <stdio.h>
int main(){
	int num,b;
	printf("Enter the only one number from 1 to 7:  ");
	scanf("%d",&num);
	switch(num){
	case 1:
		printf("This day is Sunday");
		break;
	case 2:
		printf("This day is Monday");
		case 3:
		printf("This day is Tuesday");
		break;
	case 4:
		printf("This day is Wednesday");
		break;
		case 5:
		printf("This day is Thursday");
		break;
	case 6:
		printf("This day is Friday");
		break;
		case 7:
		printf("This day is Saturday");
		break;
		defult:
			printf("Invlid number");
}
	return 0;
	
}
