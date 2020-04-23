// 2.. Accept a number from the user and find the factorial of the number

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,number,fact=1;
	printf("Enter the number of which you want the factorial: \n");
	scanf("%d",&number);

	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d",number,fact);
	getch();
}