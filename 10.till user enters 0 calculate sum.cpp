//Q10. Go on accepting numbers from the user till the user enters 0 and calculate the sum of these numbers.
#include<stdio.h>
#include<conio.h>
void main()
{
	int number,sum=0;
	printf("Enter number");
	do{
	scanf("%d",&number);
	sum=sum+number;
	}while(number!=0);
	printf("The sum is:%d",sum);
	getch();
}