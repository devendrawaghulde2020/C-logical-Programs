//Q7. Accept a number from the user and print a table for that number 
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,i;
	printf("Enter the number for printing thw table:\t");
	scanf("%d",&number);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d =\t %d \n",number,i,number*i);
	}
	getch();
}
