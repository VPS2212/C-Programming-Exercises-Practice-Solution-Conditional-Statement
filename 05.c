#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if(age>18)
	{
		printf("You are eligible for casting your vote");
	}
	else
	{
		printf("your are not eligible for vote");
	}
	return 0;
}
