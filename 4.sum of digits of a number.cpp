// Q4. Accept a number from the user and calculate the sum of digits

#include<stdio.h>
#include<conio.h>
void main()
{
	int number,temp,sum=0,modnum=0;
	printf("Enter the number you want the sum of digits of: \n");
	scanf("%d",&number);
	temp=number;
	while(temp!=0)
	{
		modnum=temp%10;

	    sum=sum+modnum;

		temp=temp/10;
	}
	printf("The sum of digits of %d is %d",number,sum);
	getch();
}
