// Q3. Accept 10 numbers from the user and count how many are positive, negative or zero. 

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,m=0,n=0,o=0,count=0,numbers;
	for(i=0;i<10;i++)
    {
		scanf("%d",&numbers);
		if(numbers>0)
			m++;
		else if(numbers<0)
		    n++;

		else
			o++;
	}

	printf("The positive,negative and zero numbers are respectively: %d , %d , %d",m,n,o);
	getch();
}