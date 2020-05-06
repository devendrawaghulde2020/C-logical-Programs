#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char str1[20],str2[20];
	int len1,len2,i;
	scanf("%s",str1);
	len1=strlen(str1);
	scanf("%s",str2);
	len2=strlen(str2);
	for(i=0;i<=((len1+len2)/2)+len2;i++)
	{
		str1[len1+i]=str2[i];
	}
	printf("%s",str1);
	getchar();
	return 0;
}