#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if(year%100!=0 && year%4==0 ||year%400==0)
	{
	printf("Entered Year is Leep year");
	}
	else 
		{
		printf("Entered year is not Leep year");
		}
	return 0;
}
