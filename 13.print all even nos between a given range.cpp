//Q13. Accept a start and end range from the user and print all even number between them.

#include<stdio.h>
#include<conio.h>
void main()
{
	int start,end,i;
	printf("Enter the starting number");
	scanf("%d",&start);
	printf("Enter the ending number");
	scanf("%d",&end);
    
	for(i=start+1;i<end;i++)
	{
		if(i%2==0)
			printf("%d",i);
	}
	getch();
}