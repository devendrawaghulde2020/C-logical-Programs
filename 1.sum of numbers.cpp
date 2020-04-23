// 1.Accept 10 numbers from the user and calculate their sum. 

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,number,sum=0;
    printf("Enter the numbers which you want:");
    for(i=0;i<10;i++)
    {
		scanf("%d",&number);
		sum=sum+number;
    }
	printf("The sum of the numbers is: %d",sum);
	getch();
}