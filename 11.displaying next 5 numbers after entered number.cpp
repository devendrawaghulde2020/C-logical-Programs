//Q11. Accept a number from the user and print the next 5 numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,i;
	printf("Enter number you want");
	scanf("%d",&number);
	for(i=number+1;i<=number+5;i++)
	{
		printf("%d \t",i);
	}
	getch();
}
