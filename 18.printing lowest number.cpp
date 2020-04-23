#include<stdio.h>
#include<conio.h>
void  main()
{
	int number,min,i,first;
	scanf("%d",&first);
	min=first;
	for(i=0;i<4;i++)
    {
		scanf("%d",&number);
		if(number<min)
			min=number;
	}
	printf("The minimum number entered is %d",min);
	getch();
}