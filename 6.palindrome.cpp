#include<stdio.h>
#include<conio.h>
void main()
{
	int number,rev=0,temp,mod;
	printf("Enter the number you want to check a palindrome or not:");
	scanf("%d",&number);
	temp=number;
	while(temp!=0)
	{
		mod=temp%10;
		rev=rev*10+mod;
		temp=temp/10;
	}
	if(rev==number)
	{
		printf("The number %d is a palindrome",number);
	}
	getch();
}