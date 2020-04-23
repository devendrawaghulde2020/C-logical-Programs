 //Q5. Accept a number from the user and reverse it. 

#include<stdio.h>
#include<conio.h>
void main()
{
   int number,rem,sum=0;
   printf("Enter a number you want to reverse:");
   scanf("%d",&number);
   
   while(number!=0)
   {
	   rem=number%10;
	   sum=sum*10+rem;
	   number=number/10;
   }
   printf("The reversed number is : %d",sum);
   getch();
}