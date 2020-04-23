#include<stdio.h>
#include<conio.h>
void main()
{
	int no1,no2,max=0;
	scanf("%d %d",&no1,&no2);

	if(no1>max)
		max=no1;
	else
		max=no2;
    
	while(1)
	{
		if(max%no1==0 && max%no2==0)
		{
			printf("The LCM of numbers %d & %d is %d",no1,no2,max);
			break;
		}

		max++;
	}
	getch();
}