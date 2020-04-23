//Q16. Accept a number and a single digit from the user. Then check the number of occurrences of that digit in the number.

#include<stdio.h>
#include<conio.h>
void main()
{
	static int count=0;
	int bigno,no,mod,temp;
	printf("Enter big number and 'no' to check occurrence respectively");
	scanf("%d %d",&bigno,&no);
	temp=bigno;
	while(bigno!=0)
	{
		mod=bigno%10;
		if(mod==no)
			count++;
			bigno=bigno/10;
	}
	printf("The number %d occurred %d times",temp,count);
	getch();
}