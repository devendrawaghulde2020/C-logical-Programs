//Q14. Accept start and end range from the user and print all odd numbers between them.
#include<stdio.h>
#include<conio.h>
void main()
{
	int number1,number2,i;
	printf("Enter the first number");
	scanf("%d",&number1);
	printf("Enter the second number");
	scanf("%d",&number2);

	for(i=number1+1;i<number2;i++)
	{
		if(i%2!=0)
			printf("%d",i);
	}
	getch();
}