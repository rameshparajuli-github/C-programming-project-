#include<stdio.h>
#include<conio.h>
 main()
{
	int i,j,c;
	struct student

	{
	int marks,class;
	char name[30];
	
}st[3],temp;
for(i=0;i<3;i++)
{
	printf("\n Enter the Name \n ");
	scanf("%s",st[i].name);
		printf("\n Enter the Class\n ");
	scanf("%d",&st[i].class);
	
		printf("\n Enter the  Marks \n");
	scanf("%d",&st[i].marks);
}
for(i=0;i<3;i++)
{
	for(j=i+1;j<3;j++)
	{
		if(st[i].marks<st[j].marks)
		{
			temp=st[i];
			st[i]=st[j];
			st[j]=temp;
		}
	}
}
printf("\n Name \t class \t Marks ");
for(i=0;i<3;i++)
{
	printf("\n %s \t %d \t %d ", st[i].name,st[i].class,st[i].marks);
	return 0;
}
}
