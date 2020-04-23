//Q8. Accept a number from the user check if it is special number or not? Example: 145 1!=14!=1*2*3*4 5!=1*2*3*4*5 sum of the factorials is (1+24+120=145) 
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,mod,i,temp,sum=0;
	printf("Enter the number to check if special number:");
	scanf("%d",&number);
	temp=number;
	while(number!=0)
	{
		mod=number%10;
		int fact=1;
		for(i=1;i<=mod;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		number=number/10;
	}

	if(temp==sum)
	{
		printf("The number %d is a special number",temp);
	}
	getch();
}