//Q9. Accept a number from the user and check if it is an Armstrong number or not ? 
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,mod,result,sum=0,temp;
	printf("Enter the number to check Armstrong:");
	scanf("%d",&number);      //153
	temp=number;
	while(number!=0)       
	{
		int result;
		mod=number%10;
		result=mod*mod*mod;
		sum=sum+result;
		number=number/10;
	}
	if(sum==temp)
		printf("The number is ARMSTRONG Number");
	else
		printf("The number is NOT ARMSTRONG Number");
	getch();
}