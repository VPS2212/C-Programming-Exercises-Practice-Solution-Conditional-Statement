#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("1st Number a=%d\n",a);
	printf("2nd Number b=%d\n",b);
	printf("3rd Number c=%d\n",c);
	if(a>b && a>c)
	{
		printf("1st Number is Greatest Among three\n");
	}
	else
	{
		if(b>c && b>a)
		{
			printf("2nd Nmuber is Greatest Among three\n");
		}
		else
		{
			if(c>a && c>b)
			{
			printf("3rd Numberr is Greatest Amont three\n");
			}
			else
			{
				printf("Undifined");
			}
		}
	}
	
	return 0;

}

