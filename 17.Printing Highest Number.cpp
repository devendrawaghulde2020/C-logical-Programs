//Q17. Accept 10 numbers from the user and print the highest number. 

#include<stdio.h>
#include<conio.h>
void main()
{
	int number,i,max=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&number);

		if(number>max)
			max=number;
	}
	printf("The maximum number of all is %d",max);

	getch();
} 