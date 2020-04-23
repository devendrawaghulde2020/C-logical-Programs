//Q12. Accept a number from the user and print those many numbers after the number. 

#include<stdio.h>
#include<conio.h>
void main()
{
	int no,i;
	printf("Enter the number:");
	scanf("%d",&no);

	for(i=no+1;i<=no+no;i++)
	{
		printf("%d\t",i);
	}
	getch();  
}