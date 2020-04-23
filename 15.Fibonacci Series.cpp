#include<stdio.h>
#include<conio.h>
void main()
{
	int number,a=0,b=1,temp;
	printf("Enter the number for Fibonacci Series:  ");
	scanf("%d",&number);
	printf("0 1 ");
	while(number-2!=0)
	{
		temp=a+b;
		a=b;
		b=temp;
		printf("%d\t",temp);
		number--;
	}
	getch();
}